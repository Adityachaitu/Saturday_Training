#include<stdio.h>
    
int main(){
    
    float fh;
    printf("Enter Temperature in (Fahrenheit): ");
    scanf("%f",&fh);

    float cel = (fh-32)*5/9;
    printf("\nTemperature in Celsius: %.2f",cel);
    return 0;
}