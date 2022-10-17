#include <stdio.h>
#include <stdlib.h>

int main()
{
    //feladat2();
    //feladat3();
    //feladat5();

    gyakorlas6();
    feladat7();
    feladat8();
    return 0;
}

//teszt ugy össze álltani az eddig elhangzottak,

feladat8(){
    int i=12, *p;
    p=&i;
    *p=*p*2; //*=2;
    printf("%d", i);

    //pointeresk és tömbök
    int t[5]={10,1,2,4,6};
    p=t+1;
    printf("p tomb merete: %d\n", sizeof(p)); //nem tudjuk megmondani vele h az eredeti tömb mekkora, csak az elemeit érjük el
    printf("p tomb merete: %d\n", sizeof(t));


}

feladat7(){
    int jegyek[10]={5,1,3,5,2,3,3,5,5,2};
    int n=sizeof(jegyek)/sizeof(jegyek[0]);

    //1
    for(int i=0;i<n && jegyek[i]!=1;i++);
    printf("Volt-e bukas? %s",i!=n?"Igen\n":"Nem\n");

    //2a
    for(int i=0;i<n && jegyek[i]!=5;i++);
    printf("jeles volt-e az osztaly? %s",i!=n?"Igen\n":"Nem\n");

    //2b
    int darab=0;
    for(int i=0;i<n;i++)if(jegyek[i]==5)darab++;
    printf("Hany jeles volt az osztalyban? %d\n",darab);

    //programozási programok, rendezések(teljes cserés rednezés)

    //redezes novekvo sorban
    int tomb[]={1,2,46,5,3,6,10};
    //teljes cseres rendezes;
    int nn=sizeof(tomb)/sizeof(tomb[0]);
    int ii=0;
    int j=0;
    for(ii=0;ii<n-1;ii++){
        for(j=ii+1;j<nn;j++){
            if(tomb[ii]>tomb[j]){
                int c=tomb[ii];
                tomb[ii]=tomb[j];
                tomb[j]=c;
            }
        }
    }
    for(ii=0;ii<nn;ii++) printf("%d ",tomb[ii]);
    printf("\n");

    int x=123;
    int *p;
    //ráállítom a p mutatót az x cimére
    p=&x;
    //%p memória cim kiirására alkamas
    printf("%p \n",&x); //az x memória cime
    printf("%p \n",p); //az x memória cime
    printf("%d \n",x);//az x értéke

    //a p-n keresztul megváltoztatom az x értékeét
    *p=20;
    //a p cimén lávő érték: *p
    printf("%d \n",x);//az x értéke

    //

}

/** literációk ciklusok **/
void gyakorlas6(){
    //while, do.. while, for..


}

void feladat5(){
    //1
    printf("Add meg a szuletesi eved: ");
    int year=0;
    scanf("%d",&year);

    if(year<1900 || year >2022){
        printf("Nagyon kicsi vagy nagyon nagy az ev amit megadtal!");
    }else{
        int age=2022-year;
        printf("%d eves vagy", age);
        if(age>=18) printf("nagykoru");
    }
    printf("\n\n");

    //2
    printf("Add meg egy szamot");
    int number=0;
    scanf("%d", &number);
    int number1=number/10;
    int number2=number%10;
    if(number>=1 && number<=99){
        switch(number){
            case 10: printf("tiz"); break;
            case 20: printf("husz"); break;
            case 30: printf("harminc"); break;
            default: {
                switch(number1){
                    case 1: printf("tizen"); break;
                    case 2: printf("huszon"); break;
                    case 3: printf("harminc"); break;
                    case 4: printf("negyven"); break;
                    case 5: printf("otven"); break;
                    case 6: printf("hatvan"); break;
                    case 7: printf("hetven"); break;
                    case 8: printf("nyolcvan"); break;
                    case 9: printf("kilencven"); break;
                }
                switch(number2){
                    case 1: printf("egy"); break;
                    case 2: printf("ketto"); break;
                    case 3: printf("harom"); break;
                    case 4: printf("negy"); break;
                    case 5: printf("ot"); break;
                    case 6: printf("hat"); break;
                    case 7: printf("het"); break;
                    case 8: printf("nyolc"); break;
                    case 9: printf("kilenc"); break;
                }
            }
        }
    }

    //3
    printf("Adja meg a harmomszog osszes oldalanak hosszat: ");
    float a, b,c;
    scanf("%f %f %f", &a, &b, &c);
    //szerkesztheto
    if(a < b + c && b < a + c && c < a + b) //< ellentéte >= és ellentéte vagy
    {
        printf("Szerkesztheto a haromszog");
        //derekszogu-e
        if(a * a + b * b == c * c ||
           b * b + c * c == a * a ||
           a * a + c * c == b * b)
            printf("derekszogu harmoszog");
        else
            printf("nem derekszogu");
    }
    else printf("nem szerkesztheto!");

}

// https://mooc.nye.hu/
// https://mooc.nye.hu/enrol/index.php?id=15
// prog1C!

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
        //if(numbers[i]==max)print("");
    }

}
void vlmi(){
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
