#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string f_name;
    string m_name;

    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<f_name<<" "<<m_name<<"\n";
    }
};

int main()
{
    Student s;
    s.name = "MD Nur Hasan";
    s.std_id = 140;
    s.age = 24;
    s.f_name = "Mozaffar";
    s.m_name = "Nasima";

    s.print_info();

    Student s2;
    s2.name = "MD Nur Hasan";
    s2.std_id = 140;
    s2.age = 24;
    s2.f_name = "Mozaffar";
    s2.m_name = "Nasima";

    s2.print_info();

    return 0;
}
