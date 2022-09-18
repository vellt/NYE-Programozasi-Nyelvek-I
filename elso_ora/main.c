#include <stdio.h>
#include <stdlib.h>

int main()
{

    //feladat2();
    feladat3();
    return 0;

}

void feladat3(){
    //1
    int szam=3;
    if(szam>0) printf("positive");
    else if (szam<0) printf("negative");
    else printf("zero");

    //2
    char c='A';
    if(c>'a' && c<'z') printf("lowercase letter");
    if(c>'A' && c<'Z') printf("Uppercase letter");
    if(c>'0' && c<'9') printf("number");

    //3

    int numbers[] = {25, 50, 75};
    int max=0;
    for(int i=0;i<3;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }

    for(int i=0;i<3;i++){
        if(numbers[i]==max)print("{}")
    }

}

void vlmi()
{
/*
    int konveim; //4byte-os rekeszt letárol, 32bit, 2^32, ideiglenesen memória szeméttel kezd
    string  adat;
    printf("%s", adat);

*/
}
void feladat2(){
    int wideOfGarnden=7;
    int longOfGarnden=13;
    printf("fences what we need: %d m\n",2*(wideOfGarnden+longOfGarnden));
    printf("\n");

    //2
    double r=12.7;
    double pi=22.0/7;
    printf("T: %lf\n",(r*r)*pi);
    printf("K: %lf\n",2*r*pi);
    printf("\n");

    //3
    double waterTemp=-2.5;
    int result=waterTemp<1;
    printf("%d",result);
    printf("\n");
}

void faladat1(){

    //elsõ feladat
    //1
    char c ='C';
    printf("%c : %i\n", c, c);

    //2
    int n=42;
    printf("meaning of life (%i)\n", n);

    //3
    double pi=(double)22/7;//3.14159265359;
    printf("%5lf", pi);
}
