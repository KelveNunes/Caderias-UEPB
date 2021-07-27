#include <iostream>

//estrutura "nó"
struct nolist{
	int idade
	nolist * prox
};

void instaciar_lista(nolist *&l){
	l = null;
}

inserir_no_incio(nolist *&l, int idade){
	nolist * novo;
	novo = new nolist;
	novo-> idade = idade;
	novo-> prox = null;
	if(l==null){
		l = novo;
	}
	else{
		novo->prox = l;
		l = novo
	}
}

inserir_fim()(nolist *&l, int idade){
	nolist * novo;
	novo= new nolist;
	novo-> idade = idade;
	novo-> prox = null;
	if(l == NULL){
        l = novo;
    }else{
        nolista * perc = l;
    }

int main(int argc, char** argv) {

}
