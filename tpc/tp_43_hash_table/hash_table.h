#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LG_MAX_LIGNE 90
#define HASHSIZE 701

struct entree{
	char *key;
	char *value;
struct entrer * next ;
};

struct entree *creation(char *filename,struct entree **chaine);
void add(struct entree **htab,char *cle,char *val);
struct entree * search(struct entree **htab, char *cle);
int exists(struct entree **htab, char *cle);
int hash (const char *cle);