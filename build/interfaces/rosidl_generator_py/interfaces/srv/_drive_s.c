// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from interfaces:srv/Drive.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces/srv/detail/drive__struct.h"
#include "interfaces/srv/detail/drive__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__srv__drive__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces.srv._drive.Drive_Request", full_classname_dest, 35) == 0);
  }
  interfaces__srv__Drive_Request * ros_message = _ros_message;
  {  // left_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->duration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__srv__drive__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Drive_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.srv._drive");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Drive_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__srv__Drive_Request * ros_message = (interfaces__srv__Drive_Request *)raw_ros_message;
  {  // left_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "interfaces/srv/detail/drive__struct.h"
// already included above
// #include "interfaces/srv/detail/drive__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool interfaces__srv__drive__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("interfaces.srv._drive.Drive_Response", full_classname_dest, 36) == 0);
  }
  interfaces__srv__Drive_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * interfaces__srv__drive__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Drive_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("interfaces.srv._drive");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Drive_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  interfaces__srv__Drive_Response * ros_message = (interfaces__srv__Drive_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
