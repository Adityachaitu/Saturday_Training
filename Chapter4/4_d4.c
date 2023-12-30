// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    float sides[3];
    for(int i=0;i<3;i++){
        printf("Enter %d side length: ",i+1);
        scanf("%f",&sides[i]);
    }

    int flag = 0;

    for(int i=0;i<3;i++){
        int sum = sides[i%3] + sides[(i+1)%3];

        if(sum<sides[(i+2)%3]){
            printf("\nGiven sides are not of a valid Triangle.");
            flag = 1;
            break;
        }
    }

    if(flag==0){
        printf("\nGiven sides are of a valid Triangle.");
    }
    
    return 0;
}