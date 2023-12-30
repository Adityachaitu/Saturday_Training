// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    float hardness, carbon, tensile, count=0;
    printf("Enter the Hardness of the Steel (0 - 100): ");
    scanf("%f",&hardness);
    if(hardness>50){
        hardness=-1;
        count++;
    }

    printf("Enter the Carbon content of the Steel (0 - 1): ");
    scanf("%f",&carbon);
    if(carbon<0.7){
        carbon = -1;
        count++;
    }

    printf("Enter the Tensile Strength of the Steel : ");
    scanf("%f",&tensile);
    if(tensile>5600){
        tensile=-1;
        count++;
    }

    if(count==3){
        printf("\nThe Steel is of Grade 10.");
    }
    else if(count==2){
        if(hardness==-1 && carbon==-1){
            printf("\nThe Steel is of Grade 9.");
        }
        else if(carbon==-1 && tensile==-1){
            printf("\nThe Steel is of Grade 8.");
        }
        else {
            printf("\nThe Steel is of Grade 7.");
        }
    }
    else if(count==1){
        printf("\nThe Steel is of Grade 6.");
    }
    else {
        printf("\nThe Steel is of Grade 5.");
    }
    
    return 0;
}