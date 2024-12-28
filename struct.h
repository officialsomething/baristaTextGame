#ifndef BARISTA_STRUCT
#define BARIST_STRUCT

// an enum of type Size named size
// enum Size {Small = 1, Medium = 2, Large = 3} size;
// enum Temp {Hot = 1, Iced = 2} temp;

typedef struct TAG_dynamOrder {

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

    
} dynamOrder;



/*
struct MilkDrink {

    enum Size size;
    enum Temp temp;
    char flavor[50];
    // eg: 2%, whole milk, oat, etc
    char milkType[50];

};

*/



#endif