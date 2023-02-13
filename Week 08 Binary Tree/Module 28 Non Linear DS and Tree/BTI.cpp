#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *l;
    node *r;
    node *parent;
};

class Binary_Tree
{
public:
    node* root;
    node* allnode[6];
    Binary_Tree()
    {
        root = NULL;
    }
    node *CreateNewNode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->l = NULL;
        newnode->r = NULL;
        newnode->parent = NULL;
        return newnode;
    }
    void buil_b_t()
    {

        for(int i=0; i<6; i++)
            allnode[i] = CreateNewNode(i);

        allnode[0]->l = allnode[1];
        allnode[0]->r = allnode[2];

        allnode[1]->l = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->l = allnode[3];
        allnode[2]->r = allnode[4];
        allnode[2]->parent = allnode[2];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];
        root = allnode[0];
    }

    void print()
    {
        for(int i=0; i<6; i++)
        {
            int p = -1;
            int l = -1;
            int r = -1;
            if(allnode[i]->parent != NULL)
                p = allnode[i]->parent->id;

            if(allnode[i]->l != NULL)
                l = allnode[i]->l->id;
            if(allnode[i]->r != NULL)
                r = allnode[i]->r->id;


            cout<<"Node "<<i<<" : Parent = "<<p<<" , left child = "<<l<<" , Right Chld = "<<r<<"\n";
        }
    }


};

int main()
{
    Binary_Tree bt;
    bt.buil_b_t();
    bt.print();

    return 0;
}
