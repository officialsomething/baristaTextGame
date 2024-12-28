#include <stdio.h> 
#include <string.h>

#include "baristaTextHeader.h"
#include "struct.h"

void resetInput(char *str) {
    int i = 0;

        // index through user input, reset string to null chars
        while(str[i] != '\0') {
            str[i] = '\0';
            i++;
        }
}