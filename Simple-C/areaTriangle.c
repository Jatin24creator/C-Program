#include<stdio.h>
// %f - float
// %d or %i - int
// %lf - double
// %c - char
// %s - used for string
int main(){
    //declare the variables and variable type
    int area, breadth, height;
    //ask the user to enter the values of these variables and assign them to respective variables
    printf("Enter the breadth: \n");
    scanf("%d",&breadth);
    printf("Enter the height: \n");
    scanf("%d",&height);
    // store the output in another variable area with the logic 
    area = (breadth*height)/2;
    //print the output of the area obtained
    printf("area is %d",area);
    return 0;
}