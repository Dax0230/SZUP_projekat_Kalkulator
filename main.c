#include <stdio.h>
#include <stdlib.h>

int main() { 
double br1, br2, rezultat;

    char operator;
    printf("Unesite operaciju (+, -, *, /): ");
    scanf(" %c", &operator);
    
    printf("Unesite dva broja: ");
    scanf("%lf %lf", &br1, &br2);

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
        }
return 0;
}
