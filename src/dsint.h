/** D(ata) S(tructure) Int(erfaces)
 * pronounced "decent," "descent," or "dissent" */

#ifndef _DSINT_H_
#define _DSINT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <glitter.h>

#ifndef DOXYGEN
#define ATTRIBUTE(attr) __attribute__ (attr)
#else
#define ATTRIBUTE(attr)
#endif

/** @return whether the datastructure is at full capacity */
typedef ATTRIBUTE((nonnull (1), warn_unused_result))
bool (*isfull_t) (void const *restrict arg) ;

/** @return whether the datastructure is at empty capacity */
typedef __attribute__ ((nonnull (1), warn_unused_result))
bool (*isempty_t) (void const *restrict arg) ;

/** @return the amount of remaining space in the datastructure */
typedef __attribute__ ((nonnull (1), warn_unused_result))
size_t (*remaining_space_t) (void const *restrict arg) ;

/** @return the amount of used space in the datastructure */
typedef __attribute__ ((nonnull (1), warn_unused_result))
size_t (*used_space_t) (void const *restrict arg) ;

/** add an element to the datastructure */
typedef __attribute__ ((nonnull (1, 2)))
void (*add_t) (void *restrict ds, void const *restrict e) ;

/** remove an element from the datastructure */
typedef __attribute__ ((nonnull (1, 2)))
void (*remove_t) (void *restrict ds, void *restrict e) ;

/** bulk add operation: use this to add multiple elements--it could reduce your order of complexity */
typedef __attribute__ ((nonnull (1, 2)))
void (*adds_t) (void *restrict ds, void const *restrict e, size_t n) ;

/** bulk remove operation--use this to remove multiple elements--it could reduce your order of complexity  */
typedef __attribute__ ((nonnull (1, 2)))
void (*removes_t) (void *restrict ds, void *restrict e, size_t n) ;

/** dynamically allocate the datastructure */
typedef __attribute__ ((warn_unused_result))
void *(*alloc_t) (void const *restrict) ;

/* free a dynamically allocated datastructure */
typedef __attribute__ ((nonnull (1)))
void (*free_t) (void *restrict) ;

/** free a dynamically allocated datastructure and its elements */
typedef __attribute__ ((nonnull (1)))
void (*frees_t) (void *restrict, size_t n) ;

#ifdef __cplusplus
}
#endif

#endif /* _DSINT_H_ */

