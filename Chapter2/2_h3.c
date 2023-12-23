#include<stdio.h>
#include<math.h>
    
int main(){
    
    int a, b, c;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("\nEnter value of b : ");
    scanf("%d",&b);
    printf("\nEnter value of c : ");
    scanf("%d",&c);

    float s = (float)(a+b+c)/2;
    float in_bw = (float)s*(s-a)*(s-b)*(s-c);
    float area = sqrt(in_bw);
    printf("\nThe Area of the Triangle is %.2f",area);
    return 0;
}