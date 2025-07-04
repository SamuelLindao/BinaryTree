#ifndef BINARYTREE_LIBRARY_H
#define BINARYTREE_LIBRARY_H

typedef struct no {
    int dados;
    struct no *left;
    struct no *right;

} tprNo;

void printarArvore(tprNo *raiz);
tprNo *criarNo(int dado);
tprNo *inserirNo(tprNo *raiz, int dado);
tprNo *removerNo(tprNo *raiz, int dado);
tprNo *buscarNo(tprNo *raiz, int dado);
int calcularAltura(tprNo *raiz);
void hello(void);

#endif //BINARYTREE_LIBRARY_H
