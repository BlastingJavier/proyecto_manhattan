
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "point.h"

int main (){
  Point *p1;
  Point *p2;
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
  fprintf(stdout,point_getSymbol(p1));
  fprintf(stdout,point_getCoordinateX(p2));
  p2 = point_copy(p1);
  fprintf (stdout,point_print(stdout,p1));
  fprintf (stdout,point_print(stdout,p2));

  if (point_equals(p1,p2)==FALSE){
    fprintf(stdout,"Son iguales : NO");
  }
  else {
    fprintf(stdout,"Son iguales : SI");
  }

  point_destroy(p1);
  point_destroy(p2);

  return 0;
}
