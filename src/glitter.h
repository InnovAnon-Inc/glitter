#ifndef _GLITTER_H_
#define _GLITTER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#define error_check(C)    if    (__builtin_expect ((long) (C), (long) false))
#define while_echeck(C,E) while (__builtin_expect ((long) (C), (long) false) && errno == (E))
#define while_check(C)    while (__builtin_expect ((long) (C), (long) false))

#define if_expect(C)      if    (__builtin_expect ((long) (C), (long) true))
#define while_expect(C)   while (__builtin_expect ((long) (C), (long) true))

/*#ifdef __cplusplus*/
#define restrict __restrict__
/*#endif*/

/* https://gcc.gnu.org/onlinedocs/gcc/Diagnostic-Pragmas.html */
#define DO_PRAGMA(x) _Pragma (#x)
/*#define TODO(...) DO_PRAGMA(message ("TODO - " #__VA_ARGS__))*/
#define TODO(x) DO_PRAGMA(message ("TODO - " #x))

/*
#define swallow(E,D) do { \
	DO_PRAGMA (diagnostic ("push")) \
	DO_PRAGMA (diagnostic ("ignored" #D)) \
	(void) (E); \
	DO_PRAGMA (diagnostic ("pop")) \
} while (false) ;
*/
/*
#define swallow(E,D) do { \
	_Pragma ("GCC diagnostic push") \
	DO_PRAGMA ("GCC diagnostic ignored" #D) \
	(void) (E); \
	_Pragma ("GCC diagnostic pop") \
} while (false) ;
*/

typedef int fd_t;

#ifdef __cplusplus
}
#endif

#endif /* _GLITTER_H_ */