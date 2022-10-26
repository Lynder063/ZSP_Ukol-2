/*
* Nazev programu: Kinematika
*
* Autor: Darius Xerxes
*
* Datum: 26.11.2021
*  Tento program je pro vypocet rovnomerne zrychleneho pohybu. 
* Ve funkci intro se nastav� vstupni hodnoty, pokud jsou hodnoty zaporne program skonci. 
* Dale se ve funcki vola funkce kinematika, ktera zajistuje veskere vypocty a pote jejich vypsani, 
* vypisuje i typ pohybu. Funkce kinematika take vypisuje prehledovou tabulku.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h> //vstupy vystupy
#include <math.h>  //matematicke funkce
#include "task1.h"

// -- glob�ln� prom�nn�
char nazev_ukolu[255];
int uvod = 1;
// vstupn� hodnoty
const double s0 = 0.0; // po��te�n� dr�ha
double v0;  // po��te�n� rychlost
double v1;  // rychlost v �ase t0
double t0;  // po��te�n� �as
double t;   // kone�n� �as
// vystupn� hodnoty
double a;   // zrychlen�
double s;   // dr�ha ujet� v �ase <t>
double v;   // rychlost v �ase <t>
double pomer;   // pom�r rychlost� v1 a v0
int typPohybu;  // identifikator typu pohybu {1 - zrychlen� pohyb; 2 - konstantn� pohyb; 3 - zpomalen� pohyb}

void note()
{
    char nazev_ukolu[] = "ZSP - Domaci ukol c. 2 - \"Kinematika\"";
    if (uvod == 1) {
        uvod = 0;
        printf("Kinematika - program pro vypocet rovnomerne zrychleneho pohybu.\n\n");
        printf("jmeno: Darius Xerxes\n");
        printf("login: xerxes\n");
        printf("datum plneni ukolu: 26.11.2011\n");
        printf(nazev_ukolu);
    }
}

int kinematika();

int intro(float v0_p, float v1_p, float t0_p, float t_p)
// funkce, ktera nahrazuje na�ten� hodnot z kl�vesnice u�ivatele,
// kontroluje se zde, zda jsou ��sla z�porn�, pokud ano, pak funkce skon��, 
// pokud ne, pak se zavol� funkce kinematika a v�pis, zda prob�hl program
// n�vratov� hodnota indikuje �sp�ch proveden� operace nebo typ chyby
{
    v0 = v0_p;
    v1 = v1_p;
    t0 = t0_p;
    t = t_p;

    if (v0 > 0) {
        if (v1 > 0) {
            if (t0 > 0) {
                if (t > 0) {
                    return 0;
                        kinematika();
                }
                else {
                    return -4;
                }
            }
            else {
                return -3;
            }
        }
        else {
            return -2;
        }
    }
    else {
        return -1;
    }



    // ------
    // 
    //todo(2): Podminky na zapornost vstupnich hodnot. 
    //      Kontrolovat smysluplnost vstupn�ch hodnot v0, v1, t0, t a to kontrolovat v uveden�m po�ad�. Hodnoty nesm� b�t z�porn�. 
    //      Funkce intro vr�t� hodnotu 0, pokud jsou hodnoty v po��dku. A zavol� funkci kinematika pro realizaci v�po�tu.
    //      Vr�t� hodnotu -1 : �patn� je v0; -2 : �patn� je v1; -3 : �patn� je t0; -4 : �patn� je t. V p��pad� zji�t�n� chyby nav�c zobraz� informaci
    //      <Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.> a na dal�� ��dek <Uspesne neprovedeno.>.

    //return -5;
}

void kinematika_vypocet()
// funkce dopo��t� na z�klad� vstupn�ch hodnot v�echny v�stupn� hodnoty
{//todo(3):
    // realizace v�po�tu v�stupn�ch hodnot dle vzorc� a logick�ho vyhodnocen�



    a = (v1 - v0) / t0;
    v = v0 + a * t;
    s = s0 + (v0*t) + (0.5*a) * pow(t, 2); //t ^ 2 

    pomer = v1 / v0;

    if (a < 0) {
        typPohybu = 1;
    }
    else if (a > 0) {
        typPohybu = 3;
    }
    else (a = 0); {
        typPohybu = 2;
    }

}


void kinematika_vypisPohybu() 
// funkce pro vypis informace o pohybu
// zobraz� textov� popis pohybu zji�t�n�ho typu pohybu: 
//  <Pohyb je rovnomerne zpomaleny>; <Pohyb je konstantni>; <Pohyb je rovnomerne zrychleny> a zajist� jedno od��dkov�n�
{
    //todo(4):
    ;
}

void kinematika_vypisTabulky()
// funkce vyp�e v�sledky a p�ehledovou tabulku dle vzoru uveden�m v zad�n�
{    
    printf("Tabulka vysledku\n");
    //todo(5):

    return;
}



int kinematika()  // funkce kinematika
{
    note();

    //todo(5):
    // zajistit realizaci v�po�tu a zobrazen� v�sledk� podm�nit validitou vstupn�ch dat. 

    kinematika_vypisPohybu();
    kinematika_vypisTabulky();
    return 1;
}


