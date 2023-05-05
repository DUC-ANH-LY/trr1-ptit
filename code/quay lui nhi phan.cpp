#include <bits/stdc++.h>
using namespace std;
#define ll long long


void testcase(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}



int n,k,ar[100];
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<ar[i];
	}
	cout<<endl;
}


void solve(int i){
	for(int j=0;j<=1;j++){
		ar[i] =j;
		if(i==n) xuat();
		else solve(i+1);
	}
}
int main(){
	cin>>n;
	// for(int i=0;i<=n;i++) ar[i] =0;
	solve(1);
} 