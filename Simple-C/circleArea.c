#include<stdio.h>
int main(){
    // declare a radius variable and constant 3.14
    float radius, pi, area;
    pi = 3.14;
    // take user input
    printf("Enter the radius of the circle: \n");
    scanf("%f",&radius);
    // area = pir^2
    area = pi*radius*radius;
    // print the resulting area
    printf("Area is %.2f",area);
}