#include <stdio.h>
#include <stdlib.h>
#include "library.h"

int main() {
    tprNo *root = criarNo(10);
    root->left= criarNo(3);
    root->right= criarNo(5);

    printarArvore(root);
    return 0 ;
}