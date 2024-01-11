#include "Test.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
Liste new_pile(void)
{
    return NULL;
}

Bool est_vide(Liste p)
{
    if(p == NULL){
        return true;
    }
    return false;
}

Liste Empiler(Liste l,int x)
{
    Liste temp = malloc(sizeof(Pile));
    if(temp == NULL){
        printf("erreurs d''allocation memoire\n");
        exit(1);
    }


    temp->value = x;
    temp->suiv = l;

    return temp;
}

Liste depiler(Liste p)
{
    Liste temp;
    if(est_vide(p))
        return new_pile();

    temp=p->suiv;
    free(p);

    return temp;
}
Liste depile_tout(Liste p)
{
    Liste temp=p;
    while (!est_vide(temp))
        temp= depiler(temp);

    return new_pile();
}

void sommet(Liste p)
{
    if(!est_vide(p))
        printf("sommet actuel : %d\n",p->value);

}

void Afficher(Liste p)
{
    Liste temp=p;
    if(est_vide(temp)){
        printf("la liste est vide .\n");
        return;
    }
    while (!est_vide(temp)) {
        printf(" %d", temp->value);
        temp = temp->suiv;
    }
    printf("\n");
}

Liste paire_impaire(Liste l){
    Liste temp = l;
    while (temp != NULL){
        Liste newpile = malloc(sizeof(Pile));
        if(temp == NULL){
            printf("erreurs d''allocation memoire\n");
            exit(1);
        }
        newpile->value=temp->value;
        newpile->suiv=NULL;
        if(temp->value %2 == 0){
            // P2 = Empiler(P2,temp->value);
            newpile->suiv = P2;
            P2 = newpile;
        } else{
           // P3 = Empiler(P3,temp->value);
            newpile->suiv = P3;
            P3 = newpile;
        }
        temp = temp->suiv;

    }

    l = depile_tout(l);
    return l;
}


Liste impairedessouspaire(Liste l){

    Liste temp = l;
    //Liste precede = NULL;
    while (temp !=NULL){
        if(temp->value %2 == 0){
            P2 = Empiler(P2,temp->value);

        } else{
            P3 = Empiler(P3,temp->value);
        }
        temp=temp->suiv;
    }
    l = depile_tout(l);

    while (P3 != NULL){
        l = Empiler(l,P3->value);
        P3 = P3->suiv;
    }

    while (l != NULL){
        P2 = Empiler(P2,l->value);
        l = l->suiv;
    }
    l = depile_tout(l);
    return l;
}


void AfficheP_imp(void){
    printf("les nombre paire : \n");
    while (P2 != NULL){
        printf(" %d",P2->value);
        P2=P2->suiv;
    }
    printf("\n");
    printf("les nombre impaire : \n");
    while (P3 != NULL){
        printf(" %d",P3->value);
        P3=P3->suiv;
    }
    printf("\n\n");
}

Liste alternence(Liste l){
    l = paire_impaire(l);
    while (P2 != NULL && P3 != NULL){
        l = Empiler(l,P2->value);
        //P2 = depiler(P2);
        l = Empiler(l,P3->value);
        //P3 = depiler(P3);

        P2 = P2->suiv;
        P3 = P3->suiv;
    }
    while (P2 != NULL){
        l = Empiler(l,P2->value);
        //P2 = depiler(P2);
        P2 =P2->suiv;
    }
    while (P3 != NULL){
        l = Empiler(l,P3->value);
        //P3 = depiler(P3);
        P3 =P3->suiv;
    }

    return l;
}