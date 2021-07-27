#include <iostream>
using namespace std;

struct nolist{

	int dado;
	nolist * prox, *ant;
};

struct descritor{

    int tamanho;
    struct nolist *ini, *fim;
};

void instaciar_descritor(descritor *& d){

    d = new descritor;
    d->ini = NULL;
    d->fim = NULL;
    d->tamanho = 0;
}

void inserir_fim_d(descritor *d, int dado){
    nolist * novo = new nolist;
    novo->ant = NULL;
    novo->prox = NULL;
    novo->dado = dado;
    if(d->ini == NULL){
        d->ini = novo;
        d->fim = novo;
        d->tamanho++;
    }
    else{

       d->fim->prox = novo;
       novo->ant = d->fim;
       d->fim = novo;
       d->tamanho++;
    }
}

void inserir_inicio_d(descritor *d, int dado){
    nolist * novo = new nolist;
    novo->ant = NULL;
    novo->prox = NULL;
    novo->dado = dado;
    if(d->ini == NULL){
        d->ini = novo;
        d->fim = novo;
        d->tamanho++;
    }
    else{

       d->ini->ant = novo;
       novo->prox = d->ini;
       d->ini = novo;
       d->tamanho++;
    }
}

bool inserir(descritor *d, int dado, int posicao){

    nolist * novo = new nolist;
    novo->ant = NULL;
    novo->prox = NULL;
    novo->dado = dado;
    if(posicao > d->tamanho+1){
      return false;
    }
    else{
        if(posicao == 1){
            inserir_inicio_d(d, dado);
        }
        else if(posicao == d->tamanho+1){
            inserir_fim_d(d, dado);
        }
        else{
            nolist *perc = d->ini;
            int parada = 1;
            while(parada!= posicao-1){
                perc = perc->prox;
                parada++;
            }
            novo->prox = perc->prox;
            perc->prox = novo;
            d->tamanho++;

        }
    }
}

bool remover_ini(descritor *d){
    if(d->ini == NULL){
        return false;
    }
    else{
        nolist *aux = d->ini;
        d->ini = d->ini->prox;
        delete aux;
        d->ini->ant = NULL;
        return true;
    }
}
bool remover_fim(descritor *d){
    if(d->fim == NULL){
        return false;
    }
    else{
        nolist *aux = d->fim;
        d->fim = d->fim->ant;
        delete aux;
        d->fim->prox =NULL;
        return true;
    }
}



void imprimir(descritor *d){

    nolist * perc = d->ini;
    while(perc != NULL){
        cout<< perc->dado<<endl;
        perc = perc->prox;
    }
}

int main(){
    bool retorno;
    descritor * d;
    cout<< "Adcionando elementos"<<endl;
    cout<< "--------------------"<<endl;
    instaciar_descritor(d);
    inserir_inicio_d(d, 30);
    inserir_inicio_d(d, 20);
    inserir_inicio_d(d, 10);
    inserir_fim_d(d, 40);
    inserir_fim_d(d, 50);
    imprimir(d);
    cout<<endl;
    cout<< "Removendo do fim"<<endl;
    cout<< "--------------------"<<endl;
    retorno = remover_fim(d);
    imprimir(d);
    cout<<endl;
    cout<< "Adcionando em uma determinada posicao"<<endl;
    cout<< "--------------------"<<endl;
    retorno = inserir(d, 50, 3);
    imprimir(d);
    cout<<endl;
    cout<< "Removendo do inicio"<<endl;
    cout<< "--------------------"<<endl;
    retorno = remover_ini(d);
    imprimir(d);
}

