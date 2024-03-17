#include <stdio.h>


int main(){
    
    int a=100;
    int b =50;
    int aux;
    
    aux =a;
    a = b;
    b = aux;
    
    printf("a = %d\n ",a);
    printf("b = %d\n ",b);
    
    return 0;
}
