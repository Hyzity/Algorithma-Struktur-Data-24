#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct _point {
    float X; //absis
    float Y; //ordinat
};

//Fungsi untuk set nilai X dan Y ke dalam struct _point
struct _point MakePOINT (float X, float Y){
    struct _point P;
    P.X = X;
    P.Y = Y;
    return P;
}

void BacaPOINT (struct _point *P){
    float X, Y;
    scanf("%f %f", &X, &Y);
    *P = MakePOINT(X, Y);
}

void TulisPOINT (struct _point P){
    printf("(%.2f,%.2f)", P.X, P.Y);
}

int main(){
    struct _point P;

    BacaPOINT(&P);
    printf("POINT berada pada Titik: ");
    TulisPOINT(P);
    printf("\n");

    return 0;
}
