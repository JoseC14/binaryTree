#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"


int main()
{
    struct no *root = NULL;
    insere_no(50,&root);
    insere_no(10,&root);
    insere_no(20,&root);
    insere_no(40,&root);
    insere_no(5,&root);
    insere_no(100,&root);
    struct no* n1 = search_node(10,root);
    printf("%d \n", n1->value);

    printf("Nó com o valor %d está no nível %d \n",10,check_level_no(10,root));
    printf("Arvóre binária tem altura de %d \n",check_height(root));
    printf("O valor máximo da arvóre é %d \n", check_maximum_value(root));
    printf("end \n");
    return 0;
}