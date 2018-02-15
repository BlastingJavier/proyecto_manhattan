#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "types.h"
/*
Constantes públicas que definen los tipos de puntos
que se permiten en un mapa
*/
#define ERRORCHAR 'E'
#define INPUT 'i'
#define VISITED 'v'
#define OUTPUT 'o'
#define BARRIER '+'
#define SPACE ' '



typedef struct _Point Point;

/* Inicializa un punto, reservando memoria y devolviendo el punto inicializado si lo ha hecho correctamente o NULL
si no */
Point * point_ini(int x, int y, char symbol);
/* Libera la memoria dinámica reservada para un punto*/
void point_destroy(Point *PP );
/* Devuelve la coordenada X de un punto dado, o
-
1 si se produce algún error */
int point_getCoordinateX(const Point *pp );
/* Devuelve la
coordenada Y de un punto dado, o
-
1 si se produce algún error */
int point_getCoordinateY(const Point * pp);
/* Devuelve el símbolo de un punto dado, o
ERRORCHAR
si se produce algún error */
char point_getSymbol(const Point *pp );
/* Funciones derivadas que
in
dican
el tipo de punto que tenemos */
Bool point_isInput(Point* );
Bool point_isOutput(Point* );
Bool point_isBarrier(Point* );
Bool point_isSpace(Point* );
/* Modifica la coordenda
X de un punto dado, devuelve
ERROR
si se produce algún error */
Status point_setCoordinateX(Point *pp, const int x);
/* Modifica la coordenda Y de un punto dado, devuelve
ERROR
si se produce algún error */
Status point_setCoordinateY(Point *pp, const int y);
/* Modifica el símbolo de un punto dado, devuelve
ERROR
si se produce algún error */
Status point_setSymbol(Point *pp, const char symbol);
/* Devuelve TRUE si los dos puntos pasados como argumentos son iguales (revisando todos sus campos).
Devuelve FALSE en ot
ro caso.
*/
Bool point_equals(const Point *pp1 , const Point *pp2);
/* Copia los datos de un punto a otro devolviendo el punto copiado
(incluyendo
la reserva de
la memoria necesaria)
si todo ha ido bien, o NULL en otro caso */
Point * point_copy(const Point *pp1);
/* Imprime en un fichero dado los datos de un punto con el siguiente formato:
[(x,y): symbol]. Por ejemplo, un punto
con símbolo “*”, con coordenada X 3 e Y 7 se representará como [(3, 7): *]. Además
,
devolverá el número de
caracteres que se h
an escrito con éxito (
mirar documentación de fprintf)
*/
int point_print(FILE *pf, const Point *pp);
