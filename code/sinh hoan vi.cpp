#include <bits/stdc++.h>
using namespace std;
#define ll long long


void testcase(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}



int n,k,ar[100];
int main(){

	cin>>n;
	// tao cau hinh dau tien 
	for(int i= 1;i<=n;i++) ar[i] = i;
	// sinh hoan vi
	while(1){
		// in cau hinh
		for(int i=1;i<=n;i++) cout<<ar[i];
		cout<<endl;
		int k=n-1,l=n;
		while(ar[k] > ar[k+1] && k>0) k--;
		// cout<<k;
		if(k==0) break;
		else {
			while( ar[k] >ar[l] && l>=k+1) l--;
			// cout<<l;
			swap(ar[k],ar[l]);
			// lat nguoc
			// for(int i=n,j=k+1;i>j;i--,j++) swap(ar[i],ar[j]);
			int i=n,j=k+1;
			while(i>j) {
				swap(ar[i],ar[j]) ;
				i--;j++;
			}
		}
	}
} 