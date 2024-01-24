#include "Test.h"
#include <stdlib.h>
#include <stdio.h>


Liste P2 = NULL;
Liste P3 = NULL;
Liste new_pile(void)
{
    return NULL;
}

Bool est_vide(Liste p)
{
    if(p == NULL){
        return 1  ;
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

    return temp;
}

int sommet(Liste p)
{
    if(est_vide(p))
        return 0;
    return p->value;

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
// Q1 Serie d'exercice
Liste paire_impaire(Liste l){
    while (l != NULL){


        if(l->value %2 == 0){
            P2 = Empiler(P2,l->value);
        }
        else{
           P3 = Empiler(P3,l->value);
        }
        l = depiler(l);
//        l = l->suiv;
    }
    return l;
}

// Q2 Serie d'exercice
Liste impairedessouspaire(Liste l){

    l = paire_impaire(l);

    while (P3 != NULL){
        l = Empiler(l,P3->value);
        P3 = depiler(P3);
    }

    while (l != NULL){
        P2 = Empiler(P2,l->value);
        l = depiler(l);
    }
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

// Q3 Serie d'exercice
Liste alternence(Liste l){
    paire_impaire(l);
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

// Q4 Restaurer les pile
void restauration(Liste P1){
    while (P1 != NULL){
        P2 = Empiler(P2,P1->value);
        if(P1->suiv == NULL){
            printf(" %d",P1->value);
            printf("\n");
        }

        P1 = P1->suiv;
    }
    while (P2 != NULL){
        //P1 = depiler(P2);
        P1 = Empiler(P1,P2->value);
        P2 = P2->suiv;
    }
}

void supprimerlalternence(Liste l){
    P2 = Empiler(P2,1);
    while (l != NULL){
        while (P2 != NULL){
            if(P2->value == l->value){
                break;
            }
            P2 = Empiler(P2,l->value);
            P2 = P2->suiv;
        }
        l = l->suiv;
    }

    while (P2 != NULL){
        printf("%d",P2->value);
        P2 = P2->suiv;
    }
    printf("\n");
}

Liste elementmilieux(Liste l){
    Liste temp = l;
    Liste ml = NULL;
    int count = 0;
    int milieux;
    while (temp != NULL){
        count++;
        temp = temp->suiv;
    }

    printf(" longeur du liste : %d \n",count);
    if(count %2 == 0){
        milieux = count / 2;
    } else{
        milieux = (count/2) +1;
    }

    printf(" milieux du longeur du liste : %d \n\n",milieux);

    int x = 0;
    while (l != NULL){
        x++;
        if(x == milieux){
            ml = l;
        }
        l = l->suiv;
    }
    return ml;
}
Liste inverser(Liste l){
    Liste temp = NULL;
    Liste temp2 = NULL;
    while (l != NULL){
        temp = Empiler(temp,l->value);
        l = depiler(l);
    }
    while (temp != NULL){
        temp2 = Empiler(temp2,temp->value);
        temp = depiler(temp);
    }
    while (temp2 != NULL){
        l = Empiler(l,temp2->value);
        temp2 = depiler(temp2);
    }

    return l;
}