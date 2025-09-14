#include <stdio.h>
#include <math.h>

#define PI 3.14159


void sphere() {
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("Surface Area: %.2f\n", 4 * PI * radius * radius);
    printf("Volume: %.2f\n", (4.0 / 3) * PI * radius * radius * radius);
}



int main() {
    int choice;
        
     
        printf("1. Sphere\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
    if(choice <= 2) {
        

        switch (choice) {
            case 1:sphere(); break;
           
            case 2: printf("Exiting program...\n"); break;
      
        }
    } 

    else{ printf("Invalid choice, please try again!\n");};

    return 0;
}
