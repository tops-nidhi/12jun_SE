// WAP to find the area of the circle
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    //formula for calculating area = π * (radius)^2
    area = pi * pow((float)r, 2);
    printf("\nArea of the circle is: %f", area);
    return 0;
}