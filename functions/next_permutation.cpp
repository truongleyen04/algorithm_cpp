#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> v = {1,2,3};
    
    while (next_permutation(v.begin(),v.end()))
    {
        for(auto i : v)
        {
            cout << i << " " ;
        }
        cout << endl;
    }
    


}