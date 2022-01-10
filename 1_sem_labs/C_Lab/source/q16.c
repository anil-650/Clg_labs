/*16. Write a program which takes the radius of a circle as input from the user, passes it to another function that computes the area and the circumference of the circle and displays the value of area and circumference from the main( ) function.
*/


#include <stdio.h>

void area_circum(float r){
    float area,circum,pi=3.14;

    area = pi*r*r;
    circum = 2*pi*r;

    printf("Area of circle = %.2f\n"
            "Circumference of circle = %.2f\n",area,circum);
}

int main (){
    float radius;

    printf("Enter Circles radius : ");
    scanf("%f",&radius);

    area_circum(radius);
    return 0;
}
