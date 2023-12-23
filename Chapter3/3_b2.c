#include<stdio.h>
    
int main(){
    
    int j = 10, k = 12 ;
    if ( k >= j )
    {
        {
            k = j ;
            j = k ;
        }
    }

    return 0;
}

/* Swapping is incorrect in this as k and j will give a value of 10 each. and using of double brackets is unecessary*/