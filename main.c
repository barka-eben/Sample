#include <stdio.h>
#include <stdlib.h>

#include "bibliotheque.h"

int main(void){
    
    int result = power(2, 3);
    printf("2³ == %d\n", result);


    result = fact(6);
    printf("6! == %d\n", result);


    int a = 10;
    int b = 20;
    printf("premier = %d et second = %d \n", a, b);
    permutation(&a, &b);
    printf("premier = %d et second = %d \n", a, b);
    
    float x1, x2;
    int nb;
    nb = resolution_equation(1, -3, 2, &x1, &x2);
    if (nb==-1)
        printf("Ce n'est pas une equation du second degre\n");
    else if (nb== 0)
        printf("Pas de solution reelle\n");
    else if (nb==1)
        printf("Une solution : x=%f\n", x1);
    else
        printf("Deux solutions : x1=%f et x2=%f\n", x1, x2);

    
    int valeur=4, nbre;
    if (valeur<0)
        printf("Le nombre que vous avez entré est négatif");
    else{
        nbre=premier(valeur);
        if (nbre==0)
            printf("Le nombre %d n'est pas premier\n",valeur);
        else
            printf("Le nombre %d est premier\n",valeur);
    }


    Point A, B;
    printf("Entrez les coordonnees du point A (x y) : ");
    scanf("%f %f", &A.x, &A.y);
    printf("Entrez les coordonnees du point B (x y) : ");
    scanf("%f %f", &B.x, &B.y);
    float d = distance(A, B);
    printf("La distance entre A et B est : %.2f\n", d);

    return EXIT_SUCCESS;
}