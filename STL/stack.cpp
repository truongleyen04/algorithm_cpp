#include<stack>
#include<iostream>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    cout << "the size of s is :";
    cout << s.size() << endl;
    int size = s.size();

    for(int i = 0;i<size;i++)
    {
        cout << s.top() << endl;
        s.pop();


    }
    if(s.empty()==true)
    {
        cout << "True" <<endl;

    }
    else{
        cout << "False" << endl;
    }
}