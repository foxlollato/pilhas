#define PSIZE 20
#define ESIZE PSIZE/2
typedef struct elemento {
    int i;
};

typedef struct tipoNo Pilha;

Pilha* criaPilha();
//void apagaPilha(Pilha*);
int push(Pilha*,struct elemento);
void imprimePilha(Pilha*);
int pop(Pilha*);
int consultaTopo(Pilha*, struct elemento*);
int tamPilha(Pilha*);
int pilhaVazia(Pilha*);
