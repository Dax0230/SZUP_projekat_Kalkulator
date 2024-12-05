#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() { 
double br1, br2, rezultat;

    char operator;
    printf("Unesite operaciju (+, -, *, /, ^, v): ");
    scanf("%c", &operator);
    
   if (operator == '^' || operator == 'v') {
        printf("Unesite broj: ");
        scanf("%lf", &br1);
    } else {
        printf("Unesite dva broja: ");
        scanf("%lf %lf", &br1, &br2);
    }

    
    switch(operator)
        {
            case '+':
            rezultat = br1 + br2;
            printf("Rezultat: %.2lf\n", rezultat);
            break;
            case '-':
            rezultat = br1 - br2;
            printf("Rezultat: %.2lf\n", rezultat);
            break;
            case '*':
            rezultat = br1 * br2;
            printf("Rezultat: %.2lf\n", rezultat);
            break;
            case '/':
            if (br2 != 0) {
                rezultat = br1 / br2;
                printf("Rezultat: %.2lf\n", rezultat);
            } else {
                printf("Greska: Deljenje nulom nije dozvoljeno.\n");
            }
            break;
             case '^':
            rezultat = pow(br1, 2); 
            printf("Kvadrat broja %.2lf je: %.2lf\n", br1, rezultat);
            break;
            case 'v':
            if (br1 >= 0) {
                rezultat = sqrt(br1); 
                printf("Koren broja %.2lf je: %.2lf\n", br1, rezultat);
            } else {
                printf("Ne mozete korenovati negativan broj.\n");
            }
            break;
            default:
            printf("Nevalidan operator.\n");
            break;
        }
return 0;
}
