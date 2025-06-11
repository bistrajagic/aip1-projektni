#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int main()
{
    int hrane = 0, potrp = 0, pice = 0;
    float ukupno = 0, cijenaPi[6] = {1.15, 1.15, 1.50, 1.19, 0.85, 0.99}, cijenaPr[6] = {1.05, 1.39, 12.00, 5.00, 0.99, 9.70}, cijenaPo[6] = {4, 0.85, 13, 8, 1.85, 4.50};
    int izbor, kol[6] = {0, 0, 0, 0, 0, 0}, kolh[6] = {0, 0, 0, 0, 0, 0}, kolp[6] = {0, 0, 0, 0, 0, 0}, n = 0, proizvod[6];
    char pica[6][40] = {"CocaCola 0,5l", "Fanta 0,5l", "Ožujsko 0,5l", "Jana Ledeni Čaj 0,5l", "Jana Voda 0,5l", "Jamnica Mineralna 1,5l"};
    char hrana[6][49] = {"Bijeli Kruh", "Argeta Pašteta", "Marinirani pileći ražnjići", "Crveni Marlboro", "Žvake", "Ćevapi"};
    char potp[6][45] = {"Omekšivač 1,5l", "Tekući sapun za ruke 500ml", "Četkice za zube 3 kom", "Vlažene maramice 280 kom", "Paket maramica 15 kom", "Krema za sunčanje 100ml"};
    while (1)
    {
        printf("Dobrodošli u projektni predložak\n");
        printf("1. Započni\n");
        printf("2. Upute\n");
        printf("3. Izlaz\n");
        printf("4. Račun\n");
        scanf("%d", &izbor);
        if (izbor == 1) // For petlja za odabir stvari u dućanu razvrstano na kategorije
        {
            int izbor = 0;
            printf("\033[0;34mDobrodošli u Kozin i Bistrin dućan!\033[0m\n");
            printf("Odaberite kategoriju koji želite od ponuđenih:\n");
            printf("\033[1;34m1. Napitci\033[0m\n");
            printf("\033[1;31m2. Prehrana\033[0m\n");
            printf("\033[1;32m3. Kućne potrepštine\033[0m\n");
            scanf("%d", &izbor);
            if (izbor == 1)
            {
                printf("Evo ponuđenih napitaka.\n"); // Sve cijene ovih proizvoda su preuzete sa Konzumove stranice
                printf("1. CocaCola 0,5 - 1,15€\n");
                printf("2. Fanta 0,5 - 1,15€\n");
                printf("3. Ožujsko 0,5 - 1,50€\n");
                printf("4. Jana Ledeni Čaj 0,5 - 1,19€\n");
                printf("5. Jana Voda 0,5 - 0,85€l\n");
                printf("6. Jamnica Mineralna 1,5 - 0,99€\n");
                int izbor;
                pice++;
                scanf("%d", &izbor);
                if (izbor == 1)
                {
                    izbor--;
                    printf("Cijena CocaCole 0,5 l - 1,15€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kol[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPi[izbor] * kol[izbor];
                    n++;
                }
                else if (izbor == 2)
                {
                    izbor--;
                    printf("Cijena Fante 0,5 l - 1,15€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kol[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPi[izbor] * kol[izbor];
                    n++;
                }
                else if (izbor == 3)
                {
                    izbor--;
                    printf("Cijena Ožujskog 0,5 l - 1,50€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kol[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPi[izbor] * kol[izbor];
                    n++;
                }
                else if (izbor == 4)
                {
                    izbor--;
                    printf("Cijena Jana Ledeni Čaj 0,5 l - 1,19€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kol[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPi[izbor] * kol[izbor];
                    n++;
                }
                else if (izbor == 5)
                {
                    izbor--;
                    printf("Cijena Vode Jana 0,5 l - 0,85€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kol[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPi[izbor] * kol[izbor];
                    n++;
                }
                else if (izbor == 6)
                {
                    izbor--;
                    printf("Cijena Mineralne vode 1,5 l - 0,99€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kol[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPi[izbor] * kol[izbor];
                    n++;
                }
            }
            else if (izbor == 2)
            {
                printf("Odabrali ste dio za prehranu\n");
                printf("1. Bijeli Kruh - 1,05€\n");
                printf("2. Argeta Pašteta - 1,39€\n");
                printf("3. Marinirani pileći ražnjići 1kg - 12,00€\n");
                printf("4. Crveni Marlboro - 5€\n");
                printf("5. Žvake - 0,99€\n");
                printf("6. Ćevapi 1kg - 9,70€\n");
                int izbor;
                scanf("%d", &izbor);
                hrane++;
                if (izbor == 1)
                {
                    izbor--;
                    printf("Cijena Bijelog Kruha - 1,05€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolh[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPr[izbor] * kolh[izbor];
                    n++;
                }
                else if (izbor == 2)
                {
                    izbor--;
                    printf("Cijena Paštete Argeta - 1,39€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolh[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPr[izbor] * kolh[izbor];
                    n++;
                }
                else if (izbor == 3)
                {
                    izbor--;
                    printf("Cijena Mariniranih pilećih ražnjića 1kg - 12,00€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolh[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPr[izbor] * kolh[izbor];
                    n++;
                }
                else if (izbor == 4)
                {
                    izbor--;
                    printf("Cijena Crvenog Marlbora - 5€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolh[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPr[izbor] * kolh[izbor];
                    n++;
                }
                else if (izbor == 5)
                {
                    izbor--;
                    printf("Cijena žvaka - 0,99€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolh[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPr[izbor] * kolh[izbor];
                    n++;
                }
                else if (izbor == 6)
                {
                    izbor--;
                    printf("Cijena ćevapa 1kg - 9,70€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolh[izbor]);
                    proizvod[izbor]++;
                    ukupno = ukupno + cijenaPr[izbor] * kolh[izbor];
                    n++;
                }
            }
            else if (izbor == 3)
            {
                printf("Odabrali ste dio kućnih potrepština\n");
                printf("1. Omekšivač 1,5l - 4€\n");
                printf("2. Tekući sapun za ruke 500ml - 0,85€\n");
                printf("3. Četkice za zube 3 kom - 13€\n");
                printf("4. Vlažene maramice 280 kom - 8€\n");
                printf("5. Paket maramica 15 kom - 1,85€\n");
                printf("6. Krema za sunčanje 100ml - 4,50€\n");
                int izboR;
                scanf("%d", &izboR);
                potrp++;
                if (izboR == 1)
                {
                    izboR--;
                    printf("Cijena omekšivača 1,5l - 4€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolp[izboR]);
                    proizvod[izboR]++;
                    ukupno = ukupno + cijenaPo[izboR] * kolp[izboR];
                    n++;
                }
                else if (izboR == 2)
                {
                    izboR--;
                    printf("Cijena tekućeg sapuna za ruke 500ml - 0,85€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolp[izboR]);
                    proizvod[izboR]++;
                    ukupno = ukupno + cijenaPo[izboR] * kolp[izboR];
                    n++;
                }
                else if (izboR == 3)
                {
                    izboR--;
                    printf("Cijena četkica za zube 3 kom - 13€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolp[izboR]);
                    proizvod[izboR]++;
                    ukupno = ukupno + cijenaPo[izboR] * kolp[izboR];
                    n++;
                }
                else if (izboR == 4)
                {
                    izboR--;
                    printf("Cijena vlažnih maramica 280 kom - 8€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolp[izboR]);
                    proizvod[izboR]++;
                    ukupno = ukupno + cijenaPo[izboR] * kolp[izboR];
                    n++;
                }
                else if (izboR == 5)
                {
                    izboR--;
                    printf("Cijena paketa maramica 15 kom - 1,85€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolp[izboR]);
                    proizvod[izboR]++;
                    ukupno = ukupno + cijenaPo[izboR] * kolp[izboR];
                    n++;
                }
                else if (izboR == 6)
                {
                    izboR--;
                    printf("Cijena kreme za sunčanje 100ml - 4,50€\n");
                    printf("Unesite količinu proizvoda: ");
                    scanf("%d", &kolp[izboR]);
                    proizvod[izboR]++;
                    ukupno = ukupno + cijenaPo[izboR] * kolp[izboR];
                    n++;
                }
            }
        }
        else if (izbor == 2)
        {
            printf("Upute za korištenje:\n");
            printf("1. Odaberite ponuđeni proizvod.\n");
            printf("2. Odaberite količinu.\n");
            printf("3. Platite proizvod!!!!");
        }
        else if (izbor == 3)
        {
            printf("Izlaz iz programa\n");
            break;
        }
        else if (izbor == 4)
        {
            printf("\n=========================================================\n"); // Izgled računa smo skinuli sa ChatGpta
            printf("                         RAČUN\n");
            printf("=========================================================\n");
            if (pice > 0)
            {
                for (int j = 0; j < 6; j++)
                    if (kol[j] > 0)
                    {
                        printf("%s \t %dx %.2f\n", pica[j], kol[j], cijenaPi[j]);
                        printf("\n---------------------------------------------------------\n");
                    }
            }
            if (hrane > 0)
            {
                for (int j = 0; j < 6; j++)
                    if (kolh[j] > 0)
                    {
                        printf("%s \t %dx %.2f\n", hrana[j], kolh[j], cijenaPr[j]);
                        printf("\n---------------------------------------------------------\n");
                    }
            }
            if (potrp > 0)
            {
                for (int j = 0; j < 6; j++)
                    if (kolp[j] > 0)
                    {
                        printf("%s \t %dx %.2f\n", potp[j], kolp[j], cijenaPo[j]);
                        printf("\n---------------------------------------------------------\n");
                    }
            }
            printf("Ukupno za platiti:      %.2f EUR\n", ukupno);
            printf("=========================================================\n");
            printf("Hvala na kupnji!\n");
        }
        else
        {
            printf("Nepoznat izbor, pokušajte ponovo.\n");
        }
        printf("\n\n");
    }
    return 0;
}