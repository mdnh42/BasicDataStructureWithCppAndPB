#include<bits/stdc++.h>
using namespace std;
class node
{
public:

    int id;
    node *Left;
    node *Right;
    node *parent;
};

class BinaryTree
{
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
    void Insertion(int id)
    {
        node* newnode = CreateNewNode(id);
        if(root==NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->Left!=NULL)
            {
                q.push(a->Left);
            }
            else{
                a->Left = newnode;
                newnode->parent = a;
                return;
            }

            if(a->Right!=NULL)
            {
                q.push(a->Right);
            }
            else{
                a->Right = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    void BFS()
    {
        if(root==NULL)
        {
            return;
        }
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
    bt.Insertion(0);
    bt.Insertion(1);
    bt.Insertion(2);
    bt.Insertion(3);
    bt.Insertion(4);
    bt.Insertion(5);

    bt.BFS();
    return 0;
}


