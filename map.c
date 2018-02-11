#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "point.h"
#define MAX_POINTS 4096

struct _Map {
  int nColumns;
  int nRows;
  int *pInput;
  int *pOutput;
  int *Points[MAX_POINTS];
}

Map * map_ini(int nC, int nF){
  Map *pm;
  pm= (Map*) malloc (sizeof(Map));
  if (pm == NULL){
    return NULL;
  }
  else {
    pm->nColumns = nC;
    pm->nRows = nF;
  }
  return pm;
}

void map_free(Map * pm){
  if (pm == NULL){
    return;
  }
  else {
    free(pm);
  }
}

int map_getNrows(const Map * pm){
  if (pm == NULL){
    return (-1);
  }
  else {
    return pm->nRows;
  }
}

int map_getNcols(const Map * pm){
  if (pm == NULL){
    return (-1);
  }
  else {
    return pm->nColumns
  }
}

Point * map_getInput(const Map *pm){
  Point *ppaux;
  input = 'i';
  if (pm == NULL){
    return NULL;
  }
  else {
    if (point_getSymbol(ppaux)=='i'){
      return
    }
  }
}

Point * map_getOutput(const Map *pm){
  Point *ppaux;
  output = 'o';
  if (pm == NULL){
    return NULL;
  }
  else {
    if (point_getSymbol(ppaux)=='o'){

    }
  }
}

Point * map_getNeighborPoint(const Map *pm, const Point *pp, const Move mov){
  int x;
  int y;
  Point *ppaux;
  if (pm == NULL){
    return NULL;
  }
  else {
    x = point_getCoordinateX (Point *pp);
    y = point_getCoordinateY (Point *pp);
    if (mov = RIGHT){
      x = x + 1
    }
    else if (mov = UP){
      y = y + 1;
    }
    else if (mov = LEFT){
      x = x - 1;
    }
    else if (mov = DOWN){
      y = x - 1;
    }
    else /*mov = EQUALS*/{
      x = x;
      y = y;
    }
    ppaux->x = x;
    ppaux->y = y;

    return ppaux;
  }
}
Status map_setSize(Map *pm, int nRows, int nColumns){

  if (pm == NULL){
    return ERROR;
  }
  else {
    pm->nRows = nRows;
    pm->nColumns = nColumns;
    pm->Points[MAX_POINTS] = nColumns * nRows;
  }
  return pm;
}

Status map_setPoint(Map * pm, const Point* pp){
  Point * ppaux;
  if (pm == NULL){
    return ERROR;
  }
  else {
    pp = (Point*) malloc (sizeof(Point));
    if (pp==NULL){
      return ERROR;
    }
    else {
      
    }
  }
}
int map_print(FILE *pf, const Map * pm){
  if (pf == NULL){
    return (-1);
  }
  if (pm == NULL){
    return (-1);
  }
  fprintf(pf,"")

}
Status map_read (FILE *pf, Map *pl) {
  char buff[MAX];
  int i, j, nrows, ncols, indice;
  Point *temp;
  Status st = ERROR;

  if (pl==NULL || pf==NULL){
    return NULL;
  }
  /*creamos punto que se utiliza como buffer*/
  temp = point_ini(0, 0, ERRORCHAR);
  if (temp==NULL){
    return NULL;
  }
  /* asignamos dimensión al mapa */
  fgets(buff, MAX, pf);
  sscanf(buff, "%d %d", &nrows, &ncols);
  st = map_setSize (pl, nrows, ncols);
  if (st == ERROR){
    return ERROR;
  }
   /* leemos el fichero linea a linea */
  for(i=0; i < nrows;i++) {
     fgets(buff, MAX, pf);
    for (j=0; j < ncols; j++) {
     /* ajustamos los atributos del punto leído (falta añadir control de errores) */
       point_setCoordinateX(temp, j);
       point_setCoordinateY(temp, i);
       point_setSymbol(temp, buff[j]);
       /* insertamos el punto en el mapa (falta añadir control de errores) */
       map_setPoint(pl, temp);
    }
  }
   /* libera recursos */
   point_destroy(temp);
   /* no cerramos el fichero ya que lo han abierto fuera */
 return OK;
}
