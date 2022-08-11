// Problem: Problem 2. Sleepy Cow Sorting
// Contest: USACO - USACO 2019 January Contest, Bronze
// URL: http://www.usaco.org/index.php?page=viewproblem2&cpid=892
// Memory Limit: 256 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main()
{
	int n;
	cin>>n;
	vector<int> cows(n);
	for(int i=0;i<n;i++)
	{
		cin>>cows[i];
	}
	int ret=n-1;
	for(int i=n-2;i>=0;i--)
	{
		if(cows[i]<cows[i+1])
		{
			ret=i;
		}
		else
		{
			break;
		}
	}
	cout<<ret<<endl;
}


