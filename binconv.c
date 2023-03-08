#include <stdio.h>
#include <stdlib.h>
#include "bin2dec.h"
#include "dec2bin.h"

#define MAX_INPUT_LENGTH 100

int main() {
    while (1) {
        // Print the menu
        printf("Please choose an option:\n");
        printf("1. Convert binary to decimal\n");
        printf("2. Convert decimal to binary\n");
        printf("3. Exit\n");

        // Read the user's choice
        int choice;
        if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2 && choice != 3)) {
            printf("Error: invalid choice\n");
            continue;  // go back to the start of the loop and print the menu again
        }

        if (choice == 3) {
            printf("Exiting...\n");
            break;  // exit the loop and end the program
        }

        // Read the input string
        char input[MAX_INPUT_LENGTH];
        if (scanf("%s", input) != 1) {
            printf("Error: invalid input\n");
            continue;  // go back to the start of the loop and print the menu again
        }

        // Perform the conversion
        if (choice == 1) {
            int dec = bin2dec(input);
            printf("%d\n", dec);
        } else if (choice == 2) {
            char *bin = dec2bin(atoi(input));
            printf("%s\n", bin);
            free(bin);  // don't forget to free the memory allocated by dec2bin
        } 

        // Ask the user if they want to continue
        printf("Do you want to continue? (y/n)\n");
        char response[2];
        if (scanf("%s", response) != 1 || (response[0] != 'y' && response[0] != 'n')) {
            printf("Error: invalid response\n");
            break;  // exit the loop and end the program
        } else if (response[0] == 'n') {
            printf("Exiting...\n");
            break;  // exit the loop and end the program
        }
    }

    return 0;
}
