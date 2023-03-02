#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {5, 2, 10, 6, 7, 13};
    int s_data = 20;
    int found = 0;
    for(int i=0; i<vec.size(); i++)
    {
        if(vec[i] == s_data)
        {
            found++;
            break;
        }
        else
        {

        }
    }

    if(found == true)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Data Not Found\n";
    }
    return 0;
}
