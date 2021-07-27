#include <stdio.h>
#include <stdlib.h>

typedef struct arvoreBinaria {
    int elem;
    struct arvoreBinaria *dir, *esq;
} arvoreBinaria;

arvoreBinaria* insere(arvoreBinaria *a, int el);
arvoreBinaria* remover(arvoreBinaria *a, int el);
void preOrdem(arvoreBinaria *a);
void emOrdem(arvoreBinaria *a);
void posOrdem(arvoreBinaria *a);

int main() {
    struct arvoreBinaria *raiz, *p;
    int x; char op;
    raiz = NULL;

do {
    fflush(stdin);
    printf("\n1- Inserir\n2- Excluir \n3-preOrdem \n4- emOrdem\n5- posOrdem \n6- Sair ");
    scanf("%c", &op);

    switch (op) {

        case '1':
            printf("\nValor? ");
            scanf("%d", &x);
            raiz=insere(raiz,x);
            break;

        case '2':
            if (raiz != NULL) {
                printf("\nDigite um valor ");
                scanf("%d", &x);
                raiz=remover(raiz,x); }
                else printf("\nArvore vazia.\n");
                break;

        case '3':
            preOrdem(raiz);
            break;

        case '4':
            emOrdem(raiz);
            break;

        case '5':
            posOrdem(raiz);
        } // fim switch
    }while (op!= '6');
}

arvoreBinaria* insere(struct arvoreBinaria *a, int el) {

if (a == NULL) {
    a = malloc(sizeof(struct arvoreBinaria));
    a->elem = el;
    a->esq = NULL;
    a->dir = NULL;
    printf("\nInserido. ");
}
else {
    if(el <= a->elem)
      a->esq=insere(a->esq, el);
   else
      a->dir=insere(a->dir, el);
}
return a;
}

arvoreBinaria *remover(arvoreBinaria *a, int el) {
    arvoreBinaria *p, *p2;
    if (a->elem == el) {
        if (a->esq == a->dir) {
            // remoção de folha
            free(a);
            return NULL;
        }
else
     if (a->esq == NULL) { //filho a direita
        p=a->dir;
        free(a);
        return p;
    }
    else if (a->dir == NULL) { //filho a esq
        p=a->esq;
        free(a);
        return p;
    }
    else { //tem 2 filhos
        p2= a->dir;
        p= a->dir;
        while (p->esq) p=p->esq;
            p->esq = a->esq;
        free(a);
        return p2;
    }
}
if (a->elem < el) {
    if (a->dir!=NULL)
        a->dir = remover(a->dir, el);
else
        printf("Elemento nao encontrado.");
}
else {
    if (a->esq!=NULL)
        a->esq = remover(a->esq, el);
    else
        printf("Elemento não encontrado");
}
return a;
}

void preOrdem(arvoreBinaria *a) {
    if (a != NULL) {
        printf("\n%d ", a->elem);
        preOrdem(a->esq);
        preOrdem(a->dir);
    }
}

void emOrdem(arvoreBinaria *a) {
    if (a != NULL) {
        emOrdem(a->esq);
        printf("\n%d ", a->elem);
        emOrdem(a->dir);
    }
}

void posOrdem(arvoreBinaria *a) {
    if (a != NULL) {
        posOrdem(a->esq);
        posOrdem(a->dir);
        printf("\n%d ", a->elem);
    }
}
