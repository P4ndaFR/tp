#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define LG_MAX_LIGNE 90
#define MAX(a,b) ((a)>(b)?(a):(b))

typedef struct noeud{
char *mot_fr;
char *mot_en;
struct noeud* gauche;
struct noeud* droite;
} Noeud;

typedef struct file{
Noeud *node;
struct file *suivant;
} File;

Noeud *inserer(char *fr,char *en,Noeud *racine);

char *traduction(char *fr, Noeud *racine);

void affichage(Noeud* node);

void parcoursGRD(Noeud* racine);

Noeud *creation(char *filename);

void liberte(Noeud* racine);

int hauteur(Noeud* racine);

void push(File **p_file,Noeud *node);

Noeud *pull(File **p_file);

void parcoursLargeur(Noeud *racine);

void parcoursGRD_action(Noeud* racine,void(*f)(Noeud *));

Noeud* arbre_vers_vigne(Noeud* racine);

Noeud* vigne_vers_arbre(Noeud *racine);

Noeud* compress(Noeud* racine, int count);