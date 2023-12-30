// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("\n%d is a leap year.",year);
    }
    else {
        printf("\n%d is not a leap year",year);
    }
    return 0;
}