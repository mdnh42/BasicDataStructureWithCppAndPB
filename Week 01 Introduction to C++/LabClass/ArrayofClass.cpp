#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string f_name;
    string m_name;
    Student()
    {

    }
    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age= age;
    }

    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<f_name<< " "<< m_name<<"\n";
    }


};


int main()
{
    int a[10];
    Student s[10];
    for(int i=0; i<10; i++)
    {
        s[i] = Student("A", i, 20);

    }

    for(int i=0; i<10; i++)
    {
        s[i].print_info();

    }
    return 0;
}


