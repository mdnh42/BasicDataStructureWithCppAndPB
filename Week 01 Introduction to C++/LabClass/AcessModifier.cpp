#include<bits/stdc++.h>
using namespace std;

class Student
{
private:a
    string name;
public:

    int std_id;
    int age;
    string f_name;
    string m_name;

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
};


int main()
{
    Student s;
    s.f_name = "MD Nur Hasan";
    s.print_info();
    s.setinfo("A", 10, 20);
    s.print_info();


    return 0;
}
