# ZSP_Ukol-2

## Neoficialní zadání
Je to o čtení zadání, **jenom**\
Samotný úkol je na 10 minut ale díky tomu, že jsem byl líný číst jsem na tom dělal tak 6 hodin.

## Officiální zadání

Program pro výpočet pohybu (kinematika hmotného bodu). Vstupem je počáteční rychlost v0; doba
t0, ve které je měřena rychlost v1; rychlost v1 a čas t, pro který se počítá ujetá dráha a vyhodnocuje
aktuální rychlost. Předpokládá se stále stejné zrychlení po celou dobu pohybu.
V přiloženém projektu doplňte definice funkcí umístěných v souboru _task1.cpp_ podle zadání
uvedených v komentářích a níže. V projektu je připraven test, který po spuštění otestujte funkčnost
realizace.
Odevzdejte pouze(!) soubor **_task1.cpp_** projektu.

Funkce připravené v souboru _task1.cpp_ jsou volány. Kromě funkce _kinematika_vypocet_ , u této funkce
je nutné zajistit správné volání. Pokud je v komentáři uveden zobrazovaný text ve špičatých závorkách,
pak se zobrazuje bez těchto závorek.
Nastudujte si projekt a především soubor task1.cpp. Kde a jak jsou deklarovány globální proměnné?
Jak je deklarována konstanta? Proč je pro funkci kinematika uvedena dopředná deklarace?

1. Doplňte definici funkci _note_. Tato funkce zobrazuje informace o autorovi a o realizaci programu.
    Doplňte realizace jednotlivých todo a zajistěte zobrazení názvu úkolu. Do proměnné nazev_ukolu
    zapište text ve správném formátu a tak, aby se zajistili o dvojnásobné odřádkování v rámci výpisu
    názvu úkolu. Název úkolu bude mít formát _nazev ukolu: ZSP - Domaci ukol c. 2 - "Kinematika"_
2. Funkce _intro_ simuluje zadání vstupních hodnot. Vstupní hodnoty jsou do funkce předány
    parametry. Funkce vrací návratovou hodnotou příznak udávající výsledek počáteční inicializace^
    Funkce zajišťuje zapsání vstupních hodnot do příslušných globálních proměnných. Funkce dále
    provádí otestování vstupních hodnot. Volá funkci _kinematika_ , pokud jsou všechny hodnoty
    validní. Tato funkce zajišťuje realizaci výpočtu a zobrazení výsledků.
    Všechny hodnoty musí být nezáporným číslem. Funkce jako výsledek poskytuje hodnotu:
    0, pokud jsou vstupní hodnoty v pořádku (jsou správné)
    - -1, pokud je špatně počáteční rychlost v
    - -2, pokud je špatně koncová rychlost v1,
    - -3 , pokud je špatně počáteční čas měření zrychlování t
    - -4, pokud je špatně doba pohybu t
3. Funkce _kinematika_vypocet_ dopočítává výsledky pohybu a ukládá (zapisuje) spočtené hodnoty
    do příslušných výstupních (globálních) proměnných. Jako vstup použije hodnoty ze vstupních
    (globálních) proměnných.
    Funkce dopočítá zrychlení _a_ podle vztahu a = (v1-v0)/t0, dále pak v zadaném čase _t_ aktuální
    rychlost _v_ podle vztahu v = v0 + a * t a dráhu _s_ podle vztahu s = s0 + v0*t + 0.5*a*t^2. Poměr
    rychlostí v1 a v0 se uloží do proměnné _pomer_.
    Funkce dále rozhodne o typu pohybu a do proměnné _typPohybu_ uloží číslo identifikující typ
    pohybu. Pro zpomalený pohyb (a < 0) nastaví hodnotu 1, pro zrychlený pohyb (a > 0) nastaví
    hodnotu 3 a pro konstantní pohyb nastaví hodnotu (a = 0) nastaví hodnotu 2.
4. Funkce _kinematika_vypisPohybu_ zobrazí informaci o typu pohybu a odřádkuje. Zobrazovaným
    textem bude _Pohyb je rovnomerne zpomaleny_ , _Pohyb je konstantni_ , _Pohyb je rovnomerne_
    _zrychleny_.
5. Funkce _kinematika_vypisTabulky_ zobrazí informace o pohybu dle uvedeného vzoru.

![image](https://user-images.githubusercontent.com/56117532/197610128-afe196c5-54a5-40da-b3d4-040b23acd5e1.png)

Pozn: Dodržujte předepsaný formát zobrazení výsledku. Hodnoty v ukázce nemusí být relevantní.


