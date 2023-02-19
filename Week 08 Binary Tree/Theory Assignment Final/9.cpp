#include<bits/stdc++.h>
using namespace std;
class node{
public:

    int id;
    node *Left;
    node *Right;
    node *parent;
};

class BinaryTree{
public:
    node* root;
    BinaryTree()
    {
        root = NULL;
    }
    node* CreateNewNode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }
    void build_binary_tree()
    {
        node* allnode[9];
        for(int i=0; i<9; i++)
        {
            allnode[i] = CreateNewNode(i);
        }
        allnode[0]->Left = allnode[10];
        allnode[0]->Right = allnode[22];

        allnode[1]->Left = allnode[5];
        allnode[1]->Right = allnode[12];

        allnode[3]->Left = allnode[3];
        allnode[3]->Right = allnode[15];

        allnode[1]->parent = allnode[20];
        allnode[4]->parent = allnode[10];
        allnode[5]->parent = allnode[10];
        allnode[7]->parent = allnode[5];
        allnode[8]->parent = allnode[5];

        allnode[2]->Left = allnode[21];
        allnode[2]->Right = allnode[25];
        allnode[2]->parent = allnode[20];

        allnode[5]->parent = allnode[22];
        allnode[6]->parent = allnode[22];
        root = allnode[0];
    }

    void BFS()
    {
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = - 1, r = -1;
            if(a->Left!=NULL)
            {
                l= a->Left->id;
                q.push(a->Left);
            }

            if(a->Right!=NULL)
            {
                r= a->Right->id;
                q.push(a->Right);
            }

            if(a->parent!=NULL)
                p = a->parent->id;
            cout<<"Node ID = "<<a->id<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"Parent id = "<<p<<" \n";
        }
    }
    void DFS(node*a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);

    }

    void Inorder(node*a)
    {
        if(a==NULL)
        {
            return;
        }
        Inorder(a->Left);
        cout<<a->id<<" ";
        Inorder(a->Right);

    }
    void Preorder(node*a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        Preorder(a->Left);
        Preorder(a->Right);

    }

    void Postorder(node*a)
    {
        if(a==NULL)
        {
            return;
        }

        Postorder(a->Left);
        Postorder(a->Right);
        cout<<a->id<<" ";

    }


};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    bt.Inorder(bt.root);
    return 0;
}


