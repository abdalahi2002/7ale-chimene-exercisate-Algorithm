#include "ListeTableau.h"
#include <stdio.h>
#include <stdlib.h>

Liste initializer(void){
    Liste temp = malloc(sizeof(test));
    if(temp == NULL){
        printf("erreurs de l'ocation du memoire");
        exit(1);
    }

    temp->sommet = -1;
    return temp;
}

int est_videtab(Liste p){
    return p->sommet = -1;
}
int est_plein(Liste p){
    return p->sommet = MAX_SIZE - 1;
}

Liste empilertab(Liste p,char value){

    if(p != NULL && p->sommet <= MAX_SIZE-1){
        p->sommet++;
        p->tab[p->sommet] = value;

    } else{
        printf("la pile est plien ou erreurs de l'occation de memoire");
    }
    return p;
}

Liste depilertab(Liste p) {
    if (p != NULL && p->sommet > -1) {
       p->sommet--;
    } else {
        printf("La pile est vide ou erreurs d'allocation de mémoire.\n");
    }
    return p;
}


void Affichertab(Liste p){
    for (int i = 0; i <=p->sommet ; ++i) {
        printf("%c",p->tab[i]);
    }
    printf("\n\n");
}

void valide(char *exp){

    Liste p = initializer();
    int i = 0;
    do{
        if(exp[i] == '(' || exp[i] == '['||exp[i] == '{'){
            p = empilertab(p,exp[i]);
        } else if (exp[i] == ')' || exp[i] == ']'||exp[i] == '}'){
            if(p->tab[p->sommet] != '(' && exp[i] == ')'||
            p->tab[p->sommet] != '[' && exp[i] == ']'||p->tab[p->sommet] != '{' && exp[i] == '}'){
                printf("l'expression n'est pas valide");
                break;
            } else{
                p = empilertab(p,exp[i]);
            }
        }
        i++;
    }while (exp[i] != '\0');

    free(p);
}