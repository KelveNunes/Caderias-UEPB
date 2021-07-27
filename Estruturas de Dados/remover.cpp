#include <iostream>
using namespace std;

struct no{
    int dado;
    no * prox;
    };

void instanciar_lista(no *&l){
    l = NULL;
}

int tamanho(no *l){
    int contador = 0;
    while(l != NULL){
        contador++;
        l = l->prox;
    }
    return contador;
}

bool inserir(no *&l, int dado, int posicao){

     int tamanho = tamanho(l);
     if(posicao > tamanho+1){
        return false;
     }
     else{
       funcionarios* novo = new funcionarios;

       if(posicao==1){
         funcionarios *novo;
         novo = new funcionarios;
         novo-> matricula = matricula;
         novo-> idade = idade;
         novo-> prox = NULL;

       if(l == NULL){
           l = novo;
       }
       else{
        novo-> prox = l;
        l = novo;
    }


       else if(posicao == tamanho+1){
        inserir_fim(l, matricula, idade);
       }
       else{
        novo->matricula = matricula;
        novo->idade = idade;
        funcionarios* perc = l;
        int i=1;
        while(i != posicao-1){
          perc = perc->prox;
          i++;

        }
       novo->prox = perc->prox;
       perc->prox = novo;
       return true;
       }
     }

 }
