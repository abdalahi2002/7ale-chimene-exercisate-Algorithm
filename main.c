//#include <stdio.h>
//#include <stdlib.h>
//
//#define MAX_DIGITS 20
//
//typedef struct {
//    char digits[MAX_DIGITS];
//    int length;
//} Number;
//
//// Fonction pour initialiser un nombre à partir d'un entier
//Number initializeNumber(int num) {
//    Number result;
//    result.length = 0;
//
//    // Conversion de l'entier en une liste de caractères
//    while (num > 0) {
//        result.digits[result.length++] = num % 10 + '0';
//        num /= 10;
//    }
//
//    // Si le nombre est zéro
//    if (result.length == 0) {
//        result.digits[result.length++] = '0';
//    }
//
//    return result;
//}
//
//// Fonction pour afficher un nombre
//void printNumber(Number num) {
//    for (int i = num.length - 1; i >= 0; i--) {
//        printf("%c", num.digits[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    // Exemple d'utilisation
//    int num = 1978;
//    Number numList = initializeNumber(num);
//
//    printf("Representation de %d: ", num);
//    printNumber(numList);
//
//    return 0;
//}

#include <stdio.h>
#include "ListeTableau.h"
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

//int main(void) {
//    Liste st = new_pile();
//    Afficher(st);
//    printf("Sommet du list : %d\n", sommet(st));
//
//    printf("\n_______________________________________________________\n\n");
//    st = Empiler(st, 6);
//    st = Empiler(st, 5);
//    st = Empiler(st, 4);
//    st = Empiler(st, 3);
//    st = Empiler(st, 2);
//    st = Empiler(st, 1);
//
//    Afficher(st);
//    printf("Sommet du list : %d\n", sommet(st));
//
//    printf("\n_______________________________________________________________\n");
//    Liste P1 = elementmilieux(st);
//    if (P1 != NULL) {
//        printf("L'element du milieu : %d\n", P1->value);
//    } else {
//        printf("La liste est vide ou la taille est paire\n");
//    }
//  // st = inverser(st);
//
//    Afficher(st);
////    printf("\n_______________________________________________________\n\n");
////    restauration(st);
////    Afficher(st);
////    Afficher(P2);
////
////    printf("\n_______________________________________________________\n\n");
////    st = depiletout(st);
////    Afficher(st);
////    sommet(st);
//
//    return 0;
//}




int main() {
    Liste maPile = initializer();

    // Empiler des caractères
    maPile = empilertab(maPile, 'A');
    maPile = empilertab(maPile, 'B');
    maPile = empilertab(maPile, 'C');

    // Afficher la pile
    printf("Pile apres empilement : ");
    Affichertab(maPile);

    // Dépiler un caractère
    maPile = depilertab(maPile);
    maPile = empilertab(maPile, 'D');
    maPile = empilertab(maPile, 'E');
    maPile = empilertab(maPile, 'L');
    maPile = empilertab(maPile, 'L');
    maPile = empilertab(maPile, 'A');
    maPile = empilertab(maPile, 'H');
    maPile = empilertab(maPile, 'I');

    // Afficher la pile après dépilement
    printf("Pile apres depilement : ");
    Affichertab(maPile);
    char expression[MAX_SIZE];
    printf("\n\nEntrez une expression avec des parentheses : ");
    scanf("%s", expression);
    valide(expression);
    // Libérer la mémoire
    //free(maPile);

    return 0;
}
