#include<stdio.h>
    
int main(){
    
    float l = 1189, b = 841;
    printf("\nA0: %.2f mm x %.2f mm",l,b);
    for(int i=1;i<9;i++){

        if(l>b) { l = l/2;}
        else { b = b/2;}

        if(l>b) { printf("\nA%d: %.2f mm x %.2f mm",i,l,b);}
        else { printf("\nA%d: %.2f mm x %.2f mm",i,b,l);}
    }
    return 0;
}