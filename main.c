#include <stdio.h>
#include "Test.h"
#include <stdlib.h>

//int main(void){
//
//    Liste li = New_Double_Liste();
//    if (est_vided(li))
//        printf("la liste est vide");
//    else
//        printf("la liste a des element .");
//
//    printf("la longeur du liste : %d", Longeur_liste(li));
//
//    return 0;
//}

/*
 * la main du Liste File .
 */
//int main(void){
//
//    printf("la longeur du File : %d\n", File_length());
//    Afficher_File();
//
//    printf("\n_____________________________________________________________________\n");
//    EnFiler(10);
//    EnFiler(13);
//    EnFiler(14);
//    EnFiler(15);
//    printf("la longeur du File : %d\n", File_length());
//    printf("la premiere element: %d et la derniere element: %d\n",File_first(),File_last());
//    Afficher_File();
//    printf("\n_____________________________________________________________________\n\n");
//    defiler();
//    EnFiler(70);
//    printf("la premiere element: %d et la derniere element: %d\n",File_first(),File_last());
//    Afficher_File();
//    return 0;
//}

/*
 * la main du Liste Pile .
 */

int main(void) {
    Liste st = new_pile();
    Afficher(st);
    sommet(st);

    printf("\n_______________________________________________________\n\n");
    st = Empiler(st,5);
    st = Empiler(st,4);
    st = Empiler(st,3);
    st = Empiler(st,2);
    st = Empiler(st,1);
    Afficher(st);
    st = alternence(st);
    Afficher(st);
//    sommet(st);
    //printf("\n_______________________________________________________________\n");
//    //sommet(st);
     //st = paire_impaire(st);
//    st = impairedessouspaire(st);
    //Afficher(st);
   AfficheP_imp();

//    printf("\n_______________________________________________________\n\n");
//    st = depiler(st);
//    Afficher(st);
//    sommet(st);
//
//    printf("\n_______________________________________________________\n\n");
//    st = depiletout(st);
//    Afficher(st);
//    sommet(st);

    return 0;
}
