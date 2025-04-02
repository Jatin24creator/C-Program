#include <stdio.h>
int main(){
    //declare a float tempC,tempF
    float tempC,tempF;
    //take the tempC from user
    printf("Enter temperature in celsius: \n");
    scanf("%f",&tempC);
    // Multiply the celsius by 9 an divide by 5 and then add 32 to obtain tempF
    tempF = ((tempC*9)/5) +32;
    // print the tempf
    printf("Temperature in fahrenheit is %.2f",tempF);
}