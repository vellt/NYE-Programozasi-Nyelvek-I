#include <stdio.h>

int main(){
    int b=12;
    int *a=&b;
    printf("b = %d\n",b); //12
    printf("&b =%x\n", &b); //0xFF
    printf("a = %#\n",  a); //0xFF
    printf("*a = %d\n", *a); //12
}