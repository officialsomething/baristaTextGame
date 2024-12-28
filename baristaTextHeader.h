#ifndef BARISTA_TEXT_HEADER
#define BARISTA_TEXT_HEADER

// used in main
void strtHere(char *usrInput);

// from util
void resetInput(char *str);
int yesOrNo(char *str);

// from logic
int startOrder();
void buildDrink();
void buildLatte();


#endif