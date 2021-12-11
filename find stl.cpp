#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5]={7,2,3,4,5};
	int index = find(arr,arr+5,2)-arr;
	if(index<5)
	cout<<"found at position:"<<index<<"\n";
	else
	cout<<"not fond\n";
	return 0;
}
