#include "library.h"

#include <stdio.h>
#include <stdlib.h>

void printarArvore(tprNo *raiz)
{
    if(raiz != NULL) {
        printf("%i",raiz->dados);
        printarArvore(raiz->left);
        printarArvore(raiz->right);
    }

}

tprNo *criarNo(int dado) {
    tprNo *no = (tprNo *)malloc(sizeof(tprNo));
    if(no != NULL) {
        no->left = NULL;
        no->right = NULL;
        no->dados = dado;
    }
    return no;
}

tprNo *buscarNo(tprNo *raiz, int dado)
{
    if(raiz == NULL) return NULL;

    if(raiz->dados > dado)
        return buscarNo(raiz->left, dado);
    else if(raiz->dados < dado)
        return buscarNo(raiz->right, dado);
    else
        return raiz;
}

tprNo *inserirNo(tprNo *raiz, int dado)
{
    if(raiz == NULL)
    {
        raiz = criarNo(dado);
        return raiz;
    }
    if(raiz->dados > dado)
    {
        raiz-> left = inserirNo(raiz->left, dado);
    }
    else
    {
        raiz->right = inserirNo(raiz->right,dado );
    }

    return raiz;

}

tprNo *removerNo(tprNo *raiz, int dado) {
    if(raiz == NULL) return NULL;

    if(raiz->dados > dado)
        return buscarNo(raiz->left, dado);
    else if(raiz->dados < dado)
        return buscarNo(raiz->right, dado);
    else {

        if(raiz->left == NULL) {
            tprNo *aux = raiz->right;
            free(raiz);
            return aux;
        }
        else if(raiz->right == NULL) {
            tprNo *aux = raiz->left;
            free(raiz);
            return aux;
        }

        //caso de 2 filhos
    }
}


