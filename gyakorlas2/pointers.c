#include <stdio.h>

int main(){
    int b=12;
    int *a=&b; //c09ff80c
    int *c= (int *) 0xd68c9ffb64; //ha ide mentené a 12-est, akk statikusan is megtudnam adn
    printf("b = %d\n",b); //12
    printf("&b =%p\n", &b); //0xFF
    printf("a = %x\n",  a); //0xFF
    printf("c = %x\n",  c); //0xFF
    printf("*c = %d\n",  *c); //12
    printf("*a = %d\n", *a); //12
}