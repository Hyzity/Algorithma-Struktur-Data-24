/*
Nama    : Noel Alfonso Tamba
NIM     : 11423046
Nama Program : Struct Point 2*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _point{
    float X;
    float Y;
}POINT;

POINT MakePOINT (float X, float Y){
    POINT P;
    P.X=X;
    P.Y=Y;
    return P;
}

void BacaPOINT (POINT *P){
    float X,Y;
    scanf("%f %f", &X, &Y);
    *P = MakePOINT(X,Y);
}

void TulisPOINT (POINT *P){
    //printf("(%.2f,%.2f)", P->X, P->Y);
    printf("(%.2f,%.2f)", (*P).X, (*P).Y);
}

int main(){
    int N;
    float x, y, sudut;
    POINT P;

    BacaPOINT(&P);
    printf("POINT berada pada Titik: ");
    TulisPOINT(&P);
    printf("\n");

    return 0;
}