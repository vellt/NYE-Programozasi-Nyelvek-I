#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "szilva.h"

void karaterkezelosFuggvenyek();
void karaterkezelosFuggvenyek2();
int main()
{
    //tombok();
    //ketddimenziosTombok();
    //feladat();
    //string();
    //szamok();
    //csere();
    //osszegzes();
    //eldontes();
    //linearisKereses();
    //kivalasztas();
    //megaszamlalas();
    //minMax();
    //minMaxIndex();
    //kivalasztasTetetele();
    //egyszeruCseresRendezes();
    //rendezesMinINdexKivalasztasaval();
    //buborekosRendezes();
    //putsGets();
    //matematikaiFuggvenyek();
    //matematikaiFuggvenyek2();
    //matematikaiFuggvenyek3();
    karaterkezelosFuggvenyek();
    karaterkezelosFuggvenyek2();
    return 0; //hiba kódja, nulla az jó, minden más rossz!
}

void karaterkezelosFuggvenyek2(){

}

void karaterkezelosFuggvenyek(){
    /*
    char a;
    printf("Adj mge egy kjaraktert.\n");
    scanf("%c",&a);
    if(isdigit(a)){
        printf("Ez egy szam.\n");
    }else {
        printf("EZ nem egy szam\n");
    }
    */
    char mondat[100];
    int i, db=0;
    puts("Adj meg egy mondatot.");
    gets(mondat);

    printf("%d\n",sizeof(mondat)/sizeof(mondat[0])); //ez az egesz tömb hosszat adja meg
    printf("%d\n",strlen(mondat)); //itt a tenyxlegesen használt karakterek db-számát adja meg

    for(i=0;i<strlen(mondat);i++){
        if(isspace(mondat[i])){
            db++;
        }
    }

    printf("A mondat %d szobol epul fel.\n",db+1); //szókozük száma +1 == a szavak számával

}

void matematikaiFuggvenyek3(){
    double a;
    printf("Addj meg egy radian erteket.\n");
    scanf("%lf", &a);
    printf("A szog szinusza: %lf\n", sin(a)); //cos(a)
    printf("A szám termeszetes alapu logaritmusa: %lf",log(a));

}

void matematikaiFuggvenyek2(){
    //pow doublet ad vissza! megjeleníteni igy tudom: %.0lf
    //hatványozás
    //pow(a,2);
    double a;
    puts("Adj meg egy szamot");
    scanf("%lf",&a);
    for(int i=0;i<=10;i++){
        printf("%.0lf^%d: %.0lf\n", a, i, pow(a,i));
    }
    int e;
    puts("Adj meg egy szamot: ");
    scanf("%d",&e);
    printf("%d\n", (int)pow(e,2));

    //sqrt(a) gyökvonás
    printf("%.0lf",sqrt(e));

}

/** #include<math.h> **/
void matematikaiFuggvenyek(){
     float a;
     printf("Adj meg egy szamot\n");
     scanf("%f",&a);
     //a=round(a); //kerekit
     //a= ceil(a); //felfelé kerekit mindent (a%a==0)?a:(int)a+1  5.0 abból 5 marad
     //a= ceil(a) ---> a= (a-(int)a)!=0?(int)a+1:a;
     //ceil ellentéte a floor mindent lefelé kerekít
     //abszulút érték (nullûtól való távolsógot adja vissza) abs vagy float esetében fabs
     a=floor(a);
     printf("%.2f",a);
}

/** stringek bekerese és kiiratasa **/
void putsGets(){

/*
    char alma[100];

    printf("Adj meg egy mondatot.\n");
    scanf("%[^\n]s", alma); //nem kell & mert mutató
    printf("szeretem az %s\n", alma);

*/
    char alma[100];
    puts("Adj meg egy mondatot.");
    gets(alma);
    printf("szeretem az %s\n", alma);
}

/** prog tetel **/
void buborekosRendezes(){
   int tomb[N];
   for(int i=0;i<N;i++){
    printf("Add meg a tomb %d. elemet: ", i);
    scanf("%d", &tomb[i]);
   }

   for(int i=1; i<N; i++){
    for(int j=N-1;j>=i;j--){
        if(tomb[j-1]>tomb[j]){
            int temp=tomb[j-1];
            tomb[j-1]=tomb[j];
            tomb[j]=temp;
        }
    }
   }

   printf("\n");
   for(int i=0;i<N;i++) printf("%d ", tomb[i]);

}

/** prog tetel LEGHATEKONYABB **/
void rendezesMinINdexKivalasztasaval(){
    int tomb[N];
    for(int i=0;i<N;i++){
        printf("Add meg a tomb %d. elemet: ",i);
        scanf("%d", &tomb[i]);
    }
    for(int i=0;i<N-1;i++){
        int minindex=i;
        for(int j=i+1;j<N;j++){
            if(tomb[j]<tomb[minindex]){
                minindex=j;
            }
        }
        if(i!=minindex){
            int temp=tomb[i];
            tomb[i]=tomb[minindex];
            tomb[minindex]=temp;
        }
    }

    printf("\n");
    for(int i=0;i<N;i++) printf("%d ", tomb[i]);
}

/** prog tetel **/
void egyszeruCseresRendezes(){
    printf("Add meg a tomb hosszat: ");
    int n=0;
    scanf("%d",&n);
    int tomb[n];
    for(int i=0;i<n;i++){
        printf("Add meg a tomb %d. elemet: ", i);
        scanf("%d", &tomb[i]);
    }
    printf("\nA tomb elmei:\t");
    for(int i=0;i<n;i++) printf("%d\t", tomb[i]);

    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(tomb[i]<tomb[j]){
                int temp=tomb[j];
                tomb[j]=tomb[i];
                tomb[i]=temp;
            }
        }
    }

    printf("\nA tomb elmei:\t");
    for(int i=0;i<n;i++) printf("%d\t", tomb[i]);
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(tomb[i]>tomb[j]){
                int temp=tomb[j];
                tomb[j]=tomb[i];
                tomb[i]=temp;
            }
        }
    }

    printf("\nA tomb elmei:\t");
    for(int i=0;i<n;i++) printf("%d\t", tomb[i]);
}

/** programozasi tetel **/
void kivalasztasTetetele(){
    int tomb[N];
    for(int i=0; i<N;i++){
        printf("Adja meg a %d. elemet: ", i);
        scanf("%d",&tomb[i]);
    }
    //5 nel nagyobbak
    int tomb2[N];
    int j=0;

    for(int i=0;i<N;i++){
        if(tomb[i]>5){
            tomb2[j]=i;
            j++;
        }
    }

    //kiiratjuk
    for(int i=0;i<j;i++){
        printf("%d. elem:\t %d",tomb2[i], tomb[tomb2[i]]);
    }
}

/** programozasi tetel **/
void minMaxIndex(){
    int tomb[N];
    for(int i=0;i<N;i++){
        printf("Adja meg a tomb %d. elemet: ", i+1);
        scanf("%d",&tomb[i]);
    }
    int minIndex=0,maxIndex=0;
    for(int i=1;i<N;i++){
        if(tomb[i]<tomb[minIndex])minIndex=i;
        if(tomb[i]>tomb[maxIndex])maxIndex=i;
    }
    printf("A min index: %d (%d)\t A max index: %d (%d).",minIndex,tomb[minIndex],maxIndex, tomb[maxIndex]);
}

/** programozasi tetel **/
void minMax(){
    int tomb[N];
    for(int i=0;i<N;i++){
        printf("Adja meg a tomb %d. elemet: ", i+1);
        scanf("%d",&tomb[i]);
    }
    int min=tomb[0],max=tomb[0];
    for(int i=1;i<N;i++){
        if(tomb[i]<min) min=tomb[i];
        if(tomb[i]>max) max=tomb[i];
    }
    printf("min: %d\tmax:%d",min,max);
}

/** programozasi tetel **/
void megaszamlalas(){
    int tomb[N];
    for(int i=0;i<N;i++){
        printf("Adja meg a tomb %d. elemet: ", i+1);
        scanf("%d",&tomb[i]);
    }
    int db=0;

    for(int i=0;i<N;i++){
        if(tomb[i]==5) db++;
    }
    printf("A keresett elem darabszama: %d", db);

}

/** programozasi tetel **/
void kivalasztas(){
    int tomb[N];
    for(int i=0;i<N;i++){
        printf("Adja meg a tomb %d. elemet: ", i+1);
        scanf("%d",&tomb[i]);
    }
    //nem nezi azt hogy ha nincs benne, akk jó ha biztosan tudjuk h benne van az 5 a listában
    int index=0;
    while(tomb[index]!=5){
        index++;
    }
    printf("Van talalat, indexe: %d", index);
}

/** programozasi tetel **/
void linearisKereses(){
    int tomb[N];
    for(int i=0;i<N;i++){
        printf("Adja meg a tomb %d. elemet: ", i+1);
        scanf("%d",&tomb[i]);
    }
    int index=0;
    while(index<N && tomb[index]!=5){
        index++;
    }
    //for(;index<N && tomb[index]!=5;index++){}
    (index<N)?printf("Van talalat, indexe: %d", index):printf("Nincs talalat");
}

/** programozasi tetel **/
void osszegzes(){
     int tomb[N];
     int sum=0;
     for(int i=0;i<N;i++){
        printf("Add meg a tomb %d. elemet: ", i+1);
        scanf("%d",&tomb[i]);
        sum+=tomb[i];
     }
     printf("osszeg: %d", sum);
}

/** programozasi tetel **/
void eldontes(){
    int kereses=5;
    int tomb[N];
    int van=0;
    for(int i=0;i<N;i++){
        printf("a tomb %d. elemne: ",i+1);
        scanf("%d", &tomb[i]);
        if(tomb[i]==kereses) van++;
    }
    printf("\n");
    (van)?printf("van benne!\n"):printf("nincs benne!\n");
}

/** programozasi tetel **/
void csere(){
    int a=5;
    int b=6;
    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("a:%d b:%d",a,b);
}

void szamok(){
    int szam;
    printf("szam: ");
    scanf("%d", &szam);
    printf("a szam valtozo erteke: %d", szam);
}

void string(){
    char alma[80]; //79 karaktert tuid eltárolni, ugyanis az utpolsó karakter az \0

    printf("alma = ");
    scanf("%[^\n]s", alma);
    printf("Az alma valtozo erteke: %s\n", alma);
    char honapok[4][20]={"Junius","Julius","Augustus","December"};

    char szoveg[]={"asdf\n"};
    printf("%s",szoveg);

}
void feladat(){

    int tomb[5];
    for(int i=0;i<5;i++){
        printf("Add meg a tomb %d. elemet.\n", i+1);
        scanf("%d", &tomb[i]);
    }
    for(int i=0;i<5;i++){
        printf("A tomb %d. eleme: %d\n",i+1, tomb[i]);
    }

}

void egyeb(){
    printf("Hello world!\n"); //cntr +d sor copy-zás
    printf("Hello world!\n");
    //nincs string, helyette van tömb

    //int--> %d, %i
    //char --> %c
    //float --> %f %.2fs
    //double --> %lf %.4lf
    // %x hexa számát adja vissza egy intnek
    printf("%c\n",'+'); //+
    printf("%i\n",'+'); //43
    printf("%c\n",43); //+


    //további típusok--> van kulon character specifierseik
    long int szam;
    long long int nagyobSzam;
    long double lebSZam;

    unsigned int unsigneda =32; //azt jelenti hogy nincs minusz
    short sh; //16biten ábrázol

    printf("%d\n",N);
    printf("------------------\n");


    int a, b;
    printf("Adj meg egy szamot!\n");
    scanf("%d",&a);

    printf("Adj meg egy szamot!\n");
    scanf("%d",&b);

    printf("Az a szam: %d a b szam: %d\n",a,b);


    printf("Adj meg ket szamot!\n");
    scanf("%d %d",&a, &b);
    printf("Az a szam: %d a b szam: %d\n",a,b);
    printf("------------------\n");

    //(1)?  igaz():printf("nem\n");
}

void ketddimenziosTombok(){
    int d3tomb [7][3]={
        {2,3,4},
        {12,13,14},
        {22,23,24},
        {33,33,34},
        {42,43,44},
        {52,53,54},
        {62,63,64},
    };
    printf("szerda reggel a homerseklet: %d",d3tomb[2][0]);
}

void igaz(){
    printf("igaz\n");
    printf("vagy nem\n");
}

void tombok(){
    int homersekletek[7]={12,3,4,10,6,89,22};
    printf("tomb[1]: %d",homersekletek[1]);
}
