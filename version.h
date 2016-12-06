/*
  @file  version.h
  @brief Defines macros to create version number string

  @license  MIT LICENSE
  
  @authors
  Prakhar Nigam, https://github.com/prakharnigam
  electrogeek, https://github.com/Nishant-Mishra
  
*/

#ifndef __VERSION_H__
#define __VERSION_H__

#ifdef __cplusplus
extern "C" {
#endif

#define major      1
#define minor      0
#define patch      0

#define ver(arg)   #arg
#define ver2(arg)  ver(arg)

#define maj        ver2(major)
#define min        ver2(minor)
#define pat        ver2(patch)
#define dot        "."

#define VERSION    (maj dot min dot pat)

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* __VERSION_H__ */
