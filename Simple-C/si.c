#include<stdio.h>
int main(){
    // declare the data type and variable
    int principal, rate, time;
    float si;
    // take user inputs
    printf("Enter the principal amount, rate, time: \n");
    scanf("%d %d %d",&principal,&rate,&time);
    // declare the logic to be used in the program
    si = (principal*rate*time)/100;
    // print the result
    printf("Simple Interest: %f",si);

}