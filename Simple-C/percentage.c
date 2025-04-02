#include<stdio.h>
int main(){
    // declare the data type and variables to store marks
    float sub1,sub2,sub3,sub4,sub5,total,percentage;
    // enter the marks in all the five subject
    printf("Enter the marks of all the 5 subjects: \n");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
    // find out the percentage by summing and dividing it by sum of total marks and dividing by 100 then
    total = sub1+sub2+sub3+sub4+sub5;
    percentage = (total/500)*100;
    // print the output
    printf("The percentage is %.2f",percentage);
}