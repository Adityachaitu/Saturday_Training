#include<stdio.h>
    
int main(){
    
    float dist;
    printf("Enter Distance (in Km): ");
    scanf("%f",&dist);

    printf("Distance in meters: %.2f",dist*1000);
    printf("\nDistance in feet: %.2f",dist*3280.84);
    printf("\nDistance in inches: %.2f",dist*39370.1);
    printf("\nDistance in centimeters: %.2f",dist*100000);
    return 0;
}