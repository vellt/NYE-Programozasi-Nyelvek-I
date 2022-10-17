#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void resz42();

void gyak1();

void resz43();

void gyak2();

void resz44();

void gyak3();

void resz45();

void gyak4();

void resz46();

void resz47();

int main() {
    //gyak1();
    //resz42();
    //resz43();
    //gyak2();
    //resz44();
    //resz45();
    //resz46();
    resz47();
    //gyak3();
    //gyak4();
    return 0;
}


struct dolgozo{
    int ID;
    float suly;
    char nev[51];
    char szemszin[21];
};

/** Strut */
void resz47() {
    //struct dolgozo-->típus
    //dolgozo1-->valtozonev
    struct dolgozo dolgozo1;
    /*
    dolgozo1.ID=1;
    dolgozo1.suly=8.1;
    strcpy(dolgozo1.nev,"Kis Pista");
    strcpy(dolgozo1.szemszin,"Kek");*/
    //[^\n]
    scanf("%d\t%f\t%s\t%s", &dolgozo1.ID, &dolgozo1.suly, dolgozo1.nev, dolgozo1.szemszin);
    printf(""
           "\nID: %d"
           "\nsuly: %0.2f"
           "\nnev: %s"
           "\nszemszin: %s",dolgozo1.ID, dolgozo1.suly, dolgozo1.nev, dolgozo1.szemszin);
}

typedef int egesz;
typedef char karakter;

/** typedef */
void resz46() {
    egesz alma =5;
    karakter egy='1';
    printf("%d\n",alma);
    printf("%c",egy);
}

void gyak4() {
    srand(time(NULL));
    //20-50
    int r=rand()%(50+1-20)+20;
    //1-50
    r=rand()%(10+1-1)+1;

    printf("%d",r);
}

void resz45() {
    srand(time(0));
    //(rand()%10)           0.00-9.00
    //((rand()%100)/100)    0.00-0.99
    float x=(rand()%10)+((rand()%100)/(float)100);
    printf("%0.2f",x);
}

struct aut{
    int allma;
    int k;
};

void gyak3() {
    /* rand()%10 gives 0-9
     * rand()%10+20 gives 20-29
     * rand()%11+20 gives 20-30
     * */

    srand(time(NULL));
    int randomNumber=rand()%20;
    struct aut a;
    struct aut tomb[5];
    tomb[0].allma=1;


}

/** random egesz szmok generalasa #include <stdlib.h> &&  */
void resz44() {

    srand((unsigned )time(NULL)); //srand(0)
    //random 0-99 közötti egész számozt generál
    //int a=rand() % 100;

    //1-100 között
    //int a=rand() % 100+1 //etoltjuk eggyel az intervallumot

    /* random int between 0 and 19 */
    //int r = rand() % 20;

    //ha nulla és -20 közötti értékek kellenek
    //int a =(rand() % 20)-20;

    //20-és 50 közötti szám kell azzaz 30 féle szám
    //int a=rand()%30+1+20;
    //5-40;
    int a=rand()%(40+1-5)+5;
    //20-50
    //rand()%(max+1-min)+min
    //int a=rand()%(50+1-20)+20;
    //1-100
    //int a=rand()%(100+1-1)+1;
    printf("%d",a);

}

void gyak2() {
    puts("Add meg a vezetekneved: ");
    char veznev[100];
    gets(veznev);
    puts("Add meg a kereszt neved: ");
    char kernev[100];
    gets(kernev);
    char teljnev[100];
    strcat(teljnev,veznev);
    strcat(teljnev," ");
    strcat(teljnev,kernev);
    printf("%s",teljnev);
}

/** string függvények strcat strcpy #include <string.h> */
void resz43() {
    char str1[100], str2[20];
    puts("Add meg a string 1-et.");
    gets(str1);
    puts("Add meg a string 2-ot.");
    gets(str2);

    //str1-t egyenlővé tesszük str2-vel
    strcpy(str1,str2); //mibe, mit
    strcpy(str1,"szilva"); //cél, forrás
    printf("A string1: %s\n",str1);
    printf("A string2: %s\n",str2);

    //strcat összefűzés
    strcat(str1," ");
    strcat(str1,str2);
    puts(str1);
}

/** karakteres függvények, islower, isupper, toupper, tolower #include <ctype.h> */
void resz42() {

    //int islower(ch) -> 0 1
    //int isupper(ch) -> 0 1
    //ch toupper(ch)  -> nagybetu
    //ch tolower(ch)  -> kisbetu
    //isalnum(ch) alfanumerukus-e
    //isalpha(ch) alfabetikus-e

    char str[100];
    int i, kis=0, nagy=0;
    puts("Adj meg egy nevet.");
    gets(str);
    for (int j = 0; j < strlen(str); ++j) {
        if(isdigit(str[j])){
            kis++;
        }
        if(isupper(str[j])){
            nagy++;
        }
    }
    printf("Kis: %d, Nagy: %d",kis, nagy);
}

void gyak1() {
    printf("Hello, World!\n");
    puts("Adj meg egy szamot!");
    strlen("ALMA");
    int a;
    scanf("%d",&a);
    printf("%.0lf", pow(a,2));
}


