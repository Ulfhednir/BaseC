#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Структура для хранения узлов дерева
typedef struct tree
{
    int key;
    struct tree *left, *right;
} tree;

// Вспомогательная функция для нахождения и печати верхнего вида дерева
void findTopView(tree *root, int level, int dist, int *minDist, int *maxDist, int topView[], int levelView[])
{
    if (root == NULL)
    {
        return;
    }

    // Если данный горизонтальный уровень ещё не был встречен или встречен на более высоком уровне
    if (topView[dist] == INT_MIN || levelView[dist] > level)
    {
        topView[dist] = root->key;
        levelView[dist] = level;
        if (dist < *minDist)
            *minDist = dist;
        if (dist > *maxDist)
            *maxDist = dist;
    }

    // Рекурсивно идем влево и вправо
    findTopView(root->left, level + 1, dist - 1, minDist, maxDist, topView, levelView);
    findTopView(root->right, level + 1, dist + 1, minDist, maxDist, topView, levelView);
}

// Основная функция для вызова верхнего вида
void btUpView(tree *root)
{
    if (root == NULL)
    {
        return;
    }

    int minDist = 0;
    int maxDist = 0;
    int topView[100];
    int levelView[100];

    for (int i = 0; i < 100; i++)
    {
        topView[i] = INT_MIN;
        levelView[i] = INT_MAX;
    }

    findTopView(root, 0, 50, &minDist, &maxDist, topView, levelView);

    for (int i = minDist; i <= maxDist; i++)
    {
        if (topView[i] != INT_MIN)
        {
            printf("%d ", topView[i]);
        }
    }
    printf("\n");
}

// Функция для создания нового узла дерева
tree *newNode(int key)
{
    tree *node = (tree *)malloc(sizeof(tree));
    node->key = key;
    node->left = node->right = NULL;
    return node;
}

int main()
{
    tree *root = newNode(10);
    root->left = newNode(5);
    root->right = newNode(15);
    root->left->left = newNode(3);
    root->left->right = newNode(7);
    root->right->left = newNode(13);
    root->right->right = newNode(18);
    root->left->left->left = newNode(1);
    root->left->right->left = newNode(6);

    printf("Top view of the binary tree: ");
    btUpView(root);
    printf("\n");

    return 0;
}
