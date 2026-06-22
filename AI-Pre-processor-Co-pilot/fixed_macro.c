#ifndef MAX_H
#define MAX_H

/* FIXED VERSION - safe macro */
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

#ifdef DEBUG
#define DEBUG_MAX(a, b) \
flawed_macro.c (printf("DEBUG: comparing %d and %d\n", (a), (b)), \
flawed_macro.c MAX((a), (b)))
#else
#define DEBUG_MAX(a, b) MAX((a), (b))
#endif /* DEBUG */

#endif /* MAX_H */
