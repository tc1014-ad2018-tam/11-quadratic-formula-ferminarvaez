//Fermín Narváez A01411229
//04/Oct/2018
//La biblioteca normal
#include <stdio.h>
#include <math.h>
#include <ctype.h>

//Declaración de variables
int main(void) {
    double x1;
    double x2;
    double radical;
    int a;
    int b;
    int c;

//Al usuario se le piden los valores para la operación
    printf("Valor de a: ");
    scanf("%i", &a);
    printf("Valor de b: ");
    scanf("%i", &b);
    printf("Valor de c: ");
    scanf("%i", &c);

//Profe no encontré la función de isdigit para double :(, no sé si exista pero pues entonces pues ya lo deje así
//isdigit es una función que toma un solo valor en la forma de un entero y devuelve el valor del tipo entero
    if(isdigit(a)==0 || isdigit(b)==0 || isdigit(c)==0){

//Operación donde digo que 0 no se puede y que es númerico todo
        if(a==0){
            printf("a no puede ser 0 porque no se puede dividir");
        } else {

            radical=pow(b,2)-4*a*c;
            printf("Radical = %lf\n", radical);
//Aquí digo que no es posible radicales cuadrados negativos, y se lo informo al usuario
            if (radical<0){
                printf("No se le puede sacar raíz cuadrada a números negativos");
            } else {
                x1=-b+sqrt(radical)/2*a;
                x2=-b-sqrt(radical)/2*a;

                printf("Valor de x1: %lf\n", x1);
                printf("Valor de x2: %lf\n", x2);
            }
        }
    } else {
        // Termino de declarar lo de lo numérico
        printf("\nAlgún valor no es numérico y no se puede");
    }

    return 0;
}