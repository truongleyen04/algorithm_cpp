#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<int> s;
    for(int i = 1;i<10;i++)
    {
        s.insert(5);
    }
    cout << s.size() <<endl;
}