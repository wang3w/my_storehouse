// Problem: P1706 全排列问题
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1706
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
#include <iomanip>
#include <iostream>
using namespace std;
int n,a[10],vis[10];
int dfs(int);
int main()
{
	cin>>n;
	dfs(1);
}
int dfs(int step)
{
	if(step>n){
		for(int i=1;i<=n;i++) {
			cout<<setw(5)<<a[i];
		}cout<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			a[step]=i;
			dfs(step+1);
			vis[i]=0;
		}
	}
}