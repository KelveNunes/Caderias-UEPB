#include <iostream>
using namespace std;

// MENU
int Menu(){
	int escolha;

	do{

	   cout<< "Menu de opcoes:" << endl<< endl;


	   cout<< "1. Inserir funcionario no Inicio" <<endl;
	   cout<< "2. Inserir funcionario no Fim" <<endl;
	   cout<< "3. Imprimir funcionarios" <<endl;
	   cout<< "4. Exibir a quantidade de funcionarios" <<endl;
	   cout<< "5. Inserir funcionario em uma determinada posicao da lista" <<endl;
	   cout<< "6. Remover funcionario do inicio" <<endl;
	   cout<< "7. Remover funcionario do fim" <<endl;
	   cout<< "8. remover funcionario especifico" <<endl;
	   cout<< "9. Imprimir matriculas pares" <<endl;
	   cout<< "10. imprimir primeira e segunda cabeca" <<endl;
       cout<< "11. sair"<<endl<<endl;

	   cout<< "Opcao: ";

	   cin>> escolha;

	}while(escolha< 1 || escolha> 10);

	return escolha;
}

//NÓ
struct funcionario{
    int matricula,idade;
    struct funcionario * prox;
    struct funcionario * ant;
};

//INSTANCIAR LISTA
void instanciar_lista(funcionario *&l){
    l = NULL;
}

//CONTADOR
int total_de_nos(funcionario *l){
    int contador = 0;
    while(l != NULL){
        contador++;
        l = l->prox;
    }
    return contador;
}

//INSERIR NO INICIO
void inserir_inicio(funcionario *&l, int matricula, int idade){

    funcionario *novo;
    novo = new funcionario;
    novo-> matricula =matricula;
    novo-> idade = idade;
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

void inserir_fim(funcionario *&l, int matricula, int idade){

    funcionario *novo;
    novo = new funcionario;
    novo-> matricula =matricula;
    novo-> idade = idade;
    novo->prox = NULL;
    novo->ant = NULL;
    if(l == NULL){
        l = novo;
    }
    else{
        funcionario *perc = l;
        while(perc->prox != NULL){
            perc = perc->prox;
        }

        perc->prox = novo;
        perc->ant = perc;

    }
}

//INSERIR NO MEIO
 bool inserir_meio(funcionario *&l, int matricula, int idade, int posicao){

     int tamanho = total_de_nos(l);
     if(posicao > tamanho+1){
        return false;
     }
     else{
        funcionario* novo = new funcionario;

       if(posicao==1){
        inserir_inicio(l, matricula, idade);
       }
       else if(posicao == tamanho+1){
        inserir_fim(l, matricula, idade);
       }
       else{
         novo-> matricula =matricula;
         novo-> idade = idade;
         novo->prox = NULL;
         novo->ant = NULL;
         funcionario* perc = l;
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

 //REMOVER DO INICIO
 bool remover_inicio(funcionario *&l){
    if(l==NULL){
        return false;
    }
    else{
        funcionario * aux = l;
        l = l->prox;
        delete aux;
        return true;
    }
 }
 //REMOVER DO FIM
 bool remover_fim(funcionario *&l){
     if(l == NULL){
        return false;
     }
     else{
        if(l->prox == NULL){
            delete l;
        }
        else{
            funcionario * perc = l;
            funcionario * aux = l->prox;
            while(aux->prox != NULL){
                perc = perc->prox;
                aux = aux->prox;
            }
            delete aux;
            perc->prox = NULL;

        }
        return true;


     }
 }
//REMOVER DE QUALQUER POSIÇÃO
bool remover_posicao(funcionario *&l, int matricula){
    funcionario* aux = l;
    funcionario* anterior;
    while(aux->matricula != matricula && aux != NULL){
      anterior = aux;
      aux=aux->prox;
    }
    if(aux == NULL){
        return false;
    }
    else{
        if(aux == l){
            l=l->prox;
            delete aux;
        }
        else if(aux->prox == NULL){
            delete aux;
            anterior->prox = NULL;
        }
        else{
            anterior->prox = aux->prox;
            delete aux;
        }
        return true;
    }
}

//IMPRIMIR
void imprimir(funcionario *l){

     cout << "Lista"<<endl;
     cout << "---------------------------"<<endl<<endl;
     while(l!=NULL){
        cout<< "Matricula: " << l->matricula <<endl;
        cout<< "idade: " << l->idade <<endl;

        l=l->prox;
     }
}

//VERIFICAR SE A MATRICULA É PAR
void verifica_par(funcionario *l){
    funcionario* perc = l;
    cout<< "Matriculas Pares "<< endl << "-------------"  <<endl;
    while(perc->prox != NULL){
         if(perc->matricula%2 == 0){

            cout<< "Matricula: " << perc->matricula <<endl;
            cout<< "idade: " << perc->idade <<endl;
         }
         perc=perc->prox;
    }
}

//DIVIDE A LISTA EM DUAS
funcionario* dividir_lista(funcionario *&l){

    int tamanho = total_de_nos(l);
    if(tamanho ==1 || l == NULL){
        return NULL;
    }
    else{
        int i = 1;
        funcionario* perc = l;
        funcionario* lista2 = new funcionario;

        if(tamanho%2 !=0 ){


            while(perc->prox != NULL){
                perc = perc->prox;
                if(i ==(tamanho/2)){
                  lista2=perc->prox;
                  perc->prox = NULL;
                  lista2->ant=NULL;
                }
                i++;
            }

            return lista2;
        }
        else{
            while(perc->prox != NULL){
                perc = perc->prox;
                if(i ==(tamanho/2)-1){
                  lista2=perc->prox;
                  perc->prox = NULL;
                  lista2->ant=NULL;
                }
                i++;
            }

            return lista2;
        }



    }




}









//MAIN
int main(){

    int escolha = Menu();
    funcionario* funcionarios;
    instanciar_lista(funcionarios);
    bool retorno;
    funcionario* segunda_cabeca;

    do{
      int totalDados = total_de_nos(funcionarios);
      switch(escolha){

        case 1:
            int matricula_inicio, idade_inicio;
            cout<< "Digite a Matricula: ";
            cin>>   matricula_inicio;
            cout<< "Digite a Idade: ";
            cin>>   idade_inicio;
            inserir_inicio(funcionarios, matricula_inicio, idade_inicio);
            break;

        case 2:
            int matricula_fim, idade_fim;
            cout<< "Digite a Matricula: " ;
            cin>>   matricula_fim;
            cout<< "Digite a Idade";
            cin>> idade_fim;
            inserir_fim(funcionarios, matricula_fim, idade_fim);
            break;

        case 3:
            if(totalDados == 0){
                cout<<"Lista Vazia" <<endl;
                break;
            }
            else{
            imprimir(funcionarios);
            break;
            }

        case 4:
            if(totalDados == 0){
                cout<<"Lista Vazia" <<endl;
                break;
            }
            else{
                cout<<"Total de Dados Inseridos: ";
                cout<<totalDados;
                cout<<endl;
                break;
            }
        case 5:
            int matricula_meio, idade_meio, posicao;

            cout<< "Digite o Matricula: " ;
            cin>>   matricula_meio;
            cout<< "Digite a Idade: ";
            cin>>  idade_meio;
            cout<< "Digite a Posicao: ";
            cin>> posicao;
            retorno = inserir_meio(funcionarios, matricula_meio, idade_meio, posicao);
            break;

        case 6:
            retorno = remover_inicio(funcionarios);
            if(retorno == true){
                cout<< "Elemento Removido Com Sucesso";
            }
            break;
        case 7:
            retorno = remover_fim(funcionarios);
            if(retorno == true){
                cout<< "Elemento Removido Com Sucesso" <<endl;
            }
            break;
        case 8:
            int matricula;
            cout<< "Digite o dado a ser removido: " <<endl;
            cin>> matricula;
            retorno = remover_posicao(funcionarios,matricula);
            if(retorno == true){
              cout<< "Elemento Removido Com Sucesso" <<endl;
              break;
            }
        case 9:
            verifica_par(funcionarios);
            break;
        case 10:
            int total = total_de_nos(funcionarios);
            if(total == 0){
               cout<< "lista vazia" << endl;
               break;
            }
            else{
               segunda_cabeca = dividir_lista(funcionarios);
               imprimir(funcionarios);
               imprimir(segunda_cabeca);
               cout<<endl;
               break;
            }



      }
      cout<<endl;
      escolha = Menu();


    }while(escolha != 11);
    cout<<endl;


}

