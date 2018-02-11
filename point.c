#include<stdio.h>
#include<string.h>
#include "point.h"

struct _Point {
char symbol;
int x;
int y;
}

Point * point_ini (int x, int y,char s){
  Point *pp;
  pp = (Point*)malloc(sizeof(Point));
  if (pp == NULL){
    return NULL;
  }
  else {
    pp->x = x;
    pp->y = y;
    pp->s = s;

  }
  return pp;
}
void point_destroy (Point *pp){
  if (pp == NULL){
    return;
  }
  else {
    free(pp);
    return;
  }
}
status point_setCoordinateX (Point *pp ,const int x){
  if (pp == NULL){
    return ERROR;
  }
  else {
    pp->x = x;
    return OK;
  }
}
status point_setCoordinateY (Point *pp ,const int y){
  if (pp == NULL){
    return ERROR;
  }
  else {
    pp->y = y;
    return OK;
  }
}

status point_setSymbol (Point *pp,const char symbol){
  if (pp == NULL){
    return ERROR;
  }
  else {
    pp->symbol = symbol;
    return OK;
  }
}
int point_getCoordinateX (Point *pp){
  if (pp == NULL){
    return 0;
  }
  else {
    return pp->x;
  }
}
int point_getCoordinateY (Point *pp){
  if (pp == NULL){
    return 0;
  }
  else {
    return pp->y;
  }

}
char point_getSymbol (Point *pp){
  if (pp == NULL){
    return 0;
  }
  else {
    return pp->symbol;
  }
}
Point * point_copy (const Point *pp1){
  Point *copia;
  int auxx , auxy;
  char auxsymbol;
  copia = (Point *)malloc(sizeof(Point));
  if (copia == NULL){
    return NULL;
  }
  if (pp1==NULL){
    return NULL;
  }
  else {
    auxx = point_getCoordinateX;
    auxy = point_getCoordinateY;
    auxsymbol = point_get_symbol;
  }
  copia = point_ini(auxx,auxy,auxsymbol);

}
int point_print (FILE *pf ,const Point *pp){
  if (pp == NULL){
    return 0;
  }
  if (pf == NULL){
    return 0;
  }
  else {
    return fprintf(pf,"[(%d,%d):'%c']",pp->x,pp->y,pp->symbol);
  }
}
Bool point_equals(const Point * pp1 , const Point * pp2){
  if (pp1 == NULL){
    return FALSE;
  }
  if (pp2 == NULL){
    return FALSE;
  }
  else {
    if ((pp1->x == pp2->x)&&(pp1->y ==pp2->y)&&(pp1->symbol == pp2->symbol)){
      return TRUE;
    }
    else {
      return FALSE;
    }

  }
}
