#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int numTestCase;
    cin >>numTestCase;
 
    for(int tc = 0; tc < numTestCase; tc++)
    {
        int n, diff;
        cin>>n>>diff;
 
        vector<int> arr(2*n);
        for(int i =0; i < 2*n; i++)
        {
            cin>>arr[i];
        }
 
        sort(arr.begin(), arr.end());
 
        bool isFeasible = true;
 
        for(int i = 0; i < n; i++)
        {
            if((arr[n+i] - arr[i]) < diff)
            {
                isFeasible = false;
                break;
            }
        }
 
        if(isFeasible)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
 
    return 0;
}
