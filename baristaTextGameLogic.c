#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#include "baristaTextHeader.h"
#include "struct.h"


// forward declare some stuff
int startOrder();
void buildDrink();
void buildLatte();



// passing char *usrInput and char usrInput[] are functionally the same
void strtHere(char *usrInput) {

    // Acceptable input parameters
    char YES[] = "yes";
    char NO[] = "no";

    int compareYES = strcmp(usrInput, YES);
    int compareNO = strcmp(usrInput, NO);

    if(compareYES == 0) {
        printf("Great! I love making coffee :)\n");
        printf("How many drinks are we ordering today? Please choose a number between 1-10.\n");

        int numItems;
        scanf("%d", &numItems);
        startOrder(numItems);
    }
    else if(compareNO == 0) {
        printf("Why did you come to a coffee shop then?\n");
        printf("Goodbye!\n");
    }

    else {
        printf("I'm sorry, I didn't catch that. Would you like a coffee?\n");

        resetInput(usrInput);

        scanf("%s", usrInput);
        strtHere(usrInput);
    }

}

int startOrder(int numItems) {

    while(numItems < 1 || numItems > 10) {
        printf("Oh no! I can't make that many.\n");
        printf("Please enter a number between 1-10.\n");

        scanf("%d",&numItems);
        if(numItems > 0 && numItems < 11) {
            break;
        }
    }

    dynamOrder *newOrder;
    newOrder = calloc(numItems, sizeof(dynamOrder));

    if(newOrder == NULL) {
        printf("Memory not allocated.\n");
    }
    else {
        newOrder->count = numItems;
        newOrder->capacity = numItems * 4;

        printf("You ordered %d drinks\n",newOrder->count);
        printf("Array capacity is %d\n",newOrder->capacity);
    }

    return 0;

}



void buildDrink() {
    char YES[] = "yes";
    char NO[] = "no";
    char userPref[50];

    printf("Would you like a milk drink, like a latte or mocha?\n");

    scanf("%s", userPref);

    int compareYES = strcmp(userPref, YES);
    int compareNO = strcmp(userPref, NO);

    if(compareYES == 0) {
        buildLatte();

        resetInput(userPref);
    }
    else if(compareNO == 0) {
        printf("Haven't made it here.\n");
    }
    else {
        printf("I didn't understand. Would you like a milk drink?\n");
    }

}

void buildLatte() {
    printf("Let's make our drink!\n");
}