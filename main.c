#include <stdio.h>
#include <stdlib.h>

#include "bibliotheque.h"

int main(void){

    int choix;

    do {
        // Affichage du menu
        printf("\n===== MENU =====\n");
        printf("1. Calculer une puissance\n");
        printf("2. Calculer une factorielle\n");
        printf("3. Permuter deux nombres\n");
        printf("4. Resoudre une equation du second degre\n");
        printf("5. Tester un nombre premier\n");
        printf("6. Calculer la distance entre deux points\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                int base, exposant;
                printf("Entrez la base et l'exposant : ");
                scanf("%d %d", &base, &exposant);
                printf("%d^%d = %d\n", base, exposant, power(base, exposant));
                break;
            }
            case 2: {
                int n;
                printf("Entrez un entier : ");
                scanf("%d", &n);
                printf("%d! = %u\n", n, fact(n));
                break;
            }
            case 3: {
                int a, b;
                printf("Entrez a : ");
                scanf("%d", &a);
                printf("Entrez b : ");
                scanf("%d",&b);
                permutation(&a, &b);
                printf("Apres permutation : a = %d, b = %d\n", a, b);
                break;
            }
            case 4: {
                float a, b, c, x1, x2;
                int nb;
                printf("Entrez les coefficients a, b, c : ");
                scanf("%f %f %f", &a, &b, &c);
                nb = resolution_equation(a, b, c, &x1, &x2);
                if (nb == -1)
                    printf("Ce n'est pas une equation du second degre\n");
                else if (nb == 0)
                    printf("Pas de solution reelle\n");
                else if (nb == 1)
                    printf("Une solution : x = %f\n", x1);
                else
                    printf("Deux solutions : x1 = %f et x2 = %f\n", x1, x2);
                break;
            }
            case 5: {
                int n;
                printf("Entrez un nombre : ");
                scanf("%d", &n);
                if (n < 0)
                    printf("Le nombre est negatif\n");
                else if (premier(n))
                    printf("%d est premier\n", n);
                else
                    printf("%d n'est pas premier\n", n);
                break;
            }
            case 6: {
                Point A, B;
                printf("Entrez les coordonnees du point A (x y) : ");
                scanf("%f %f", &A.x, &A.y);
                printf("Entrez les coordonnees du point B (x y) : ");
                scanf("%f %f", &B.x, &B.y);
                printf("La distance entre A et B est : %.2f\n", distance(A, B));
                break;
            }
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide !\n");
        }

    } while (choix != 0);

    return EXIT_SUCCESS;
}