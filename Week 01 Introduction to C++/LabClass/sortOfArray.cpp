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
bool comp(Student a, Student b)
{
    //When a is less than b
    return a.std_id<b.std_id;
}

int main()
{
    vector<Student>a;
    for(int i=0; i<10; i++)
    {
        a.push_back(Student("a", 20-i, 20));
    }

    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }

    cout<<"After sorting\n";
    sort(a.begin(), a.end(), comp);
    for(int i=0; i<10; i++)
    {
        a[i].print_info();
    }
    return 0;
}



