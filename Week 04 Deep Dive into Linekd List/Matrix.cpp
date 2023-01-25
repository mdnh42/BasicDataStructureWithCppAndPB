#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    cin>>n; 
    list<int> l; 

    for(int i=0; i<n; i++)
    {
        l.push_back(i); 
    }

    for (size_t i = 0; i < count; i++)
    {
        if((i+1)%2 != 0)
        {
            for(int j=0; j<n; j++)
            {
                if((j+1)%2 != 0)
                {
                    grid[i][j] = l.back();
                    l.pop_back(); 
                }
            }
        }
    }
    
    return 0; 

}