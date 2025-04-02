// read integer and print the power 1,2,3
#include<stdio.h>
int main(){
    //declare the num, p1,p2,p3 variables;
    long int num,p1,p2,p3;
    //take num input from user
    printf("Enter the number: \n");
    scanf("%d",&num);
    // calculate p1,p2,p3
    p1 = num;
    p2 = num*num;
    p3 = (num*num*num);
    //print the result
    printf("The powers are as follows: %zu %zu %zu",p1,p2,p3);
}