#pragma once

#define z 4

#define QUBE(x) ((x) * (x) * (x))
#define MAX(x,y) ((x * QUBE (y)) > (x + z) ? (x * QUBE(y)) : (x + z))
#define MIN(x,y) ((x - y * z) < (x * y + z) ? (x - y * z) : (x * y + z))
#define SQR(x) ((x) * (x))

#define PRINTI(w) puts("Перше число: "); \
                 printf(#w "=%d\n", w)
#define PRINTZ(w) puts("Друге число: "); \
                 printf(#w "=%d\n", w)
#define PRINTR(w) puts("Результат: "); \
                 printf(#w "=%f\n",(float)w)
