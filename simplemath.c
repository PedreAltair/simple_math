/** \file simplemath.c
	\brief Definition of the functions 
	\author Alessio Pedretti
  
*/

#include "simplemath.h"

float mean(int a, int b) {
	return (a+b)/2;
}

int max(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}