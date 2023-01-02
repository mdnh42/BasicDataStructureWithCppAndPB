#include<bits/stdc++.h>
using namespace std;
class User{
protected:
    string name;
    int age;
};

class Admin: User{
    private:
    string designation;

    public:
        void Set(string s, int ag, string dg)
        {
            name = s;
            age =ag;
            designation = dg;
        }
        void print()
        {
            cout<<name<<"\n";
            cout<<age<<"\n";
            cout<<designation<<"\n";
        }

};


int main()
{
    Admin ad;

    ad.Set("A", 20, "ajdl");

    ad.print();
    return 0;
}

