/*!
@file @todo what is name of this source file? calc.c
@author @todo provide your name & DP login: Bryan Lee Kwan Hong (kwanhong.lee)
@course @todo which course is this source file meant for? CSD1121F22
@section @todo which section of this course are you enrolled in? Section A
@tutorial @todo provide Tutorial #Lab 2
@date @todo provide date on which you created the file 9/9/2022
@brief @todo provide a brief explanation about what this source file This file contains the defintion of the functions squared, cubed, and minus
*//*______________________________________________________________________*/

#include "calc.h"

// provide the definition of function squared
// that matches the declaration in calc.h ...
int squared(int x) {
   x = x*x;
   return x;
}

// provide the definition of function cubed
// that matches the declaration in calc.h ...
double cubed(double y) {
    y = y*y*y;
    return y;
}

// provide the definition of function minus
// that matches the declaration in calc.h ...
double minus(double z) {
    z = -z;
    return z;
}