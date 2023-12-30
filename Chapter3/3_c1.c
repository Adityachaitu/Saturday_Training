#include<stdio.h>
    
int main(){
    
    float cp, sp;

    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("\nEnter selling price: ");
    scanf("%f",&sp);

    float out;

    out = ((sp-cp)/cp)*100;

    if(out==0){
        printf("\nNo loss no profit");
    }
    else if(out<0){
        printf("\nLoss of %.2f",out);
    }
    else {
        printf("\nProfit of %.2f",out);
    }
    return 0;
}