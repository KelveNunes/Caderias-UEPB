#include <iostream>
using namespace std;

struct serie{
    string nome;
    struct episodio * inicio;
    struct serie * prox, * ant;
};

struct episodio{
    string nome_ep;
    struct episodio * prox, * ant;
};

void inicializar(serie *&s){
    s = NULL;
}

void inserir_serie(serie *&s, string nome){
    serie * novo = new serie;
    novo->nome = nome;
    novo->ant = NULL;
    novo->prox = NULL;
    novo->inicio = NULL;

    if (s==NULL){
        s=novo;
    }else{
        serie * perc = s;
        while(perc->prox != NULL){
            perc = perc->prox;
        }
        perc->prox=novo;
        novo->ant = perc;
    }
}

void inserir_episodio(episodio * &ep, string nome_ep){
    episodio * novo = new episodio;
    novo->nome_ep = nome_ep;
    novo->ant=NULL;
    novo->prox=NULL;

    if(ep == NULL){
        ep = novo;
    }else{
        episodio *perc = ep;
        while(perc->prox != NULL){
            perc = perc->prox;
        }
        perc->prox = novo;
        perc->ant = perc;
    }
}

serie * buscar_serie(serie *s, string nome){
    serie * perc = s;

    while(perc != NULL && perc->nome != nome){
        perc = perc->prox;
    }
    return perc;
}

bool novo_ep(serie *&s, string nome, string nome_ep){

    serie * aux = buscar_serie(s, nome);
    if (aux == NULL){
        return false;
    }else{
        inserir_episodio(aux->inicio, nome_ep);
        return true;
    }
}

void imprimir(serie *s){
    int  numero = 1;
    while (s != NULL){


        cout<<"Serie: "<<s->nome<<endl<<endl;

        while (s->inicio!=NULL){
            cout<<"EP "<<numero<<": "<<s->inicio->nome_ep<<endl;
            s->inicio = s->inicio->prox;
            numero++;

        }
            cout<<"------------"<<endl<<endl;
            numero = 1;
            s = s->prox;

    }
}

int main(){

    serie * series;

    inicializar(series);

    cout<<"lISTA DE SERIES"<<endl;
    cout<<"------------"<<endl<<endl;

    inserir_serie(series, "Game of Thrones");
    novo_ep(series,"Game of Thrones", "Winter Is Coming");

    inserir_serie(series, "The Crown");
    novo_ep(series, "The Crown", "Wolfeton Splash");
    novo_ep(series, "The Crown", "Hyde Parker Corner");

    imprimir(series);


}
