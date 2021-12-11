#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,s,arr[100];
	cin>>n;
	cout<<"array";
	for(int i=1;i<n;i++){
		cin>>arr[i];
	}
	cout<<"find element ";
	cin>>s;
	int index = find(arr,arr+5,s)-arr;
	if(index<n)
	cout<<"found at position:"<<index<<"\n";
	else
	cout<<"not fond\n";
	return 0;
}
