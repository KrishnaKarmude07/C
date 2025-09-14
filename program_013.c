#include <stdio.h>
#include <math.h>


void cuboid() {
    float length, width, height;
    printf("Enter the length, width, and height of the cuboid: ");
    scanf("%f %f %f", &length, &width, &height);
    printf("Surface Area: %.2f\n", 2 * (length * width + width * height + height * length));
    printf("Volume: %.2f\n", length * width * height);
}

int main() {
    int choice;
        
        printf("1.Cuboid\n2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);  
        
        
        if (choice <= 2){


        switch (choice) {
            case 1:cuboid(); break;
            case 2: printf("Exiting program...\n"); break;
            default: printf("Invalid choice, please try again!\n");
        }
    } 

    else( printf("Invalid choice, please try again!\n"));

    return 0;
}
