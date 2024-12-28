#include <stdio.h> 
#include <string.h>

#include "baristaTextHeader.h"
#include "struct.h"

/*
Terminal commands

gcc baristaTextGame.c baristaTextGameLogic.c util.c -o baristaTextGame
./baristaTextGame

clear terminal: ctrl + l

*/


int main() {

    printf("Howdy there! Would you like a coffee?\n");

    // Define string usrInput to store
    char usrInput[50];

    scanf("%s", usrInput);
    strtHere(usrInput);

    return 0;
}


