#include<stdio.h>

int main(){
    float salary;
    printf("Enter the Salary: ");
    scanf("%f",&salary);

    printf("The Gross Salary is %.2f",(salary+(0.2*salary)+(0.4*salary)));

    return 0;

}