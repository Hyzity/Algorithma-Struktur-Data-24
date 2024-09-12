/*
NIM     : 11423046
Nama    : Noel Alfonso Tamba
Nama Program : Abstract Data Type (ADT)
*/

// Definisi Abstact Data Type Point
#ifndef POINT_H
#define POINT_H

#define boolean unsigned char
#define true 1
#define false 0

typedef struct _point
{
    float X;
    float Y;
} POINT;

// Notasi Akses: Selektor 'Point'
#define Absis(P) (P).X
#define Ordinat(P) (P).Y

// DEFINISI PROTOTIPE PRIMITIF
// Konstruktor membentuk 'Point'
POINT MakePOINT(float X, float Y);
// Membentuk sebuah POINT dari komponen-komponennya

// KELOMPOK Interaksi dengan I/O device, BACA/TULIS
void BacaPOINT(POINT *P);
/*Membaca nilai absis dan ordinat dari keyboard dan membentuk
POINT P berdasarkan dari nilai absis dan ordinat tersebut*/
/*Komponen X dan Y dibaca dalam 1 baris, dipisahkan 1 buah spasi*/
/* Contoh: 1 2
akan membetuk POINT <1,2>*/
/* I.S. Sembarang */
/* F.S. P terdefinisi*/
void TulisPOINT(POINT P);

// Kelompok operasi relasional terhadap POINT
boolean EQ(POINT P1, POINT P2);
// Mengirimkan true jika P1 = P2 : absis dan ordinatnya sama
boolean NEQ(POINT P1, POINT P2);
// Mengirimkan true jika P1 tidak sama dengan P2

// Kelompok menentukakn di mana P berada
boolean IsOrigin(POINT P);
// Menghasilkan true jika P adalah titik origin
boolean IsOnSbX(POINT P);
// Menghasilkan true jika P terletak Pada sumbu X
boolean IsOnSbY(POINT P);
// Menghasilkan true jika P terletak pada sumbu Y
int Kuadran(POINT P);
// Menghasilkan kuadran dari P: 1,2,3, atau 4
// Prekondisi : P bukan titik origin dan P tidak terletak di salah satu sumbu
float Jarak(POINT P1, POINT P2);
/* Menghitung jarak antara P1 dan P2 */
/* Gunakan rumus: sqrt((x2-x1)^2 + (y2-y1)^2) */
POINT MirrorOf(POINT P, boolean SbX);
/* I.S. P terdefinisi */
/* F.S. P dicerminkan tergantung nilai SbX atau SbY */
/* Jika SbX true maka dicerminkan terhadap sumbu X */
/* Jika SbX false maka dicerminkan terhadap sumbu Y */
POINT Geser(POINT P, float deltax, float deltay);
/*I.S.P terdefinisi */
/*F.S. P digeser, absisnya sebesar deltax dan ordinatnya sebesar deltay */

#endif