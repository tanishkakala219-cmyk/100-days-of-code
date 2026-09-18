#include <stdio.h>

int main() {
     double radius, area, circumference;
int PI=3.14;
printf("Enter the radius of the circle: ");
    if (scanf("%lf", &radius) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }
    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        return 1;
    }
    area = PI * radius * radius;
    circumference = 2.0 * PI * radius;
    printf("\n--- Results ---\n");
    printf("Area of the circle:         %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}
