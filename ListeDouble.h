#ifndef asdf
#define asdf

enum bool{
    false,
    true
};
typedef enum bool Bool;

struct dlisteNode{
    int value;
    struct dlisteNode *sui;
    struct dlisteNode *retr;
};
typedef struct dlisteNode DlisteNode;
typedef DlisteNode *ListeN;
struct dliste{
    int longe;
    struct dlisteNode *begin;
    struct dlisteNode *end;
};
typedef struct dliste Dliste;
typedef Dliste *Liste;

Liste New_Double_Liste(void );
Bool est_vided(Liste li);
int Longeur_liste(Liste li);
int Dliste_first(Liste li);
Liste insert(Liste li, int x);
#endif