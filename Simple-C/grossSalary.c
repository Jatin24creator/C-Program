#include<stdio.h>
int main(){
    // declare the input variables gross salary,hra,da, basic pay
    int basicPay;
    float grossSalary, hra, da;
    // input the basic pay from the user
    printf("Enter the basic pay: \n");
    scanf("%d",&basicPay);
    // calculate the hra, da assuming the hra is 20%of basic pay and da is 50% of basic pay
    hra = 0.2*basicPay;
    da = 0.5*basicPay;
    // calculate the gross salary which is the sum of hra+da+basic pay
    grossSalary = hra+da+basicPay;
    // print the gross salary
    printf("The gross salary is %.2f",grossSalary);
}