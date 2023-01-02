
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
    Student *s = new Student("a", 10, 20);
    s->print_info();

    return 0;
}


