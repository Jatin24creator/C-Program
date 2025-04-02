// Area and circumference of a circle
#include<stdio.h>
#include<math.h>

int main(){
    int radius,area,circumference;
    float pi = 3.14;
    printf("Enter the radius of the circle: \n");
    scanf("%d",&radius);
    circumference = (2*pi*radius);
    printf("Circumferemnce = %d\n",circumference); // if you put &circumference it prints the address of the variable pointing to where the value is stored
    area = pi*radius*radius;
    printf("Area is %d\n", area);
    /* Circumferemnce = -1056965280
        Area is -1056965276 as it can be seent he 4 byte difference in the addresses defines it is taking the 4 byte*/
}