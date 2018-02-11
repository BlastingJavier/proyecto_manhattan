#include <stdio.h>
#include <stdlib.h>
#include "map.h"
#include "point.h"

int main (){
  Map * pl;
  Map *nfilas;
  Map *nColumns;
  pl = map_ini(5,7);
  map_read ("mapa1.txt",pl);
  nfilas = map_getNrows(pl);
  nColumns = map_getNcols(pl);
  map_print(stdout,nRows);
  map_print(stdout,nColumns);
  map_print(stdout,pl);
  return 0;
}
