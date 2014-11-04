#include <bits/stdc++.h>
using namespace std;

int n;
//vector <int> vec(n,0);
int dp[1000];

int solve(int n){
	
	if(n==1)
	return 1;
	
	if(n==0)
	return 1;
	
	if(dp[n] == -1)
	return dp[n] = 1 + solve(n-2) + solve(n-1);
	else
	return dp[n];
	
	}


int main(){
	cin >> n;
	memset(dp,-1,sizeof(dp));
	cout<< solve(n) << endl;
	return 0;
	}
