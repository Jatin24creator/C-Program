#include<stdio.h>
int leap(int year){
    if(year%4 ==0 &&(year%100!=0 || year%400 ==0)){
        printf("%d is a leap",year);
    } else{
        printf("%d is not a leap",year);
    }
}
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    leap(year);
    return 0;

}