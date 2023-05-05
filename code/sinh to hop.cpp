#include <bits/stdc++.h>
using namespace std;
#define ll long long


void testcase(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
}



int n,k,ar[100];
int main(){
	cin>>n>>k;
	// khoi tao cau hinh dau tien
	for(int i=1;i<=k;i++) ar[i]=i;
	// sinh to hop
	while(1){
		// in ra 
		for(int j=1;j<=k;j++) cout<<ar[j];
		cout<<endl;
		int i=k;
		while(i>0 && ar[i]==n-k+i){
			i--;
		}
		if(i==0) break;
		else{
			ar[i]++;
			for(int j=i+1;j<=k;j++) ar[j]= ar[i]+(j-i);
		}
	}
}