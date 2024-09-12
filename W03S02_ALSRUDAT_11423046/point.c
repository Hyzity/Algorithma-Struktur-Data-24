/*
NIM     : 11423046
Nama    : Noel Alfonso Tamba
Nama Program : Abstract Data TYpe (ADT)
*/

#include <stdio.h>
#include <math.h>
#include "point.h"

POINT MakePOINT(float X, float Y)
{
    POINT P;
    P.X = X;
    P.Y = Y;
    return P;
}

void BacaPOINT(POINT *P)
{
    float X, Y;
    scanf("%f %f", &X, &Y);
    *P = MakePOINT(X, Y);
}
void TulisPOINT(POINT P)
{
    printf("%.2f, %.2f", P.X, P.Y);
}

boolean EQ(POINT P1, POINT P2)
{
    return (P1.X == P2.X) && (P1.Y == P2.Y);
}

boolean NEQ(POINT P1, POINT P2)
{
    return !EQ(P1, P2);
}
boolean IsOrigin(POINT P)
{
    return (P.X == 0) && (P.Y == 0);
}
boolean IsOnSbX(POINT P)
{
    return (P.Y == 0);
}
boolean IsOnSbY(POINT P)
{
    return (P.X == 0);
}

int Kuadran(POINT P)
{
    if ((P.X > 0) && (P.Y > 0))
    {
        return 1;
    }
    else if ((P.X < 0) && (P.Y > 0))
    {
        return 2;
    }
    else if ((P.X < 0) && (P.Y < 0))
    {
        return 3;
    }
    else if ((P.X > 0) && (P.Y < 0))
    {
        return 4;
    }
    else
    {
        return 0;
    }
}
// Fungsi menghitung jarak antara P1 dan P2
float Jarak(POINT P1, POINT P2) {
    return sqrt(pow((P2.X - P1.X), 2) + pow((P2.Y - P1.Y), 2));
}

// Fungsi mencerminkan POINT terhadap sumbu X atau Y
POINT MirrorOf(POINT P, boolean SbX) {
    POINT result;
    if (SbX) {
        // Cermin terhadap sumbu X
        result.X = P.X;
        result.Y = -P.Y;
    } else {
        // Cermin terhadap sumbu Y
        result.X = -P.X;
        result.Y = P.Y;
    }
    return result;
}

// Fungsi menggeser POINT sebesar deltaX dan deltaY
POINT Geser(POINT P, float deltaX, float deltaY) {
    POINT result;
    result.X = P.X + deltaX;
    result.Y = P.Y + deltaY;
    return result;
}