/** \file simplemath.h
 *  \brief A toy example of math library
 *  \author Alessio Pedretti
 */

#define PARAM 4

#ifndef _SIMPLEMATH_
#define _SIMPLEMATH_

typedef struct complex_int{
    float re;
    float imm;
} cx_int_t;

typedef struct complex_float{
    float re;
    float imm;
} cx_float_t;

float mean(int a, int b);
cx_float_t cx_mean(cx_int_t a, cx_int_t b);

int max(int a, int b);

#endif