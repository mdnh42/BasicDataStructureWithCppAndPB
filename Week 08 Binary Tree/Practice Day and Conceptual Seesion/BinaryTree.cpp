//#()!
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    int value;
    node* Left;
    node* Right;
    node* Parent;
};

class Binary_Tree{
    node* root;
    BinaryTree()
    {
        root = NULL:
    }

    node* CreateNewNode(int id, int value)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->Left = NULL:
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;

    }

    void Insertion(int id, int value)
    {
        node* newnode = CreateNewNode(int id, int value);
        if(root == NULL)
        {
            root = newnode;
            return;
        }
        queue<node*> q;
        q.push(root);
        while(!q.empty())
        {

        }
    }
};

int main()
{

    return 0;
}

