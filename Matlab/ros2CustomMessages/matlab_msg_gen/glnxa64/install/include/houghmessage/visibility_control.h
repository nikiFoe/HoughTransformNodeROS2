#ifndef HOUGHMESSAGE__VISIBILITY_CONTROL_H_
#define HOUGHMESSAGE__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define HOUGHMESSAGE_EXPORT __attribute__ ((dllexport))
    #define HOUGHMESSAGE_IMPORT __attribute__ ((dllimport))
  #else
    #define HOUGHMESSAGE_EXPORT __declspec(dllexport)
    #define HOUGHMESSAGE_IMPORT __declspec(dllimport)
  #endif
  #ifdef HOUGHMESSAGE_BUILDING_LIBRARY
    #define HOUGHMESSAGE_PUBLIC HOUGHMESSAGE_EXPORT
  #else
    #define HOUGHMESSAGE_PUBLIC HOUGHMESSAGE_IMPORT
  #endif
  #define HOUGHMESSAGE_PUBLIC_TYPE HOUGHMESSAGE_PUBLIC
  #define HOUGHMESSAGE_LOCAL
#else
  #define HOUGHMESSAGE_EXPORT __attribute__ ((visibility("default")))
  #define HOUGHMESSAGE_IMPORT
  #if __GNUC__ >= 4
    #define HOUGHMESSAGE_PUBLIC __attribute__ ((visibility("default")))
    #define HOUGHMESSAGE_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define HOUGHMESSAGE_PUBLIC
    #define HOUGHMESSAGE_LOCAL
  #endif
  #define HOUGHMESSAGE_PUBLIC_TYPE
#endif
#endif  // HOUGHMESSAGE__VISIBILITY_CONTROL_H_
// Generated 17-Oct-2023 21:18:08
 