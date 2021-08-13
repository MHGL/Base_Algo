/*
 * 二叉树的初始化
 * 二叉树的遍历：前序，中序，后序
 * 根据二叉树的（前序，中序）或者（中序，后序）遍历还原二叉树
*/

# include <iostream>


// 二叉树基本结构
struct BiTree
{
    char   data;
    struct BiTree* left;
    struct BiTree* right;
}; 


// 递归函数构建二叉树
void initBiTree(BiTree* &node)
{
    char ch;

    std::cout << "请输入字符初始化当前节点，连续输入两次‘#’结束当前节点并跳转至右节点: " << std::endl;
    std::cin >> ch;

    if(ch == '#')
    {
        node = nullptr;
        return;
    }

    node = new BiTree;
    node -> data = ch;
    initBiTree(node -> left);
    initBiTree(node -> right);
}


// 前序（先序）遍历：根节点总是排列在前
void preTraverse(BiTree* node)
{
    if(node)
    {
        std::cout << node -> data;
        preTraverse(node -> left);
        preTraverse(node -> right);
    }
}


// 中序遍历：左子树集合 + root + 右子树集合
void midTraverse(BiTree* node)
{
    if(node)
    {
        midTraverse(node -> left);
        std::cout << node -> data;
        midTraverse(node -> right);
    }
}


// 后序遍历：根节点总是排列在后
void postTraverse(BiTree* node)
{
    if(node)
    {
        postTraverse(node -> left);
        postTraverse(node -> right);
        std::cout << node -> data;
    }
}


int main(void)
{
    BiTree* node;

    initBiTree(node);

    std::cout << "前序遍历结果为：" << std::endl;
    preTraverse(node);
    putchar('\n');

    std::cout << "中序遍历结果为：" << std::endl;
    midTraverse(node);
    putchar('\n');

    std::cout << "后序遍历结果为：" << std::endl;
    postTraverse(node);
    putchar('\n');

    return 0;
}
