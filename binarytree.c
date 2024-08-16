#include <stdio.h>
#include <stdlib.h>
#include "binarytree.h"


void insere_no(int value, struct no **root)
{
    struct no *node = (struct no*) malloc(sizeof(struct no));
    struct no *aux = *root;
    struct no *leaf_node = (struct no*) malloc(sizeof(struct no));

    node->value = value;
    node->right = (struct no*) NULL;
    node->left = (struct no*) NULL;
    node->pred = (struct no*) NULL;

    if(*root == NULL){
        printf("Criando nó raiz\n");
        *root = node;
        return;
    }

    while(aux!=NULL)
    {
        leaf_node = aux;
        printf("Percorrendo a arvore \n");
        if(aux->value < node->value)
        {
            printf("Indo para o nó da direita\n");    
            aux = aux->right;
        }
        else if(aux->value > node->value)
        {
            printf("Indo para o nó da esquerda\n");
            aux = aux->left;
        }
        else
        {
            printf("Nó com este valor já existe\n");
        }
    }
    printf("Foi para o nó folha\n");
    node->pred = leaf_node;

    if (leaf_node->value < node->value) {
        leaf_node->right = node;
    } else {
        leaf_node->left = node;
    }
}

struct no* search_node(int value, struct no* root)
{
    struct no* aux = root;

    while(aux->value != value && aux != NULL)
    {
        if(aux->value < value)
        {
            aux = aux->right;
        }
        else if(aux->value > value)
        {
            aux = aux->left;
        }
    }

    return aux;
}


int check_level_no(int value, struct no *root)
{
    struct no* aux = root;
    int level = 0;

    while(aux->value != value)
    {
        if(aux->value < value)
        {
            aux = aux->right;
        }
        else if(aux->value > value)
        {
            aux = aux->left;
        }
        level++;
    }

    return level;
}

int check_maximum_value(struct no *root)
{
    struct no *aux = root;
    struct no* leaf_node = (struct no*) malloc(sizeof(no));
    while(aux != NULL)
    {
        leaf_node = aux;
        aux = aux->right;
    }


    return leaf_node->value;
}


int check_minimum_value(struct no *root)
{
    
}
int check_height(struct no *root)
{
    struct no *aux = root;

    if(aux == NULL)
    {
        return 0;
    }

    int left = check_height(aux->left);
    int right = check_height(aux->right);

    if(left > right)
    {
        return left + 1;
    }
    else
    {
        return right + 1;
    }

}