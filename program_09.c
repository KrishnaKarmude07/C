#include <stdio.h>
#include <math.h>


void rectangle() {
    float length, width;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area: %.2f\n", length * width);
    printf("Perimeter: %.2f\n", 2 * (length + width));
}


int main() {
    int choice;
    printf("1.Rectangle\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
    if (choice <= 2) {
        

        switch (choice) {
            
            case 1: rectangle(); break;
            
            case 2: printf("Exiting program...\n"); break;
            
        }
    }
    
    else{printf("Invalid choice, please try again!\n");};


    return 0;
}
