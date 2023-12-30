// P.ADITYA - CH.EN.U4CYS21055
#include<stdio.h>
    
int main(){
    
    int weights;
    printf("Enter Weights in Pounds: ");
    scanf("%d",&weights);

    if(weights<115){
        printf("\nFlyWeight");
    }
    else if(weights>=115 && weights<=121){
        printf("\nBantamWeight");
    }
    else if(weights>=122 && weights<=153){
        printf("\nFeatherWeight");
    }
    else if(weights>=154 && weights<=189){
        printf("\nMiddleWeight");
    }
    else if(weights>=190){
        printf("\nHeavyWeight");
    }
    
    return 0;
}