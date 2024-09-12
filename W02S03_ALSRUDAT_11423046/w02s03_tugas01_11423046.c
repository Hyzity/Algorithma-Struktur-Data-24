/*
NIM     : 11423046
Nama    : Noel Alfonso Tamba
Nama Program : Struct Point 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _laptop
{
    int ID;
    char *name;
    char *spec;
    float price;
} LAPTOP;


LAPTOP MakeLAPTOP (int ID, char *name, char *spec, float price){
    LAPTOP L;
    L.ID = ID;
    L.name = (char *)malloc(strlen(name) + 1); // Alokasi memori untuk name
    strcpy(L.name, name);
    L.spec = (char *)malloc(strlen(spec) + 1); // Alokasi memori untuk spec
    strcpy(L.spec, spec);
    L.price = price;
    return L;
}

void BacaLAPTOP(LAPTOP *L){
    int ID;
    char name[100];
    char spec[100];
    float price;
    printf("ID : ");
    scanf("%d", &ID);
    printf("Name : ");
    scanf("%s", name);
    printf("Spec : ");
    scanf("%s", spec);
    printf("Price : ");
    scanf("%f", &price);
    *L = MakeLAPTOP (ID, name, spec, price);
}

void TulisLAPTOP (LAPTOP L){
    printf("ID \t: %d\n", L.ID);
    printf("Name \t: %s\n", L.name);
    printf("Spec \t: %s\n", L.spec);
    printf("Price \t: %.2f\n", L.price);
}

void KosongkanLAPTOP(LAPTOP *L){ //Tempat pengosongan Memory
    free(L->name);
    free(L->spec);
}

int main(){
    LAPTOP L;

    BacaLAPTOP(&L);
    printf("============DATA LAPTOP============\n");
    TulisLAPTOP(L);
    printf("\n");

    KosongkanLAPTOP(&L);

    return 0;
}