#include<list>
#include<iostream>
using namespace std;
int main()
{
    list<int> l;
    for(int i = 1;i<10;i++)
    {
        l.push_back(i);

    }
    auto it = l.begin();
    it++;
    it++;
    l.erase(it);
    
    for(auto i : l)
    {
        cout << i << endl;

    }
}