#ifndef AUV_MSGS__VISIBILITY_CONTROL_H_
#define AUV_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define AUV_MSGS_EXPORT __attribute__ ((dllexport))
    #define AUV_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define AUV_MSGS_EXPORT __declspec(dllexport)
    #define AUV_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef AUV_MSGS_BUILDING_LIBRARY
    #define AUV_MSGS_PUBLIC AUV_MSGS_EXPORT
  #else
    #define AUV_MSGS_PUBLIC AUV_MSGS_IMPORT
  #endif
  #define AUV_MSGS_PUBLIC_TYPE AUV_MSGS_PUBLIC
  #define AUV_MSGS_LOCAL
#else
  #define AUV_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define AUV_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define AUV_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define AUV_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define AUV_MSGS_PUBLIC
    #define AUV_MSGS_LOCAL
  #endif
  #define AUV_MSGS_PUBLIC_TYPE
#endif
#endif  // AUV_MSGS__VISIBILITY_CONTROL_H_
// Generated 02-Jun-2023 16:17:12
 