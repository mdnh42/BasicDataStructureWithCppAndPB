#include<bits/stdc++.h>
using namespace std;
//Template Based Stack using Dynamic Array
template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size =  0;
    }
    //Makes the array cap multplied by 2

    void Increase_size()
    {
        T *temp;
        temp = new T [array_cap*2];
        for(int i=0; i<array_cap; i++)
        {
            temp[i] = a[i];
        }
        swap(a, temp);
        delete []temp;
        array_cap = array_cap*2;
    }

    //Add an element in the stack O(1)
    void push(T val)
    {
        if(stack_size+1>array_cap)
        {
            Increase_size();
        }
        stack_size = stack_size+1;
        a[stack_size-1] = val;
    }
    // Delete the topmost element from the stack O(1);
        void pop()
        {
            if(stack_size==0)
            {
                cout<<"Stack is empty!\n";
                return;
            }
            stack_size = stack_size- 1;
        }
    //Returns the top element from the stack O(1)
    T top()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size-1];
    }
};

int main()
{
    cout<<"Double \n";
    Stack<double>db;
    db.push(3.5);
    db.push(3.6);
    db.push(3.7);
    cout<<db.top()<<"\n";
    db.pop();
    cout<<db.top()<<"\n";
    db.pop();
    cout<<db.top()<<"\n";
    db.pop();

    cout<<"Char \n";
    Stack<char>ch;
    ch.push('a');
    ch.push('c');
    ch.push('d');
    cout<<ch.top()<<"\n";
    ch.pop();
    cout<<ch.top()<<"\n";
    ch.pop();
    cout<<ch.top()<<"\n";
    ch.pop();


    cout<<"String \n";
    Stack<string>str;
    str.push("Hi I am NUr Hasan");
    str.push("I learn C++");
    str.push("I am also know C Programming");
    cout<<str.top()<<"\n";
    str.pop();
    cout<<str.top()<<"\n";
    str.pop();
    cout<<str.top()<<"\n";
    str.pop();
    cout<<str.top()<<"\n";
    return 0;
}
