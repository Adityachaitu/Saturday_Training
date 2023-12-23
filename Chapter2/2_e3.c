#include<stdio.h>
    
int main(){
    
    float a = 5, b = 2 ;
    int c, d ;
    c = a % b ;
    d = a / 2 ;
    printf ( "%d\n", d ) ; 
    return 0;
}

/*2_e3.c:7:11: error: invalid operands to binary % (have 'float' and 'float')
     c = a % b ;*/

/* Change the float datatype to int*/