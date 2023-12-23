#include<stdio.h>
    
int main(){
    
    float l, b, r;
    printf("Enter Length of Rectangle: ");
    scanf("%f",&l);
    printf("\nEnter Breadth of Rectangle: ");
    scanf("%f",&b);
    printf("\nEnter Radius of Circle: ");
    scanf("%f",&r);

    printf("\nThe Perimeter of Rectangle is %.2f",2*(l+b));
    printf("\nThe Area of Rectangle is %.2f",l*b);
    printf("\nThe Perimeter of Circle is %.2f",2*(22/7)*r);
    printf("\nThe Area of the Circle is %.2f",(22/7)*r*r);
    return 0;
}