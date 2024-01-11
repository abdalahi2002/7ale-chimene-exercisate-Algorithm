#ifndef asd
#define asd
#include <stdio.h>
enum bool{
    false,
    true
};
typedef enum bool Bool;
typedef struct file{
    int value;
    struct file *suiv;
}File ,*Liste;
//typedef struct file File;
//typedef File *Liste;

static Liste first = NULL;
static Liste last = NULL;
static int nbrefile = 0;

Liste new_file(void);
Bool File_est_vide(void);
int File_length(void );
int File_first(void);
int File_last(void);
void defiler(void);
void EnFiler(int x);
void Afficher_File(void);

#endif