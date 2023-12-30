// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    float length, breadth;
    printf("Enter Length of the Rectangle: ");
    scanf("%f",&length);
    printf("\nEnter Breadth of the Rectangle: ");
    scanf("%f",&breadth);

    float area = length*breadth;
    float perimeter = 2*(length+breadth);

    if(area<perimeter){
        printf("\nThe Perimeter is greater than Area.");
    }
    else if(area>perimeter){
        printf("\nThe Area is greater than Perimeter.");
    }
    else {
        printf("\nThe Area is equal to Perimeter.");
    }

    return 0;
}