#define PSIZE 20
#define ESIZE PSIZE/2
typedef struct elemento {
    int i;
}elementos;

typedef struct tipoNo Pilha;

Pilha* criaPilha();
//void apagaPilha(Pilha*);
int push(Pilha*,struct elemento, int);
void imprimePilha(Pilha*);
int pop(Pilha*,int);
int consultaTopo(Pilha*, struct elemento*);
int tamPilha(Pilha*);
int pilhaVazia(Pilha*);
