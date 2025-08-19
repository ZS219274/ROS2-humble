# generated from rosidl_generator_py/resource/_idl.py.em
# with input from demo_interfaces_base:action/RealTimeDistance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RealTimeDistance_Goal(type):
    """Metaclass of message 'RealTimeDistance_Goal'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_Goal(metaclass=Metaclass_RealTimeDistance_Goal):
    """Message class 'RealTimeDistance_Goal'."""

    __slots__ = [
        '_goal_x',
        '_goal_y',
        '_goal_theta',
    ]

    _fields_and_field_types = {
        'goal_x': 'float',
        'goal_y': 'float',
        'goal_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goal_x = kwargs.get('goal_x', float())
        self.goal_y = kwargs.get('goal_y', float())
        self.goal_theta = kwargs.get('goal_theta', float())

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
        if self.goal_x != other.goal_x:
            return False
        if self.goal_y != other.goal_y:
            return False
        if self.goal_theta != other.goal_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_x(self):
        """Message field 'goal_x'."""
        return self._goal_x

    @goal_x.setter
    def goal_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_x = value

    @builtins.property
    def goal_y(self):
        """Message field 'goal_y'."""
        return self._goal_y

    @goal_y.setter
    def goal_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_y = value

    @builtins.property
    def goal_theta(self):
        """Message field 'goal_theta'."""
        return self._goal_theta

    @goal_theta.setter
    def goal_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'goal_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'goal_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._goal_theta = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_Result(type):
    """Metaclass of message 'RealTimeDistance_Result'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_Result(metaclass=Metaclass_RealTimeDistance_Result):
    """Message class 'RealTimeDistance_Result'."""

    __slots__ = [
        '_turtle_x',
        '_turtle_y',
        '_turtle_theta',
    ]

    _fields_and_field_types = {
        'turtle_x': 'float',
        'turtle_y': 'float',
        'turtle_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.turtle_x = kwargs.get('turtle_x', float())
        self.turtle_y = kwargs.get('turtle_y', float())
        self.turtle_theta = kwargs.get('turtle_theta', float())

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
        if self.turtle_x != other.turtle_x:
            return False
        if self.turtle_y != other.turtle_y:
            return False
        if self.turtle_theta != other.turtle_theta:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def turtle_x(self):
        """Message field 'turtle_x'."""
        return self._turtle_x

    @turtle_x.setter
    def turtle_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turtle_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turtle_x = value

    @builtins.property
    def turtle_y(self):
        """Message field 'turtle_y'."""
        return self._turtle_y

    @turtle_y.setter
    def turtle_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turtle_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turtle_y = value

    @builtins.property
    def turtle_theta(self):
        """Message field 'turtle_theta'."""
        return self._turtle_theta

    @turtle_theta.setter
    def turtle_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turtle_theta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turtle_theta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turtle_theta = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_Feedback(type):
    """Metaclass of message 'RealTimeDistance_Feedback'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_Feedback(metaclass=Metaclass_RealTimeDistance_Feedback):
    """Message class 'RealTimeDistance_Feedback'."""

    __slots__ = [
        '_current_distance',
    ]

    _fields_and_field_types = {
        'current_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_distance = kwargs.get('current_distance', float())

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
        if self.current_distance != other.current_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_distance(self):
        """Message field 'current_distance'."""
        return self._current_distance

    @current_distance.setter
    def current_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_SendGoal_Request(type):
    """Metaclass of message 'RealTimeDistance_SendGoal_Request'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__send_goal__request

            from demo_interfaces_base.action import RealTimeDistance
            if RealTimeDistance.Goal.__class__._TYPE_SUPPORT is None:
                RealTimeDistance.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_SendGoal_Request(metaclass=Metaclass_RealTimeDistance_SendGoal_Request):
    """Message class 'RealTimeDistance_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'demo_interfaces_base/RealTimeDistance_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['demo_interfaces_base', 'action'], 'RealTimeDistance_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Goal
        self.goal = kwargs.get('goal', RealTimeDistance_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Goal
            assert \
                isinstance(value, RealTimeDistance_Goal), \
                "The 'goal' field must be a sub message of type 'RealTimeDistance_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_SendGoal_Response(type):
    """Metaclass of message 'RealTimeDistance_SendGoal_Response'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_SendGoal_Response(metaclass=Metaclass_RealTimeDistance_SendGoal_Response):
    """Message class 'RealTimeDistance_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_RealTimeDistance_SendGoal(type):
    """Metaclass of service 'RealTimeDistance_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__real_time_distance__send_goal

            from demo_interfaces_base.action import _real_time_distance
            if _real_time_distance.Metaclass_RealTimeDistance_SendGoal_Request._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_SendGoal_Request.__import_type_support__()
            if _real_time_distance.Metaclass_RealTimeDistance_SendGoal_Response._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_SendGoal_Response.__import_type_support__()


class RealTimeDistance_SendGoal(metaclass=Metaclass_RealTimeDistance_SendGoal):
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_SendGoal_Request as Request
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_GetResult_Request(type):
    """Metaclass of message 'RealTimeDistance_GetResult_Request'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_GetResult_Request(metaclass=Metaclass_RealTimeDistance_GetResult_Request):
    """Message class 'RealTimeDistance_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_GetResult_Response(type):
    """Metaclass of message 'RealTimeDistance_GetResult_Response'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__get_result__response

            from demo_interfaces_base.action import RealTimeDistance
            if RealTimeDistance.Result.__class__._TYPE_SUPPORT is None:
                RealTimeDistance.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_GetResult_Response(metaclass=Metaclass_RealTimeDistance_GetResult_Response):
    """Message class 'RealTimeDistance_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'demo_interfaces_base/RealTimeDistance_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['demo_interfaces_base', 'action'], 'RealTimeDistance_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Result
        self.result = kwargs.get('result', RealTimeDistance_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Result
            assert \
                isinstance(value, RealTimeDistance_Result), \
                "The 'result' field must be a sub message of type 'RealTimeDistance_Result'"
        self._result = value


class Metaclass_RealTimeDistance_GetResult(type):
    """Metaclass of service 'RealTimeDistance_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__real_time_distance__get_result

            from demo_interfaces_base.action import _real_time_distance
            if _real_time_distance.Metaclass_RealTimeDistance_GetResult_Request._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_GetResult_Request.__import_type_support__()
            if _real_time_distance.Metaclass_RealTimeDistance_GetResult_Response._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_GetResult_Response.__import_type_support__()


class RealTimeDistance_GetResult(metaclass=Metaclass_RealTimeDistance_GetResult):
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_GetResult_Request as Request
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RealTimeDistance_FeedbackMessage(type):
    """Metaclass of message 'RealTimeDistance_FeedbackMessage'."""

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
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__real_time_distance__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__real_time_distance__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__real_time_distance__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__real_time_distance__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__real_time_distance__feedback_message

            from demo_interfaces_base.action import RealTimeDistance
            if RealTimeDistance.Feedback.__class__._TYPE_SUPPORT is None:
                RealTimeDistance.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RealTimeDistance_FeedbackMessage(metaclass=Metaclass_RealTimeDistance_FeedbackMessage):
    """Message class 'RealTimeDistance_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'demo_interfaces_base/RealTimeDistance_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['demo_interfaces_base', 'action'], 'RealTimeDistance_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Feedback
        self.feedback = kwargs.get('feedback', RealTimeDistance_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Feedback
            assert \
                isinstance(value, RealTimeDistance_Feedback), \
                "The 'feedback' field must be a sub message of type 'RealTimeDistance_Feedback'"
        self._feedback = value


class Metaclass_RealTimeDistance(type):
    """Metaclass of action 'RealTimeDistance'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('demo_interfaces_base')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'demo_interfaces_base.action.RealTimeDistance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__real_time_distance

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from demo_interfaces_base.action import _real_time_distance
            if _real_time_distance.Metaclass_RealTimeDistance_SendGoal._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_SendGoal.__import_type_support__()
            if _real_time_distance.Metaclass_RealTimeDistance_GetResult._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_GetResult.__import_type_support__()
            if _real_time_distance.Metaclass_RealTimeDistance_FeedbackMessage._TYPE_SUPPORT is None:
                _real_time_distance.Metaclass_RealTimeDistance_FeedbackMessage.__import_type_support__()


class RealTimeDistance(metaclass=Metaclass_RealTimeDistance):

    # The goal message defined in the action definition.
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Goal as Goal
    # The result message defined in the action definition.
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Result as Result
    # The feedback message defined in the action definition.
    from demo_interfaces_base.action._real_time_distance import RealTimeDistance_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from demo_interfaces_base.action._real_time_distance import RealTimeDistance_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from demo_interfaces_base.action._real_time_distance import RealTimeDistance_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from demo_interfaces_base.action._real_time_distance import RealTimeDistance_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
