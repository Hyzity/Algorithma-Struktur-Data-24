/*
NIM     : 11423046
Nama    : Noel Alfonso Tamba
Nama Program : Abstract Data TYpe (ADT)
*/

#include <stdio.h>
#include <math.h>
#include "point.h"

int main()
{
    POINT P, P1, P2;
    float jarak;
    boolean SbX;

    printf("Enter X and Y on POINT : ");
    BacaPOINT(&P);
    printf("POINT P: ");
    TulisPOINT(P);
    printf("\n");
    printf("Enter X and Y on POINT 1 : ");
    BacaPOINT(&P1);
    printf("POINT P1 : ");
    TulisPOINT(P1);
    printf("\n");
    printf("Enter X and Y on POINT 2 : ");
    BacaPOINT(&P2);
    printf("POINT P2 : ");
    TulisPOINT(P2);
    printf("\n\n");

    if (EQ(P1, P2) == 1)
    {
        printf("POINT P1 equals POINT P2\n");
    }
    else
    {
        printf("POINT P1 not equals POINT P2\n");
    }

    if (IsOrigin(P) == 1)
    {
        printf("POINT P is Origin (Center Point)\n");
    }
    else
    {
        printf("POINT P is Not Origin (Center Point)\n");
    }

    if (IsOnSbX(P) == 1)
    {
        printf("POINT P is On X Axis\n");
    }
    else if (IsOnSbY(P) == 1)
    {
        printf("POINT P is On X Axis\n");
    }
    else
    {
        printf("POINT P is not On X and Y Axis\n");
    }

    if (Kuadran(P) == 0){
        printf("POINT P is Not On Kuadran\n");
    }
    else{
        printf("POINT P is ON Kuadran %d\n", Kuadran(P));
    }

    jarak = Jarak(P1, P2);
    printf("Jarak POINT P1 and P2: %.2f\n", jarak);

    // Cermin terhadap sumbu X
    SbX = true;
    POINT mirrorX = MirrorOf(P, SbX);
    printf("Mirror Of POINT P On X AXis: (%.2f, %.2f)\n", mirrorX.X, mirrorX.Y);

    // Cermin terhadap sumbu Y
    SbX = false;
    POINT mirrorY = MirrorOf(P, SbX);
    printf("Mirror Of POINT P On Y AXis: (%.2f, %.2f)\n", mirrorY.X, mirrorY.Y);

    // Geser POINT P dengan delta X dan Y
    float deltaX = 2.0, deltaY = 2.0;
    POINT geserP = Geser(P, deltaX, deltaY);
    printf("Geser POINT P sebanYak delta X dan delta Y: %.2f %.2f\n", deltaX, deltaY);
    printf("POINT P Setelah Fungsi Geser: (%.2f, %.2f)\n", geserP.X, geserP.Y);

    return 0;
}