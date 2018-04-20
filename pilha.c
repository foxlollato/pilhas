#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct tipoNo {
    struct elemento dado[PSIZE];
    int topo1;
    int topo2;
};

typedef struct tipoNo noPilha ;

Pilha* criaPilha(){
    Pilha *pilha=(Pilha*) malloc(sizeof(Pilha));
    if(pilha!=NULL){
        pilha->topo1 = 0;
        pilha->topo2=PSIZE+1;
    }
    return pilha;
}
/*void apagaPilha(Pilha *pilha){
    int a=0;
    if(pilha!=NULL){
       while(a<PSIZE){
            free((*pilha)->elemento[a]);
       }
    }
}*/

int push(Pilha *pilha, struct elemento dado, int p){
    if(pilha!=NULL && p>=1 && p<=2){
	if(p==1){
	
        pilha->topo1++;
        pilha->dado[pilha->topo1-1]=dado;
        return 1;
	
	}else{

        	pilha->topo2--;
        	pilha->dado[pilha->topo2-1]=dado;
        	return 1;
	}

    }
    return 0;
}
void imprimePilha(Pilha *pilha){

    if(pilha!=NULL){
        int a =0;
        while(a<PSIZE){
            printf("Elemento %d\n", pilha->dado[a].i);
            a++;
        }
    }
}
int pop(Pilha *pilha, int p){

    if(pilha!=NULL){
            pilha->topo1--;
            pilha->topo2++;
            return 1;
    }
    return 0;
}
int consultaTopo(Pilha*, struct elemento*);
int tamPilha(Pilha*);
int pilhaVazia(Pilha*);
