// 1/2 AC
#include<iostream>


using namespace std;
int n,k;
int ans = 0;
void dfs(int st,int last,int l)
{
    if(l==0&&st<k-1)return;
    if (last > l) return;
    if(st==k-1)
    {
        if(l<last)return;
        else {
            ans++;
            return;
        }
    }
    for(int i = last;i<=l;i++)
    {
        dfs(st+1,i,l-i);
    }
}
int main()
{
    
    cin >> n >> k;
    dfs(0,1,n);
    cout << ans << endl;

}
