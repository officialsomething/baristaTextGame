#include <stdio.h> 
#include <string.h>

#include "baristaTextHeader.h"
#include "struct.h"


// a small function to reset all chars in array back to null
void resetInput(char *str) {
    int i = 0;

        // index through user input, reset string to null chars
        while(str[i] != '\0') {
            str[i] = '\0';
            i++;
        }
}


// function that compares user input to strings "yes" and "no"
// if string doesn't match, return other value to signify error
int yesOrNo(char *str){
    char YES[] = "yes";
    char NO[] = "no";

    int compareYES = strcmp(str, YES);
    int compareNO = strcmp(str, NO);

    if(compareYES == 0) {
        return 1;
    }
    else if (compareNO == 0) {
        return 2;
    }
    else{
        return 9;
    }
    
}