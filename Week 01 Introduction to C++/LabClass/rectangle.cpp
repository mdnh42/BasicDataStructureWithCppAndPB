#include<bits/stdc++.h>
using namespace std;

class Rectangle{
public:
    int width, height;

    // Area Calculate
    int calculate_area()
    {
        return height * width;
    }

    int calculate_perimeter()
    {
        return 2*(height + width);
    }

};
int main()
{

    Rectangle r1, r2;
    r1.height = 4;
    r1.width = 8;
    cout<<r1.calculate_area()<<"\n";
    cout<<r1.calculate_perimeter()<<"\n";

    r2.height = 3;
    r2.width = 9;
    cout<<r2.calculate_area()<<"\n";
    cout<<r2.calculate_perimeter()<<"\n";

    return 0;
}
