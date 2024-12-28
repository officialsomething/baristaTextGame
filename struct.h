#ifndef BARISTA_STRUCT
#define BARIST_STRUCT

#include <stdlib.h>
#include <stddef.h>

struct menuItem {
    
};

struct dynamOrder {

    /*
    size_t
    unsigned type mostly defines array size, memory blocks, strings
    represents maximum size of object
    use sizeof() operator
    */

   // count = num items in array dynamOrder
   // capacity = memory size of dynamOrder
    size_t count;
    size_t capacity;
    // array of pointers to customer order
    struct menuItem** drinks;
};





#endif