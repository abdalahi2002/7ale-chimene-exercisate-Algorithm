#include "TestFile.h"
#include <stdio.h>
#include <stdlib.h>

Liste new_file(void)
{
    return NULL;
}

Bool File_est_vide(void)
{
    if(first == NULL && last == NULL){
        return true;
    }
    return false;
}

int File_length(void )
{
    Liste temp = first;
    while (temp != NULL) {
        nbrefile++;
        temp = temp->suiv;
    }
    return nbrefile;
}
void EnFiler(int x)
{
    Liste temp = malloc(sizeof(File));
    if(temp == NULL){
        printf("erreurs de l''ocation memoire .");
        exit(1);
    }

    temp->value = x;
    temp->suiv = NULL;

    if(File_est_vide()){
        first = temp;
        last = temp;
    } else{
        last->suiv = temp;
        last = temp;
    }

}

int File_first(void)
{
    if(File_est_vide())
        exit(1);

    return first->value;
}

int File_last(void)
{
    if(File_est_vide())
        exit(1);

    return last->value;
}

void Afficher_File(void){
    if(File_est_vide()){
        printf("Rien a Afficher,la File est vide\n");
        return;
    }

    Liste temp = first;

    while (temp != NULL) {

        printf(" %d",temp->value);

        temp = temp->suiv;
    }
    printf("\n");
}

void defiler(void)
{
    if(File_est_vide()){
        printf("Rien a retirer,la File est vide\n");
        return;
    }

    Liste temp = first;

    if(first == last){
        first = NULL;
        last = NULL;
    } else{
        first = first->suiv;
    }
    free(temp);
}

