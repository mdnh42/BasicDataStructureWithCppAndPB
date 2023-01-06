#include <bits/stdc++.h>
using namespace std;
class Cuboid
{
private:
    int length;
    int width;
    int height;
public:
    Cuboid()
    {
        length=0;
        width=0;
        height=0;
    }
    Cuboid(int length, int width,int height)
    {
        this -> length = length;
        this -> width = width;
        this -> height = height;
    }
    void print()
    {
        cout << endl;
        cout << "[ Length: " << this->length<< " ,";
        cout << "Width: " << this->width << " ,";
        cout <<"Height: " << this->height << " ]";
        cout << endl << endl;
    }
    int getVolume()
    {
        return length*width*height;
    }
    int getSurfaceArea()
    {
        return 2*length*width+2*length*height+2*height*width;
    }
};
bool compareByVolume(Cuboid a, Cuboid b)
{
    return a.getVolume() < b.getVolume();
}
bool compareBySurfaceArea(Cuboid a, Cuboid b)
{
    return a.getSurfaceArea() < b.getSurfaceArea();
}
int main()
{
    vector<Cuboid> cuboids(5);
    cuboids[0] = Cuboid(1, 2, 3);
    cuboids[1] = Cuboid(2, 3, 4);
    cuboids[2] = Cuboid(3, 4, 5);
    cuboids[3] = Cuboid(4, 5, 6);
    cuboids[4] = Cuboid(5, 6, 7);
    sort(cuboids.begin(),cuboids.end(),compareByVolume);
    for (int i = 0; i < 5; i++)
    {
        cout << "Volume: " << cuboids[i].getVolume() << endl;
    }
    sort(cuboids.begin(),cuboids.end(),compareBySurfaceArea);
    for (int i = 0; i < 5; i++)
    {
        cout << "Surface area: " << cuboids[i].getSurfaceArea() << endl;
    }
    return 0;
}
