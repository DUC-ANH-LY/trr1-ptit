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
int main(){
	cin>>n;
	for(int i=1;i<=n;i++ ) ar[i] =0;
	while(1){
		xuat();
		int i=n;
		while(i>0 && ar[i] == 1) i--;
		if(i==0) break;
		else {
			ar[i] = !ar[i];
			for(int j=i+1;j<=n;j+n+) ar[j] =!ar[j];
		}
	}
	
} 