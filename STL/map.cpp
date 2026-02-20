#include<map>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    map<string,int> m;
    m["Student"] = 20;
    m["Teacher"] = 50;
    cout << m.size() << endl;
    cout << m["Student"] << endl;
    map<string,int>::iterator it;
    it = m.begin();
    cout << it->first << endl;
}