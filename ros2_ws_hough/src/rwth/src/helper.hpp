#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <unistd.h>
#include <iostream>
#include <exception>
#include <tuple>
#include "rclcpp/rclcpp.hpp"

class HelperRWTH
 {
    public:

      //Size of C Matrix
      int sizeRowC;
      int sizeColC;
      HelperRWTH(int row, int col){
        sizeRowC = row;
        sizeColC = col;
      }



      //Finds biggest value and the belonging indices in a matrix C
      //returns them as a float: Probles with int return
      std::tuple<float, float> findMaxValue(float** C)
      {
        float maxValue = C[0][0]; // Initialize with the first element
        int numRows = sizeRowC;      // Number of rows
        int numCols = sizeColC;      //Number of columns in Matrix C

        int maxRow = 0;             //For returning the indice of max row 
        int maxCol = 0;             //For returning the indice of max col 

        // Iterate through the matrix to find the maximum value
        for (int i = 0; i < numRows; i++) 
        {
          for (int j = 0; j < numCols; j++) 
          {
            if (C[i][j] > maxValue) 
            {
              try
              {	
                maxValue = C[i][j];
                maxRow = i;
                maxCol = j;
              }
              catch(const std::exception& e)
              {
                RCLCPP_ERROR(rclcpp::get_logger("Threading"), "Exception in findMaxValue: %s", e.what());
              }
            }
          }
          
        }

        //Return indices of max value
        return std::make_tuple((float)maxRow, (float)maxCol);
      } 



      //Methode for creating peak matrix  
      float** creatPeakMatrix(float dTheta,const float delta, std::vector<float> ranges, std::vector<float> phi){

        //Initialise C Matrix for angle and range maximus 
        float** C = new float*[sizeRowC];
        for (int i = 0; i < sizeRowC; i++) {
          C[i] = new float[sizeColC];
        }
        //Filling C with 0.0/ Not sure if necessary
        for (int i = 0; i < sizeRowC; i++) {
          for (int j = 0; j < sizeColC; j++) {
            C[i][j] = static_cast<float>(0.0);
          }
        }

			  float fTheta = 0.0;
        for (int h=0; h < (sizeColC/2); h++)
        {
          fTheta += dTheta;
          std::vector<float> R;
          for (size_t k = 0; k < ranges.size(); k++)
          {	
            try
            {
              R.push_back(ranges.at(k)*cos(phi[k]-fTheta));
            }
            catch(const std::exception& e)
            {
              RCLCPP_ERROR(rclcpp::get_logger("Threading"), "Exception 0: %s", e.what());
            }
          }
          for (size_t j=1; j < R.size(); j++)
          {
            if (std::isinf(R[j]))
            {
              R[j];	
            }
            else if (R[j]>0)
            {
              try
              {
                int Ri=(int)(0.5+R[j]/delta);
                if (Ri<sizeRowC){ 
                  C[Ri][h]=C[Ri][h]+R[j]; 
                }
              }
              catch(const std::exception& e)
              {
                RCLCPP_ERROR(rclcpp::get_logger("Threading"), "Exception 1: %s", e.what());
              }
              
            }
            else
            {	
              try
              {
                int Ri=(int)(0.5-R[j]/delta);
                C[Ri][h+sizeColC/2]=C[Ri][h+sizeColC/2]-R[j]; 
              }
              catch(const std::exception& e)
              {
                RCLCPP_ERROR(rclcpp::get_logger("Threading"), "Exception 2: %s", e.what());
              }
            }
            
          }
          R.clear();
        }

        return C;
      }   

      //Methode for deleting dynamic C matrix
      void deleteCMatrix(float** C, int rows) {
        for (int i = 0; i < rows; i++) {
            delete[] C[i];  // Free memory for each row
        }
        delete[] C;  // Free memory for the array of pointers
      }


      //Methode for creating vector phi, ThAxis and RAaxis
      std::tuple<std::vector<float>, std::vector<float>, std::vector<float>> creatArray(std::vector<float> ranges, float angle_min, float angle_increment, float dTheta, const float delta)
      {
          std::vector<float> phi;
          for(size_t i = 0; i < ranges.size(); i++)
			    {
				    phi.push_back(angle_min+i*angle_increment);
			    }

          std::vector<float> ThAxis; 
          {
            float f = 0.0;
            for (int i = 0; i < sizeColC; i++)
            {
              f+=1.0;
              ThAxis.push_back(f*dTheta);	
            }
          }
				
          std::vector<float> RAxis;
          float m = 0.0;
          for (int i = 0; i < sizeRowC; i++) {
            m += 1.0;
            RAxis.push_back(m*delta);
          }	

          return std::make_tuple(ThAxis, RAxis, phi);
      }          
};