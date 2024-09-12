/*
NIM     : 11423046
Nama    : Noel Alfonso Tamba
Nama Program : Struct Point 1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _product{
    float harga;
    char nama[100];
    char warna[100];
    char kategori[100];
}PRODUK;

PRODUK MakePRODUK (float harga, char nama[], char warna[], char kategori[]){
    PRODUK P;
    P.harga = harga;
    strcpy(P.nama,nama);
    strcpy(P.warna,warna);
    strcpy(P.kategori,kategori);
    return P;
}

void BacaPRODUK(PRODUK *P){
    float harga;
    char nama[100];
    char warna[100];
    char kategori[100];
    printf("Harga : ");
    scanf("%f", &harga);
    printf("Nama Produk : ");
    scanf("%s", &nama);
    printf("Warna : ");
    scanf("%s", &warna);
    printf("Kategori : ");
    scanf("%s", &kategori);
    *P = MakePRODUK (harga,nama,warna,kategori);
}

void TulisPRODUK (PRODUK P){
    printf("Harga : %.2f\n", P.harga);
    printf("Nama Produk : %s\n", P.nama);
    printf("Warna : %s\n", P.warna);
    printf("Kategori : %s\n", P.kategori);
}

int main(){
    PRODUK P;

    BacaPRODUK(&P);
    printf("==========DATA PRODUK===========\n");
    TulisPRODUK(P);
    printf("\n");

    return 0;
}