#include <stdio.h>
#include <math.h>



void triangle() {
    float a, b, c, s, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a + b + c) / 2; 
    area = sqrt(s * (s - a) * (s - b) * (s - c)); 
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", a + b + c);
}

int main() {
    int choice;

        printf("1. Triangle\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        if (choice <= 2){


        switch (choice) {
           
            case 1: triangle(); break;
            
            case 2: printf("Exiting program...\n"); break;
            
        }
    }
    
    else{ printf("Invalid choice, please try again!\n");};

    return 0;
}
