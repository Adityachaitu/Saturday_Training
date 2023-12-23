#include<stdio.h>
#include<math.h>
    
int main(){
    
    float v, t;
    printf("Enter temperature: ");
    scanf("%f",&t);
    printf("\nEnter wind Velocity: ");
    scanf("%f",&v);

    float lpart = (0.4275*t - 35.75) * pow(v,0.16);

    float wcf = 35.74 + 0.6215 * t + lpart;
    printf("\nThe Wind Chill Temperature is %.2f ",wcf);
    return 0;
}