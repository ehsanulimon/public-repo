#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int myints,n,q,temp;
    vector<int> v;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
         v.push_back(temp); 
    }
    sort (v.begin(), v.end());
     vector<int>::iterator low,up;
       cout<<"q input"<<endl;
        cin>>q;
    cout<<endl;
     for(int i=0;i<q;i++){
     	cin>>myints;
     	 vector<int>::iterator low = lower_bound(v.begin(), v.end(), myints);
     	 if (v[low - v.begin()] == myints)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
	 }
	  
   
   
    return 0;
}

