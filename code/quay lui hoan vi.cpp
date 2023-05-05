#include <bits/stdc++.h>
using namespace std;
#define ll long long


void testcase(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}



int n,k,ar[100],check[100];
void xuat(){
	for(int i=1;i<=n;i++){
		cout<<ar[i];
	}
	cout<<endl;
}


void per(int i){
	for(int j=1;j<=n;j++) {
		if(check[j]==0) {
			check[j] =1;
			ar[i] =j;
			if(i==n) xuat();
			else per(i+1);
			check[j] =0;
		}
	}
}
int main(){
	cin>>n;
	// sinh cau hinh dau tien 
	for(int i=1;i<=n;i++) ar[i] =i;
	// sinh

	per(1);
} 