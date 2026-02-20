// 1/1 AC 
// dp[j][i] = dp[j-1][i-1] + dp[j-i][i];
#include<iostream>


using namespace std;
int dp[210][8];
int main()
{
    int n,k;
    cin >> n >> k;
    
    for(int i = 1;i<=6;i++)
    {
        dp[i][i] = 1;
    }
    for(int i = 1;i<=n;i++)
    {
        dp[i][1] = 1;
    }
    for(int i = 2;i<=k;i++)
    {
        for(int j = i+1;j<=n;j++)
        {
            dp[j][i] = dp[j-1][i-1] + dp[j-i][i];
        
        }
    }
    cout << dp[n][k]  << endl;


}