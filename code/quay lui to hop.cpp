#include <bits/stdc++.h>
using namespace std;
#define ll long long


void testcase(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}



int n,k,ar[100],check[100]={0};
void xuat(){
	for(int i=1;i<=k;i++){
		cout<<ar[i];
	}
	cout<<endl;
}
// thuat toan sinh 
void solve(int i){
	for(int j=ar[i-1]+1;j<=n-k+i;j++){
		ar[i] = j;
		if(i==k) xuat();
		else solve(i+1);
	}
}
int main(){
	cin>>n>>k;
	// sinh cau hinh dau tien 
	// for(int i=1;i<=k;i++) ar[i]=i;
	solve(1);
} 