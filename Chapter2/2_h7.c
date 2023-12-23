#include<stdio.h>
#include<math.h>
    
int main(){
    
    float degree;
    printf("Enter angle (in degrees): ");
    scanf("%f",&degree);

    float radians = degree * (3.1415)/180;

    printf("\nSin(%.2f) : %.2f",degree, sin(radians));
    printf("\nCos(%.2f) : %.2f",degree, cos(radians));
    printf("\nTan(%.2f) : %.2f",degree, tan(radians));
    printf("\nCosec(%.2f) : %.2f",degree, 1/sin(radians));
    printf("\nSec(%.2f) : %.2f",degree, 1/cos(radians));
    printf("\nCot(%.2f) : %.2f",degree, 1/tan(radians));
    return 0;
}