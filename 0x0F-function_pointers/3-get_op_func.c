#include "3-calc.h"
#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>


int (*get_op_func(char *s))(int, int) {
    if (*s == '+') {
        return &op_add;
    } else if (*s == '-') {
        return &op_sub;
    } else if (*s == '*') {
        return &op_mul;
    } else if (*s == '/') {
        return &op_div;
    } else if (*s == '%') {
        return &op_mod;
    } else {
        return NULL;
    }
}
