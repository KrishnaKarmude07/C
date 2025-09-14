#include <stdio.h>
#include <math.h>

void square() {
    float side;
    printf("Enter the side of the square: ");
    scanf("%f", &side);
    printf("Area: %.2f\n", side * side);
    printf("Perimeter: %.2f\n", 4 * side);
}


int main() {
    int choice;
        printf("1. Square\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
    if(choice <= 2){


        switch (choice) {
           
            case 1: square(); break;
           
            case 2: printf("Exiting program...\n"); break;
           
        }
    } 

    else{printf("Invalid choice, please try again!\n");};

    return 0;
}
