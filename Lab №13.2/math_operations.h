#pragma once
#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQR(x) ((x) * (x))
#define CUBE(x) ((x)*(x)*(x))
#define PLUS(x, y) (2*x + y)
#define MINUS(y, z) ((2*y-z))
#define PRINTI(w) puts("control output")/ printf(#w"=%d\n", w)
#define PRINTR(w) puts ("rezult :") /printf(#w"=%f\n", (float)w)
#define ESQUER(x, z) (pow(x,2) - 2*x*z + pow(z,2))
#endif