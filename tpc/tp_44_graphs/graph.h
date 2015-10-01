#include <stdio.h>
#define LG_MAX_LIGNE 100
#define LG_MAX 100

typedef unsigned short ushort;

ushort **create_graph(int nb_nds);
int indice( char *tab_ville );
char *nom( char *tab_ville );