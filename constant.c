#include <stdio.h>

// Define a constant for the value of pi
#define PI 3.14159

int main() {
    // Declare variables
    double radius, area;
    
    // Prompt user for radius input
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    // Calculate area using the constant PI
    area = PI * radius * radius;
    
    // Display the calculated area
    printf("Area of the circle with radius %.2f units is: %.2f square units.\n", radius, area);
    
    return 0;
}
