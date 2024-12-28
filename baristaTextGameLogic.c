#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

#include "baristaTextHeader.h"
#include "struct.h"


// passing char *usrInput and char usrInput[] are functionally the same
void strtHere(char *usrInput) {

    int resultCompare = yesOrNo(usrInput);

    if(resultCompare == 1) {
        printf("Great! I love making coffee :)\n");
        printf("How many drinks are we ordering today? Please choose a number between 1-10.\n");

        int numItems;
        scanf("%d", &numItems);
        startOrder(numItems);
    }
    else if(resultCompare == 2) {
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

void startOrder(int numItems) {


    /*
    purpose of while loop is to repeatedly prompt user if they input a number not in range
    if number is smaller than 1 or bigger than 10, try again
    once an appropriate number has been reached, break
    */
    while(numItems < 1 || numItems > 10) {
        printf("Oh no! I can't make that many.\n");
        printf("Please enter a number between 1-10.\n");

        scanf("%d",&numItems);
        if(numItems > 0 && numItems < 11) {
            break;
        }
    }

    // allocate memory for the order
    struct dynamOrder *newOrder = malloc(sizeof(struct dynamOrder));

    if(newOrder == NULL) {
        printf("Memory not allocated.\n");
        free(newOrder);
    }
    else {
        // allocate memory for the array holding each item ordered
        newOrder->drinks = malloc(numItems * sizeof(struct menuItem*));
        if(newOrder->drinks == NULL) {
            printf("Memory not allocated.\n");
            free(newOrder->drinks);
        }
        else {
            // current number of drinks initialized to 0
            // current array capacity is number of items wanting to order
            newOrder->count = 0;
            newOrder->capacity = numItems;
            printf("Let's look at the menu together. Please type the corresponding number for what you'd like!\n");
            buildDrink(newOrder);
        }

    }

}



void buildDrink(struct dynamOrder *custieOrder) {
    int userPref;

    printf("Latte or mocha: 1\n");
    printf("Americano: 2\n");
    printf("Cold brew: 3\n");
    printf("Hot coffee: 4\n");

    scanf("%d", &userPref);

    while(userPref < 1 || userPref > 4) {
        printf("Please enter a number between 1-4.\n");

        scanf("%d",&userPref);
        if(userPref > 0 && userPref < 5) {
            break;
        }
    }

    if(userPref == 1) {
        printf("You ordered a latte or mocha!\n");
    }
    else if(userPref == 2) {
        printf("You ordered an americano!\n");
    }
    else if(userPref == 3) {
        printf("You ordered a cold brew!\n");
    }
    else if(userPref == 4) {
        printf("You ordered a hot coffee!\n");
    }

}

void buildLatte() {
    printf("Let's make our drink!\n");
}