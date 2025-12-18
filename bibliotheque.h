#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact(unsigned int value);

// Définition d'une fonction d'élévation à une puissance données.
int power(int value, unsigned int pow);

// Définition d'une fonction de permutation de deux nombres.
void permutation(int *a, int *b);

// Définition d'une fonction de resolution d'une équation du second dégré.
int resolution_equation(float a, float b, float c, float *x1, float *x2);

//Definition d'une fonction de detection de nombre premier
int premier(int valeur);

//Definition d'une structure de point et d'une fonction de calcul de distance entre deux points
typedef struct{
    float x;
    float y;
} Point;
float distance(Point p1, Point p2);

#endif