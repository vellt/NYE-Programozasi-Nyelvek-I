#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef enum bool{
    false,
    true
} bool;

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

void resz48();

void resz49();

void resz50();

void resz51();

int osszeg(int a, int b);

void resz52();

bool prime(int x);

void resz53();

void resz54();

void resz55();

void scantomb(int pInt[10], const int size);

void printtomb(int pInt[10], const int size);

void resz56();

void csere(int *a, int *b); //*a a-ra mutató pointer

void resz57();

void resz58();

void scantomb2(int tomb[], const int size);

void printtomb2(int tomb[], const int size);

void resz59();

void resz60();

void resz61();

void resz62();

int main() {
    //gyak1();
    //resz42();
    //resz43();
    //gyak2();
    //resz44();
    //resz45();
    //resz46();
    //resz47();
    //gyak3();
    //gyak4();
    //resz48();
    //resz49();
    //resz50();
    //resz51();
    //resz52();
    //resz53();
    //resz54();
    //resz55();
    //resz56();
    //resz57();
    //resz58();
    //resz59();
    //resz60();
    //resz61();
    resz62();
    return 0;
}

/** Filekezelés - Fileba írás */
void resz62() {
    //fájl mutató
    FILE * fPointer;
    //fpointeren keresztül megnyitottuk az alma.txt (létre hoztuk, hogy írhassunk bele)
    fPointer= fopen("alma.txt","w"); //mode: "w" write
    // fprintf seítségével bele írunk egy sort
    // ha letezik a fájl akk felülírja annak a tartalmát, amennyiben a mode:w
    // ((ha létezik a fájl akk boviti annak tartalmat, amennyiben a mode:a))
    fprintf(fPointer,"szeretem a retest mert finom!\n");//mibe,mit
    //bezárjuk
    fclose(fPointer);
}

typedef struct gyumolcs{
    int magok_szama;
    int levelek_szama;
    char szin[11];
} gyumolcs;

/** structurára mutató mutatók működése */
void resz61() {
    gyumolcs * alma, a;
    alma=&a;
    gets((*alma).szin);
    //*alma feloldja az  alma=&a;-ban az &-jelet, igy hozzá férünk az "a"-hoz
    //&(*alma) zárójelezés kell a prioritás miatt, az & jel hamarbb hajtódik végre, mint a *
    scanf("%d %d", &(*alma).magok_szama, &alma->levelek_szama);
    // egyszerűsítés: -> feloldja az &-jelet, egyből hozzáférünk az "a"-hoz
    // (*alma).magok_szama     alma->magok_szama  //ez a népszerűbb jelölés
    printf("Magok szama: %d\t levelek szama: %d\t szin: %s\n", (*alma).magok_szama, (*alma).levelek_szama, (*alma).szin);
}

/** 2D Dinamikus Tömb */
void resz60() {
    int** tomb=(int**) malloc(sizeof (int*)*2); //ez a töm
    for (int i = 0; i < 2; ++i) {
        tomb[i]=(int*) malloc(sizeof (int)*5); //5
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("tomb[%d][%d]:", i,j);
            scanf("%d", &tomb[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("tomb[%d][%d]=%d\n", i,j,  tomb[i][j]);
        }
        printf("\n");
    }

    //fel kell szabaditani a memoria teruletet
    for (int i = 0; i < 2; ++i) {
        free(tomb[i]);
    }
    free(tomb);
}

/** Mutatóra mutató mutató */
void resz59() {
    //többdimensizs tömböknél jön jól
    int x=5;
    int* pX=&x;
    int** pPX=&pX;
    printf("Ertek: %d\n", **pPX);
}

/** Dinamikus Tömb később növelhetjük a méretét nem kell előre tudnunk fixen*/
void resz58() {
    const int size=10;
    int* tomb = (int*) malloc(sizeof(int)*size);
    scantomb2( tomb, size);
    printtomb2( tomb, size);
    free(tomb); //ha ezt elfelejtjuk dynakuikuzs tombok esetében, memória szivagrgast eredfmenyez
}

void printtomb2(int tomb[], const int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d: %d\n",i, tomb[i]);
    }
}

void scantomb2(int tomb[], const int size) {
    for (int i = 0; i < size; ++i) {
        scanf("%d",&tomb[i]);
    }
}

/** ravezetetes a dynamikus tombokre: Memóriakezelés - lefoglalás */
void resz57() {
    //memoriat h lefoglaljunk, szükség van az stdlib.h-ra --malloc duggveny?
    //valtozonak helyet foglalok le-->az dynamikus váéltozo lesz

    //statikus vs dynamikus tobok közötti kulonbség-->statikus tomboknel tudom mennyi lesz a merte, as dynamikusnal nem

    //malloc(sizeof(int)) = 1 int-nyi helyet foglalok a memoriaban, ezt konvertálni kell int*-ra mert alapbol a malloc az void* visszatérésű
    int* x=(int*) malloc(sizeof(int));
    scanf("%d", x); //Az x mögé nem kell &-jel mert pointer és annak az alapértéke a memóriacím
    printf("szam: %d",*x);
    //fgv végén mindig fel kell oldani a lefoglalt tárterületet
    free(x); //ha nem hasznaljuk már a valtozot a memoriabanak vissza kell adni a tárterületet
}

/** Címszerinti paraméterátadás */
void resz56() {
    int a=5, b=2;
    printf("a=%d b=%d\n",a,b);
    csere(&a,&b); //cimszerint adunk át értéket, referenciát alakítunk ki
    printf("a=%d b=%d\n",a,b);

}

void csere(int *a, int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
    printf("a=%d b=%d\n",*a,*b);
}

/** Fuggvenyek es pointerek kapocsolata */
void resz55() {
    const int size=10;
    int tomb[size];
    scantomb(tomb, size);
    printtomb(tomb, size);
}

void printtomb(int tomb[10], const int size) {
    for (int i = 0; i < size; ++i) {
        printf("tomb[%d] = %d\n",i, tomb[i]);
    }
}

void scantomb(int tomb[10], const int size) {
    //tomb magában egy cimre mutató pointer, ezért ezeket mindig cimszerint adjuk at
    //vannak esetek amikor nem mindig cimszerint torienik az informacio atadas
    for (int i = 0; i < size; ++i) {
        printf("tomb[%d]= ",i);
        scanf("%d", &tomb[i]);
    }
}

/*
 * statikus tombok, stringek esetében mindig cim szerint adodnak at az ertekek, REF
void scantomb(int tomb[10], const int size) {
for (int i = 0; i < size; ++i) {
        printf("tomb[%d]= ",i);
        scanf("%d", &tomb[i]);
    }
}
*/

//** memoria cimzes statikus tomboknel */
void resz54() {
    int tomb[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d",&tomb[i]);
    }

    //maga a tomb már mutat az első elemre, tombbel a memoria cimet kapjuk meg, *tombbel az eretket
    //tomb[i] az *(tomb+i) vel felel meg, a csillaggaé feloldjuk azt, és elérjuk az elemez
    printf("\n%d\t %p\n", *tomb, tomb);
    printf("\n%d\t %p\n", *tomb, tomb+1); //+1-el rámutatunk a következő memória cimre

    printf("\nElem:\t Ertek:\t Cim:\n");
    for (int i = 0; i < 10; ++i) {
        printf("tomb[%d]\t %d\t %p\n",i, tomb[i], &tomb[i]);
    }

}

/** memória címzés */
void resz53() {
    int x=5;
    int* pX=&x; //int* olyan változó ami egy integer memória cimét képes eltárolni

    printf("A valtozo neve: x\n"
           " valtozo erteke: %d\n"
           "A valtozo memoriacime: %p\n",x,&x);

    printf("A valtozo neve: x\n"
           " valtozo erteke: %d\n"
           "A valtozo memoriacime: %p\n",x,pX);

    printf("Adj meg 2 szamot (a b):");
    int a,b;
    int* pA=&a; //vagy: int *pA, *pB egy sorban!
    int* pB=&b;

    scanf("%d %d",pA,pB);
    printf("erteke: %d %d\n",*pA,b);
    printf("memoria cime: %p %p\n",pA,&b);
}


/** primek */
void resz52() {
    int x;
    printf("Adj meg egy szamot!\n");
    scanf("%d", &x);
    if(prime(x)){
        printf("A szam prim!\n");
    } else{
        printf("A szam nem prim!\n");
    }
}

bool prime(int x) {
    int i=2;
    while (i<=sqrt(x) && x%i!=0) {i++;}
    if(i>sqrt(x)) return true;
    else return false;
}

void resz51() {
    int a,b;
    printf("Adj meg ket szamot! (a b)\n");
    scanf("%d %d",&a,&b);
    printf("Az osszeg: %d",osszeg(a,b));
}

int osszeg(int a, int b) {
    return a+b;
}



/** Bool*/
void resz50() {
    bool ertek;
    printf("Akarok e meg enni?\n");
    scanf("%d", &ertek);
    if(ertek){
        printf("igen\n");
    } else{
        printf("nem\n");
    }
}

typedef enum szinek{
    kek=2,
    barna,
    piros,
    zold
} szinek;

/** Enum */
void resz49() {
    szinek szin=kek;
    szinek masikSzin=2;
    printf("%d",szin);
}

typedef struct dolgozo{
    int ID;
    float suly;
    char nev[51];
    char szemszin[21];
} dolgozo;

void resz48() {
    int tomb[20];
    dolgozo dolgozok[3];

    for (int i = 0; i < 3; ++i) {
        scanf("%d %f %s %s",&dolgozok[i].ID, &dolgozok[i].suly, dolgozok[i].nev, dolgozok[i].szemszin);
    }

    printf(">>>>>>>>>>>>>>>>>>>>>>>\n");

    for (int i = 0; i < 3; ++i) {
        printf("%d %0.2f %s %s\n",dolgozok[i].ID, dolgozok[i].suly, dolgozok[i].nev, dolgozok[i].szemszin);
    }


}




/** Strut */
void resz47() {
    //struct dolgozo-->típus
    //dolgozo1-->valtozonev
    dolgozo dolgozo1;
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


