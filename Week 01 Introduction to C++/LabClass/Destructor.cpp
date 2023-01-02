
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
    ~Student()
    {
        cout<<"Called";
        print_info();
    }
};

class Person{
public:
    string name;
    Person *father, *mother;
    Person()
    {
        father = NULL;
        mother = NULL;

    }
    Person(string name, string f_name, string m_name)
    {

        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }
    void print_info()
    {
        cout<<"name = "<< name<<"\n";
        cout<<"Father name = "<<father->name<<"\n";
        cout<<"Mother name = "<<mother->name<<"\n";
    }
    ~Person()
    {
        cout<<"Called\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }
};


int main()
{
    Person p("A", "B", "c");
    p.print_info();
    return 0;
}

