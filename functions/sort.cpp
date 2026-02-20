#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
bool comp(int a,int b)
{
    if(b<a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    vector<int> a = {3,7,6,8,4,5,9,2,1,5,7,8};
    sort(a.begin(),a.end(),comp);
    for(auto i : a)
    {
        cout << i << endl;
    }
}