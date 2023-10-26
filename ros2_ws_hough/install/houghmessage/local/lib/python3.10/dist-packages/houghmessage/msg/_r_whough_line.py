# generated from rosidl_generator_py/resource/_idl.py.em
# with input from houghmessage:msg/RWhoughLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'cmatrix'
# Member 'vranges'
# Member 'vangles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RWhoughLine(type):
    """Metaclass of message 'RWhoughLine'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('houghmessage')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'houghmessage.msg.RWhoughLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__r_whough_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__r_whough_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__r_whough_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__r_whough_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__r_whough_line

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RWhoughLine(metaclass=Metaclass_RWhoughLine):
    """Message class 'RWhoughLine'."""

    __slots__ = [
        '_cmatrix',
        '_thaxis',
        '_raxis',
        '_vranges',
        '_vangles',
        '_row',
        '_col',
    ]

    _fields_and_field_types = {
        'cmatrix': 'sequence<float>',
        'thaxis': 'float',
        'raxis': 'float',
        'vranges': 'sequence<float>',
        'vangles': 'sequence<float>',
        'row': 'int32',
        'col': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmatrix = array.array('f', kwargs.get('cmatrix', []))
        self.thaxis = kwargs.get('thaxis', float())
        self.raxis = kwargs.get('raxis', float())
        self.vranges = array.array('f', kwargs.get('vranges', []))
        self.vangles = array.array('f', kwargs.get('vangles', []))
        self.row = kwargs.get('row', int())
        self.col = kwargs.get('col', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cmatrix != other.cmatrix:
            return False
        if self.thaxis != other.thaxis:
            return False
        if self.raxis != other.raxis:
            return False
        if self.vranges != other.vranges:
            return False
        if self.vangles != other.vangles:
            return False
        if self.row != other.row:
            return False
        if self.col != other.col:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmatrix(self):
        """Message field 'cmatrix'."""
        return self._cmatrix

    @cmatrix.setter
    def cmatrix(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'cmatrix' array.array() must have the type code of 'f'"
            self._cmatrix = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'cmatrix' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._cmatrix = array.array('f', value)

    @builtins.property
    def thaxis(self):
        """Message field 'thaxis'."""
        return self._thaxis

    @thaxis.setter
    def thaxis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'thaxis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'thaxis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._thaxis = value

    @builtins.property
    def raxis(self):
        """Message field 'raxis'."""
        return self._raxis

    @raxis.setter
    def raxis(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'raxis' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'raxis' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._raxis = value

    @builtins.property
    def vranges(self):
        """Message field 'vranges'."""
        return self._vranges

    @vranges.setter
    def vranges(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vranges' array.array() must have the type code of 'f'"
            self._vranges = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vranges' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vranges = array.array('f', value)

    @builtins.property
    def vangles(self):
        """Message field 'vangles'."""
        return self._vangles

    @vangles.setter
    def vangles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'vangles' array.array() must have the type code of 'f'"
            self._vangles = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'vangles' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vangles = array.array('f', value)

    @builtins.property
    def row(self):
        """Message field 'row'."""
        return self._row

    @row.setter
    def row(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'row' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'row' field must be an integer in [-2147483648, 2147483647]"
        self._row = value

    @builtins.property
    def col(self):
        """Message field 'col'."""
        return self._col

    @col.setter
    def col(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'col' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'col' field must be an integer in [-2147483648, 2147483647]"
        self._col = value
