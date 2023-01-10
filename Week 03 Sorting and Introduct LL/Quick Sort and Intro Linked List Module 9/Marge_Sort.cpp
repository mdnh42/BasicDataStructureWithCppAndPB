#include<bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int>a)
{

        // base Case
        if(a.size()<=1)
        {
            return a;
        }
        int mid = a.size()/2;
        vector<int>b;
        vector<int>c;
        for(int i=0; i<mid; i++)
            b.push_back(a[i]);

        for(int i= mid; i<a.size(); i++)
            c.push_back(a[i]);

        //recursion
        vector<int> sorted_b = merge_sort(b);
        vector<int> sorted_c = merge_sort(c);

        vector<int> sorted_a;
        int idex1= 0;
        int idex2 = 0;
        for(int i = 0; i<a.size();i++)
        {
            if(idex1 == sorted_b.size())
            {
                sorted_a.push_back(sorted_c[idex2]);
                idex2++;
            }
            else if(idex2 == sorted_c.size())
            {
                sorted_a.push_back(sorted_c.size());
                idex2++;
            }

            else if(sorted_b[idex1] <sorted_c[idex2])
            {
                sorted_a.push_back(sorted_b[idex1]);
                idex1++;
            }
            else
            {
                sorted_a.push_back(sorted_c[idex2]);
                idex2++;
            }
        }
        return sorted_a;

}


int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];

    vector<int>ans = merge_sort(a);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<< " ";
    return 0;
}
