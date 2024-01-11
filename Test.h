#ifndef _STACK_H_
#define _STACK_H_
#include <stdlib.h>
enum bool{
    false,
    true
};
typedef enum bool Bool;

struct pile{
    int value;
    struct pile *suiv;
};
typedef struct pile Pile;
typedef Pile *Liste;
static Liste P2 = NULL;
static Liste P3 = NULL;

Liste new_pile(void);
Bool est_vide(Liste p);
Liste Empiler(Liste l,int x);
void sommet(Liste p);
Liste depiler(Liste p);
void Afficher(Liste p);
Liste depile_tout(Liste p);
Liste paire_impaire(Liste l);
void AfficheP_imp(void);
Liste impairedessouspaire(Liste l);
Liste alternence( Liste l);
#endif