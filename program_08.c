#include <stdio.h>
#include <math.h>

#define PI 3.14159

void circle() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area: %.2f\n", PI * radius * radius);
    printf("Perimeter (Circumference): %.2f\n", 2 * PI * radius);
}


int main() {
    int choice;
        printf("1. Circle\n2. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

    if(choice <= 2) {
    

        switch (choice) {
            case 1: circle(); break;
            
            case 2: printf("Exiting program...\n"); break;
           
        }
    } 

    else{  printf("Invalid choice, please try again!\n");};

    return 0;
}
