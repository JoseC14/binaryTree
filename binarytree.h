#ifndef BINARY_TREE_H_INCLUDED
#define BINARY_TREE_H_INCLUDED


    extern struct no{
        int value;
        struct no *pred;
        struct no *left;
        struct no *right;
    }no;
    void insere_no(int value, struct no** root);
    struct no* search_node(int value, struct no* root);
    int check_level_no(int value, struct no *root);
    int check_maximum_value(struct no *root);
    int check_minimum_value(struct no *root);
    int check_height(struct no *root);

#endif