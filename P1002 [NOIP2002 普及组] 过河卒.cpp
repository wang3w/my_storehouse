// Problem: P1002 [NOIP2002 普及组] 过河卒
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1002
// Memory Limit: 125 MB
// Time Limit: 1000 ms
// 1≤bx,by≤20;0≤hx,hy≤20
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std;
bool vis[25][25];
long long dp[25][25];
int main()
{
	dp[1][1]=1;
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	n++;m++;x++;y++;
	vis[x][y]=1;vis[x-2][y-1]=1;vis[x-2][y+1]=1;
	vis[x+2][y-1]=1;vis[x+2][y+1]=1;vis[x-1][y+2]=1;
	vis[x-1][y-2]=1;vis[x+1][y+2]=1;vis[x+1][y-2]=1;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++) 
		{
			if((i!=1||j!=1)&&!vis[i][j])
				 dp[i][j]=dp[i-1][j]+dp[i][j-1];
		}
	cout<<dp[n][m];
	return 0;
}