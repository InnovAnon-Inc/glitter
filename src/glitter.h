#ifndef _GLITTER_H_
#define _GLITTER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#define error_check(C)   if    (__builtin_expect ((long) (C), (long) false))
#define while_check(C,E) while (__builtin_expect ((long) (C), (long) false) && errno == (E))

#define if_expect(C)    if    (__builtin_expect ((long) (C), (long) true))
#define while_expect(C) while (__builtin_expect ((long) (C), (long) true))

/*#ifdef __cplusplus*/
#define restrict __restrict__
/*#endif*/

#ifdef __cplusplus
}
#endif

#endif /* _GLITTER_H_ */