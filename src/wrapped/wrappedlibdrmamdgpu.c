#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "emu/x64emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box64context.h"
#include "emu/x64emu_private.h"
#include "myalign.h"

const char* libdrmamdgpuName = "libdrm_amdgpu.so.1";
#define LIBNAME libdrmamdgpu

#define ADDED_FUNCTIONS()                   \

//#include "generated/wrappedlibdrmamdgputypes.h"

//#include "wrappercallback.h"

#include "wrappedlib_init.h"
