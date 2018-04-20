#include "pilha.h"
int main(int argc, char *argv[]){

    struct elemento dado[ESIZE]={
                        (1),
                        (2),
                        (3),
                        (4),
                        (5),
                        (6),
                        (7),
                        (8),
                        (9),
                        (10)
                        };

    Pilha *pilha=criaPilha();
    int a=0;

    	while(a!=ESIZE){
        	push(pilha,dado[a],1);
        a++;
   	 }
    	a=0;
	while(a!=ESIZE){
        	push(pilha,dado[a],2);
        a++;
    	}

    imprimePilha(pilha);


    return 0;
}
