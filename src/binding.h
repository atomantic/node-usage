#include <node.h>

#ifdef is_linux
#include <unistd.h>
#endif

#ifdef is_solaris
#include "solaris_ps.c"
#endif
