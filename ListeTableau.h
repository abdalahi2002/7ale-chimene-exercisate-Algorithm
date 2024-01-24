#ifndef __testh___
#define __testh___
#define MAX_SIZE 50

typedef struct {
    char tab[MAX_SIZE];
    int sommet;
}test,*Liste;

Liste initializer(void);
Liste depilertab(Liste p);
Liste empilertab(Liste p,char value);
void Affichertab(Liste p);
void valide(char *exp);

#endif