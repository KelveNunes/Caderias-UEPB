#include <iostream>
using namespace std;

// MENU
int Menu(){

	int escolha;

	do{

	   cout<< "Menu de opcoes:" << endl<< endl;


	   cout<< "1. Inserir" <<endl;
	   cout<< "2. Pre-ordem" <<endl;
	   cout<< "3. Ordem Central" <<endl;
	   cout<< "4. Pos-ordem" <<endl;
       cout<< "5. sair"<<endl;
	   cout<< "Opcao: ";

	   cin>> escolha;

	}while(escolha< 1 || escolha> 5);

	return escolha;
}

//NÓ
struct noArvore{
    int dado;
    struct noArvore * esq;
    struct noArvore * dir;
};

//INSTANCIAR LISTA
void instanciar_lista(noArvore *&raiz){
    raiz = NULL;
}

//INSERIR
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


//PRE ORDEM
void preOrdem(noArvore *raiz) {

    if (raiz != NULL) {
        cout<< raiz->dado;
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

//EM ORDEM
void emOrdem(noArvore *raiz) {

    if (raiz != NULL) {
        emOrdem(raiz->esq);
        cout<< raiz->dado;
        emOrdem(raiz->dir);
    }
}

//POS ORDEM
void posOrdem(noArvore *raiz) {

    if (raiz != NULL) {
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        cout<< raiz->dado;
    }
}

//MAIN
int main() {
    noArvore *arvore;
    instanciar_lista(arvore);
    int escolha = Menu();

    do {
        if(escolha == 5){
            break;
        }
        else{

        switch (escolha) {

            case 1:
                int dado;
                cout<< "Valor: ";
                cin>>dado;
                cout<<endl;
                inserir(arvore,dado);
                break;

            case 2:
                preOrdem(arvore);
                cout<<endl;
                break;

            case 3:
                emOrdem(arvore);
                cout<<endl;
                break;

            case 4:
                posOrdem(arvore);
                cout<<endl;
                break;

            }
        }
    escolha = Menu();
    }while (escolha!= 5);


}
