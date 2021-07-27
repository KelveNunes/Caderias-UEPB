#include <iostream>
using namespace std;

//MENU
int Menu(){
	int escolha;

	do{

	   cout<< "Menu de opcoes:" << endl<< endl;



	   cout<< "1. Inserir dado em uma determinada posicao da lista" <<endl;
	   cout<< "2. Divide lista e imprime" <<endl;
       cout<< "3. sair"<<endl<<endl;

	   cout<< "Opcao: ";

	   cin>> escolha;

	}while(escolha< 1 || escolha> 3);

	return escolha;
}

//NÓ
struct no{
    int dado;
    struct no * prox;
    struct no * ant;
};

//INSTANCIAR LISTA
void instanciar_lista(no *&l){
    l = NULL;
}

//CONTADOR
int total_de_nos(no *l){
    int contador = 0;
    while(l != NULL){
        contador++;
        l = l->prox;
    }
    return contador;
}

//INSERIR NO INICIO
void inserir_inicio(no *&l, int dado){

    no *novo;
    novo = new no;
    novo-> dado = dado;
    novo-> prox = NULL;
    novo-> ant = NULL;

    if(l == NULL){
        l = novo;
    }
    else{
        novo-> prox = l;
        l->ant = novo;
        l = novo;
    }
}

//INSERIR NO FIM

void inserir_fim(no *&l, int dado){

    no *novo;
    novo = new no;
    novo-> dado= dado;
    novo->prox = NULL;
    novo->ant = NULL;
    if(l == NULL){
        l = novo;
    }
    else{
        no *perc = l;
        while(perc->prox != NULL){
            perc = perc->prox;
        }

        perc->prox = novo;
        perc->ant = perc;

    }
}

//INSERIR NO MEIO
 bool inserir_meio(no *&l, int dado, int posicao){

     int tamanho = total_de_nos(l);
     if(posicao > tamanho+1){
        return false;
     }
     else{
        no* novo = new no;

       if(posicao==1){
        inserir_inicio(l, dado);
       }
       else if(posicao == tamanho+1){
        inserir_fim(l, dado);
       }
       else{
         novo-> dado = dado;
         novo->prox = NULL;
         novo->ant = NULL;
         no* perc = l;
         int i=1;
         while(i != posicao-1){
           perc = perc->prox;
           i++;

         }
       novo->prox = perc->prox;
       perc->prox = novo;

       }
       return true;
     }

 }

 //IMPRIMIR
void imprimir(no *l){

     while(l!=NULL){
        cout<< "Dado: " << l->dado <<endl;

        l=l->prox;
     }
}

//dividir lista
//dividir lista
no* dividir_lista(no *l){
   int tamanho = total_de_nos(l);
   if(tamanho == 1 || l == NULL){
     return NULL;
   }
   else{
     int i = 1;
     no * perc = l;
     no * lista2 = new no;
     if(tamanho %2 != 0){
        while(perc->prox !=NULL){
            perc = perc->prox;
            if(i == (tamanho/2)){
                lista2 = perc->prox;
                perc->prox=NULL;
                lista2->ant=NULL;
            }
            i++;
        }
        return lista2;
     }
     else if(tamanho==2){
        while(perc->prox !=NULL){
            lista2 = perc->prox;
            perc->prox =NULL;
            lista2->ant=NULL;
            return lista2;
        }
     }
     else{
        while(perc->prox !=NULL){
            perc =perc->prox;
            if(i == (tamanho/2)-1){
                lista2=perc->prox;
                perc->prox = NULL;
                lista2->ant = NULL;
            }
        }
        i++;
     }
     return lista2;
   }
}
//MAIN
int main(){

    int escolha = Menu();
    no* nos;
    instanciar_lista(nos);
    bool retorno;
    no* segunda_cabeca;

    do{
      int totalDados = total_de_nos(nos);
      switch(escolha){

          case 1:
            int dado, posicao;

            cout<< "Digite o dado: " ;
            cin>>   dado;
            cout<< "Digite a Posicao: ";
            cin>> posicao;
            retorno = inserir_meio(nos, dado, posicao);
            break;

            case 2:
            int total = total_de_nos(nos);
            if(total == 0){
               cout<< "lista vazia" << endl;
               break;
            }
            else{
               segunda_cabeca = dividir_lista(nos);
               cout<<"lista 1"<<endl<< "--------"<<endl;
               imprimir(nos);
               cout<<endl;
               cout<<"lista 2"<<endl<< "--------"<<endl;
               imprimir(segunda_cabeca);
               cout<<endl;
               break;
            }
      }
      cout<<endl;
      escolha = Menu();


    }while(escolha != 3);
    cout<<endl;


}
