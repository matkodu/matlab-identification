#ifndef LABUST_MSGS__VISIBILITY_CONTROL_H_
#define LABUST_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define LABUST_MSGS_EXPORT __attribute__ ((dllexport))
    #define LABUST_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define LABUST_MSGS_EXPORT __declspec(dllexport)
    #define LABUST_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef LABUST_MSGS_BUILDING_LIBRARY
    #define LABUST_MSGS_PUBLIC LABUST_MSGS_EXPORT
  #else
    #define LABUST_MSGS_PUBLIC LABUST_MSGS_IMPORT
  #endif
  #define LABUST_MSGS_PUBLIC_TYPE LABUST_MSGS_PUBLIC
  #define LABUST_MSGS_LOCAL
#else
  #define LABUST_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define LABUST_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define LABUST_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define LABUST_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define LABUST_MSGS_PUBLIC
    #define LABUST_MSGS_LOCAL
  #endif
  #define LABUST_MSGS_PUBLIC_TYPE
#endif
#endif  // LABUST_MSGS__VISIBILITY_CONTROL_H_
// Generated 02-Jun-2023 17:41:11
 