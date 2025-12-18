#include <stdio.h>
#include <stdlib.h>

#include "bibliotheque.h"

int main(void)
{
    int result = power(2, 3);
    printf("2³ == %d\n", result);


    result = fact(6);
    printf("6! == %d\n", result);


    int first = 10;
    int second = 20;
    printf("first = %d # second = %d \n", first, second);
    permutation(&first, &second);
    printf("first = %d # second = %d", first, second);

    
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



    return EXIT_SUCCESS;
}