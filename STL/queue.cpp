#include<queue>
#include<iostream>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    cout << q.front() << endl;
    cout << q.back() << endl;
}