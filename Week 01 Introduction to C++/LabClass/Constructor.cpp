
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

    Student(string s, int id, int ag, string f_na, string m_na)
    {
        name =s ;
        std_id = id;
        age = ag;
        f_name = f_na;
        m_name = m_na;
    }
    void print_info()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<f_name<< " "<< m_name<<"\n";
    }

    void setinfo(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age =ag;
    }

    Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
};


int main()
{
    Student s("a", 10, 20, "b", "c");
    s.print_info();

    Student s2("R", 10, 20);
    s2.print_info();
    return 0;
}
