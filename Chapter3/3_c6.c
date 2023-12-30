#include<stdio.h>
    
int main(){
    
    int ram, shyam, ajay;

    printf("Enter Ram's Age: ");
    scanf("%d",&ram);
    printf("\nEnter Shyam's Age: ");
    scanf("%d",&shyam);
    printf("\nEnter Ajay's Age: ");
    scanf("%d",&ajay);

    if(ram<shyam){
        if(ram<ajay){
            printf("\nRam is the Youngest.");
        }
        else if(ram>ajay){
            printf("\nAjay is the Youngest.");
        }
        else {
            printf("\nRam and Ajay are the Youngest.");
        }
    }
    else if(ram>shyam){
        if(shyam<ajay){
            printf("\nShyam is the Youngest.");
        }
        else if(shyam>ajay){
            printf("\nAjay is the Youngest.");
        }
        else {
            printf("\nShyam and Ajay are the Youngest.");
        }
    }
    else {
        if(ram>ajay){
            printf("\nAjay is the Youngest.");
        }
        else if(ram<ajay){
            printf("\nRam and Shyam are the Youngest.");
        }
        else {
            printf("\nRam, Shyam and Ajay are of Same age.");
        }
    }
    return 0;
}