#include <stdio.h>
#include <stdlib.h>

// Структура для хранения узлов дерева с указателем на родителя
typedef struct tree
{
    int key;
    struct tree *left, *right, *parent;
} tree;

// Функция для создания нового узла дерева
tree *newNode(int key)
{
    tree *node = (tree *)malloc(sizeof(tree));
    node->key = key;
    node->left = node->right = node->parent = NULL;
    return node;
}

// Функция для поиска узла по ключу
tree *findNode(tree *root, int key)
{
    if (root == NULL || root->key == key)
    {
        return root;
    }

    tree *leftSearch = findNode(root->left, key);
    if (leftSearch != NULL)
    {
        return leftSearch;
    }

    return findNode(root->right, key);
}

// Функция для поиска брата узла
tree *findBrother(tree *root, int key)
{
    // Находим узел с заданным ключом
    tree *node = findNode(root, key);

    // Если узел не найден или у него нет родителя, возвращаем NULL
    if (node == NULL || node->parent == NULL)
    {
        return NULL;
    }

    // Находим родителя
    tree *parent = node->parent;

    // Проверяем, кто является братом узла
    if (parent->left == node)
    {
        return parent->right; // Брат слева — вернем правый узел
    }
    else if (parent->right == node)
    {
        return parent->left; // Брат справа — вернем левый узел
    }

    return NULL; // Если нет брата
}

int main()
{
    // Создаем дерево
    tree *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->left->left = newNode(3);
    root->left->right = newNode(7);
    root->right->left = newNode(13);
    root->right->right = newNode(18);
    root->left->left->left = newNode(1);
    root->left->right->left = newNode(6);

    // Устанавливаем указатели на родителя
    root->left->parent = root;
    root->right->parent = root;
    root->left->left->parent = root->left;
    root->left->right->parent = root->left;
    root->right->left->parent = root->right;
    root->right->right->parent = root->right;
    root->left->left->left->parent = root->left->left;
    root->left->right->left->parent = root->left->right;

    // Пример использования функции findBrother
    int key = 13;
    tree *brother = findBrother(root, key);
    if (brother)
    {
        printf("Brother of node with key %d is node with key %d\n", key, brother->key);
    }
    else
    {
        printf("Node with key %d has no brother\n", key);
    }

    return 0;
}
