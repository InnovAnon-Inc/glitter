#ifndef _GLITTER_H_
#define _GLITTER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#define error_check(C) if (__builtin_expect ((C), false))

/*
#ifdef __cplusplus
#define restrict __restrict__
#endif
*/

#ifdef __cplusplus
}
#endif

#endif /* _GLITTER_H_ */