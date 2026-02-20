// 1/1 AC

#include<iostream>
#include<string>

using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans1 = 0,ans2 = 0;
    for(int i = 0;i<n-1;i++)
    {
        if(s[i]=='V'&&s[i+1] == 'K')
        {
            ans1++;
        }
    }
    string b;
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans2 = 0;
        b = s;
        if(b[i]=='V')
        {
            b[i] = 'K';
        }
        else{
            b[i] = 'V';
        }
        for(int j = 0;j<n-1;j++)
        {
            if(b[j]=='V'&&b[j+1] == 'K')
            {
                ans2++;
            }
        }
        ans = max(ans,max(ans1,ans2));
    }
    cout << ans << endl;



}