/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.5.0.24) *
 *******************************************************************/
#ifndef __wrappedlibasoundTYPES_H_
#define __wrappedlibasoundTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFp_t)(void*);
typedef void* (*pFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef int32_t (*iFpipp_t)(void*, int32_t, void*, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);
typedef void* (*pFpipL_t)(void*, int32_t, void*, uintptr_t);
typedef int32_t (*iFpuipp_t)(void*, uint32_t, int32_t, void*, void*);
typedef int32_t (*iFppupp_t)(void*, void*, uint32_t, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(snd_dlclose, iFp_t) \
	GO(snd_lib_error_set_handler, iFp_t) \
	GO(snd_mixer_class_get_compare, pFp_t) \
	GO(snd_mixer_class_get_event, pFp_t) \
	GO(snd_mixer_elem_set_callback, vFpp_t) \
	GO(snd_mixer_class_set_compare, iFpp_t) \
	GO(snd_mixer_class_set_event, iFpp_t) \
	GO(snd_mixer_class_set_private_free, iFpp_t) \
	GO(snd_mixer_set_compare, iFpp_t) \
	GO(snd_dlsym, pFppp_t) \
	GO(snd_async_add_handler, iFpipp_t) \
	GO(snd_async_add_pcm_handler, iFpppp_t) \
	GO(snd_dlopen, pFpipL_t) \
	GO(snd_mixer_elem_new, iFpuipp_t) \
	GO(snd_pcm_hook_add, iFppupp_t)

#endif // __wrappedlibasoundTYPES_H_
