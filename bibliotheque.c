#include "bibliotheque.h"
#include <stdio.h>
#include <math.h>

// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value)
{
    unsigned int result = 1;
    while (value > 1)
    {
        result *= value;
        value--;
    }
    return result;
}

// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow)
{
    if (pow == 0)
        return 1;
    if (pow == 1)
        return value;
    int accumulator = 1;
    while (pow > 0)
    {
        accumulator *= value;
        pow--;
    }

    return accumulator;
}

// Définition d'une fonction de permutation de deux nombres
void permutation(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}


// Définition d'une fonction de resolution d'une équation du second dégré
int resolution_equation(float a, float b, float c, float *x1, float *x2){
    float delta;

    if (a==0)
        return -1; 

    delta = (b*b)-(4*a*c);
    if (delta<0){
        return 0; 
    }else if (delta == 0){
        *x1 = -b/(2*a);
        return 1; 
    }else{
        *x1 = (-b-sqrt(delta))/(2*a);
        *x2 = (-b+sqrt(delta))/(2*a);
        return 2; 
    }
}

//Definition d'une fonction de detection de nombre premier
int premier(int valeur){
    if (valeur<2)
        return 0;
    for (int i=2; i<=(int)sqrt(valeur); i++){
        if (valeur%i==0)
            return 0;
    }
    return 1;
}
