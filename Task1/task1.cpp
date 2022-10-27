/*
* Nazev programu: Kinematika
*
* Autor: Darius Xerxes
*
* Datum: 26.11.2021
*  Tento program je pro vypocet rovnomerne zrychleneho pohybu. 
* Ve funkci intro se nastaví vstupni hodnoty, pokud jsou hodnoty zaporne program skonci. 
* Dale se ve funcki vola funkce kinematika, ktera zajistuje veskere vypocty a pote jejich vypsani, 
* vypisuje i typ pohybu. Funkce kinematika take vypisuje prehledovou tabulku.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h> //vstupy vystupy
#include <math.h>  //matematicke funkce
#include "task1.h"

// -- globální promìnné
char nazev_ukolu[255];
int uvod = 1;
// vstupní hodnoty
const double s0 = 0.0; // poèáteèní dráha
double v0;  // poèáteèní rychlost
double v1;  // rychlost v èase t0
double t0;  // poèáteèní èas
double t;   // koneèný èas
// vystupní hodnoty
double a;   // zrychlení
double s;   // dráha ujetá v èase <t>
double v;   // rychlost v èase <t>
double pomer;   // pomìr rychlostí v1 a v0
int typPohybu;  // identifikator typu pohybu {1 - zrychlený pohyb; 2 - konstantní pohyb; 3 - zpomalený pohyb}

void note()
{
    char nazev_ukolu[] = "ZSP - Domaci ukol c. 2 - \"Kinematika\"\n";
    if (uvod == 1) {
        uvod = 0;
        printf("Kinematika - program pro vypocet rovnomerne zrychleneho pohybu.\n\n");
        printf("jmeno: Krystof Malinda\n");
        printf("login: malinda\n");
        printf("datum plneni ukolu: 26.10.2022\n");
        printf(nazev_ukolu);
    }
}

int kinematika();

int intro(float v0_p, float v1_p, float t0_p, float t_p)
// funkce, ktera nahrazuje naètení hodnot z klávesnice uživatele,
// kontroluje se zde, zda jsou èísla záporná, pokud ano, pak funkce skonèí, 
// pokud ne, pak se zavolá funkce kinematika a výpis, zda probìhl program
// návratová hodnota indikuje úspìch provedení operace nebo typ chyby
{
    v0 = v0_p;
    v1 = v1_p;
    t0 = t0_p;
    t = t_p;

    if (v0 > 0) {
        if (v1 > 0) {
            if (t0 > 0) {
                if (t > 0) {
                    kinematika();
                    return 0;
                }
                else {
                    printf("Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.\n");
                    printf("Uspesne neprovedeno\n");
                    return -4;
                }
            }
            else {
                printf("Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.\n");
                printf("Uspesne neprovedeno\n");
                return -3;
            }
        }
        else {
            printf("Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.\n");
            printf("Uspesne neprovedeno\n");
            return -2;
        }
    }
    else {
        printf("Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.\n");
        printf("Uspesne neprovedeno\n");
        return -1;
    }

    // ------
    // 
    //todo(2): Podminky na zapornost vstupnich hodnot. 
    //      Kontrolovat smysluplnost vstupních hodnot v0, v1, t0, t a to kontrolovat v uvedeném poøadí. Hodnoty nesmí být záporné. 
    //      Funkce intro vrátí hodnotu 0, pokud jsou hodnoty v poøádku. A zavolá funkci kinematika pro realizaci výpoètu.
    //      Vrátí hodnotu -1 : špatnì je v0; -2 : špatnì je v1; -3 : špatnì je t0; -4 : špatnì je t. V pøípadì zjištìné chyby navíc zobrazí informaci
    //      <Vstupni hodnoty nejsou platne.Hodnoty nesmi byt zapornymi cisly.> a na další øádek <Uspesne neprovedeno.>.

    return -5;
}

void kinematika_vypocet()
// funkce dopoèítá na základì vstupních hodnot všechny výstupní hodnoty
{//todo(3):
    // realizace výpoètu výstupních hodnot dle vzorcù a logického vyhodnocení

    a = (v1 - v0) / t0;
    v = v0 + a * t;
    //s = s0 + v0 * t + 0.5 * a * t * t;
    s = s0 + v0 * t + 0.5 * a * pow(t, 2);

    pomer = v1 / v0;

    if (a < 0) {
        typPohybu = 1;
    }
    else if (a > 0) {
        typPohybu = 3;
    }
    else if (a == 0) {
        typPohybu = 2;
    }


}


void kinematika_vypisPohybu() 
// funkce pro vypis informace o pohybu
// zobrazí textový popis pohybu zjištìného typu pohybu: 
//  <Pohyb je rovnomerne zpomaleny>; <Pohyb je konstantni>; <Pohyb je rovnomerne zrychleny> a zajistí jedno odøádkování
{
    if (typPohybu == 1) {
        printf("Pohyb je rovnomerne zpomaleny\n");
    }
    else if (typPohybu == 2) {
        printf("Pohyb je konstatni\n");
    }
    else if (typPohybu == 3) {
        printf("Pohyb je rovnomerne zrychleny\n");
    }

  
}

void kinematika_vypisTabulky()
// funkce vypíše výsledky a přehledovou tabulku dle vzoru uvedeném v zadání
{
    printf("Tabulka vysledku\n");
    printf("\tv0\t\t%.2f/h\n", v0);
    printf("\tv1\t\t%.2f/h\n",v1);
    printf("\tt0\t\t%.2fh\n",t0);
    printf("\tt\t\t%.2fh\n",t);
    printf("\ta\t\t%.2fh\n",a);
    printf("\tv\t\t%.2f/h^2\n",v);
    printf("\ts\t\t%.2f/h\n",s);
    printf("\tpomer v\t\t%.2f%%\n",pomer);
    printf("Vypocet proveden uspesne.\n");
    return ;
}



int kinematika()  // funkce kinematika
{
    note();

    //todo(5):
    // zajistit realizaci výpoètu a zobrazení výsledkù podmínit validitou vstupních dat. 

    kinematika_vypocet();

    kinematika_vypisPohybu();
    kinematika_vypisTabulky();
    return 1;
}


