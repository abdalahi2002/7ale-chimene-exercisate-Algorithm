#include <stdio.h>
#include <stdlib.h>
#include "ListeDouble.h"

Liste New_Double_Liste(void )
{
    return NULL;
}

Bool est_vided(Liste li)
{
    if(li == NULL)
        return true;

    return false;
}

int Longeur_liste(Liste li)
{
    if(est_vided(li))
        return 0;

    return li->longe;
}

int Dliste_first(Liste li){

    if(est_vided(li))
        exit(1);

    return li->end->value;
}

int Dliste_last(Liste li){

    if(est_vided(li))
        exit(1);

    return li->begin->value;
}

Liste insert(Liste li, int x)
{
    ListeN element = malloc(sizeof(DlisteNode));
    if(element == NULL){
        printf("erreurs d''allocation memoire\n");
        exit(1);
    }
    element->value=x;
    element->sui = NULL;
    element->retr = NULL;

    if(est_vided(li)){
        li = malloc(sizeof(*li));
        if(li == NULL){
            printf("erreurs d''allocation memoire\n");
            exit(1);

            li->longe = 0;
            li->begin = element;
            li->end = element;
        }
    } else{



    }
}
