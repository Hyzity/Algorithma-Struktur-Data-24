/*
NIM     : 11423046
Nama    : Noel Alfonso Tamba
Nama Program : Complex Struct (Tugas 2)
*/

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

typedef struct _line
{
    POINT start;
    POINT end;
}LINE;

LINE MakeLINE (POINT start, POINT end){
    LINE L;
    L.start = start;
    L.end = end;
    return L;
}

void BacaPOINT (POINT *P){
    float X,Y;
    scanf ("%f %f", &X, &Y);
    *P = MakePOINT(X,Y);
}

void TulisPOINT (POINT P){
    printf("(%.0f, %.0f)", P.X, P.Y);
}

int main(){
    int N;
    float x, y, sudut;
    POINT P1, P2, P3;
    printf("Point (1): ");
    BacaPOINT(&P1);
    printf("Point (2): ");
    BacaPOINT(&P2);
    printf("Point (3): ");
    BacaPOINT(&P3);

    printf("Segitiga berada pada Titik Berikut: \n");
    printf("Point 1: ");
    TulisPOINT(P1);
    printf("\nPoint 2: ");
    TulisPOINT(P2);
    printf("\nPoint 3: ");
    TulisPOINT(P3);
    printf("\n");

    return 0;
}
