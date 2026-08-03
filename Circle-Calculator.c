#include <stdio.h>
#include <string.h>
#include <math.h>
// I learn to link the math library in compiling -lm to avoid missing linker when compiling
// gcc main9.c -o main9 -lm -trigraphs

int main() ??<
    // circle calculator
    // initialize variable 
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14159;

    // ask input 
    printf("Circle Calculator");
    printf("Enter a radius : ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);

    printf("%.2lf??/n", area);
    return 0;
??>
