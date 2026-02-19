#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec;
    bool isEmpty;
    isEmpty = vec.empty();
    cout << isEmpty << endl;

    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec[2] << endl;

    vec.insert(vec.begin()+2,10);
    vec.insert(vec.begin()+5,10,11);
    vec.pop_back();

    vec.erase(vec.begin()+1,vec.begin()+10);
    vec.erase(vec.begin()+2);

    vec.resize(6);

    // vec.clear();

    reverse(vec.begin(),vec.end());

    vec[1] = 5;
    vec[2] = 8;
    vec[3] = 7;

    sort(vec.begin(),vec.end());




    for(int i = 0; i < vec.size();i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    





}