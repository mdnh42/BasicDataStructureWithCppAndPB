#include<bits/stdc++.h>
using namespace std;
template<class T>
class Queue
{
public:
    T *a;
    int sz;
    int l, r;
    int array_cap;
    Queue()
    {
        a = new T[1];
        sz = 0;
        l = 0;
        r = -1;
        array_cap = 1;
    }


    void increase_size()
    {
        T *tmp = new T[array_cap * 2];
        for (int i = 0; i < array_cap; i++)
        {
            tmp[i] = a[i];
        }
        swap(tmp, a);
        array_cap = array_cap * 2;
        delete[] tmp;
    }


    void enqueue(T value)
    {
        if (array_cap == sz)
        {
            increase_size();
        }
        r++;
        a[r] = value;
        sz++;
    }


    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            return;
        }
        l++;
        sz--;
    }


    T front()
    {
        if (sz == 0)
        {
            cout << "Queue is empty!\n";
            T a;
            return a;
        }
        return a[l];
    }
};

int main()
{
    //int example
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    cout<<"Example Integer ------------------\n";

    cout<<"Now Front Element: "<<q.front()<<"\n";
    q.dequeue();
    cout<<"Now Front Element: "<<q.front()<<"\n";
    q.dequeue();
    cout<<"Now Front Element: "<<q.front()<<"\n";
    q.dequeue();




    //Char example
    Queue<char> cq;
    cq.enqueue('A');
    cq.enqueue('B');
    cq.enqueue('C');
    cout<<"Example Char ------------------\n";

    cout<<"Now Front Element: "<<cq.front()<<"\n";
    cq.dequeue();
    cout<<"Now Front Element: "<<cq.front()<<"\n";
    cq.dequeue();
    cout<<"Now Front Element: "<<cq.front()<<"\n";
    cq.dequeue();


    //String example
    Queue<string> sq;
    sq.enqueue("Hi");
    sq.enqueue("I am ");
    sq.enqueue("poor programmer");
    cout<<"Example String ------------------\n";


    cout<<"Now Front Element: "<<sq.front()<<"\n";
    sq.dequeue();
    cout<<"Now Front Element: "<<sq.front()<<"\n";
    sq.dequeue();
    cout<<"Now Front Element: "<<sq.front()<<"\n";
    sq.dequeue();

    //Double example
    Queue<double> dq;
    dq.enqueue(25.20);
    dq.enqueue(20.30);
    dq.enqueue(302.2);
    cout<<"Example Double ------------------\n";

    cout<<"Now Front Element: "<<dq.front()<<"\n";
    dq.dequeue();
    cout<<"Now Front Element: "<<dq.front()<<"\n";
    dq.dequeue();
    cout<<"Now Front Element: "<<dq.front()<<"\n";
    dq.dequeue();

    return 0;
}
