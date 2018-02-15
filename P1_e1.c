
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "point.h"

int main (){
  Point *p1;
  Point *p2;
  char symbolaux;
  int coordenadaaux;
  p1 = point_ini (1,2,BARRIER);
  p2 = point_ini (3,4,OUTPUT);

  point_print (stdout,p1);
  point_print (stdout,p2);
  fprintf (stdout,"\n");

  if (point_equals(p1,p2)==FALSE){
    fprintf(stdout,"Son iguales : NO");
  }
  else {
    fprintf(stdout,"Son iguales : SI");
  }
  fprintf (stdout,"\n");

  symbolaux = point_getSymbol(p1);
  coordenadaaux = point_getCoordinateX(p2);

  fprintf(stdout,"El simbolo del primer punto es : %c",symbolaux);
  fprintf (stdout,"\n");
  fprintf(stdout,"La coordenada del segundo punto es : %d",coordenadaaux);
  fprintf (stdout,"\n");

  p2 = point_copy(p1);
  point_print(stdout,p1);
  point_print(stdout,p2);
  fprintf (stdout,"\n");

  if (point_equals(p1,p2)==FALSE){
    fprintf(stdout,"Son iguales : NO");
  }
  else {
    fprintf(stdout,"Son iguales : SI");
  }
  fprintf (stdout,"\n");
  
  point_destroy(p1);
  point_destroy(p2);

  return 0;
}
