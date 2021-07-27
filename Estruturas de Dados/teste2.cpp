#include <iostream>
using namespace std;


struct noArvore{
    int dado;
    struct noArvore * esq;
    struct noArvore * dir;
};

//INSTANCIAR LISTA
void instanciar_lista(noArvore *&raiz){
    raiz = NULL;
}
void inserir(noArvore *& raiz, int dado){
    if(raiz == NULL){
        raiz = new noArvore;
        raiz->dado = dado;
        raiz->esq = NULL;
        raiz->dir = NULL;
        cout<<"inserido"<<endl;
    }
    else{
        if(dado <= raiz->dado){
            inserir(raiz->esq, dado);
        }
        else{
            inserir(raiz->dir, dado);
        }
    }
}

void preOrdem(noArvore *raiz) {

    if (raiz != NULL) {
        cout<< raiz->dado;
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

int main(){
    noArvore *arvore;
    instanciar_lista(arvore);
    inserir(arvore, 10);
    inserir(arvore, 30);
    preOrdem(arvore);
}
