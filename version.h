#include <stdio.h>

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
