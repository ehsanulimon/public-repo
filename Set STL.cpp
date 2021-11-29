#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    set<int> s;  
    int Q,i,type;
    cin>>Q;
    int x;
    for(i=0;i<Q;i++)
    {
      cin>>type>>x;   
        if(type==1)
        {
    
            s.insert(x);
        }
          else if(type==2)
        {
  
            s.erase(x);
        }
           
        else {
  
             if(s.find(x)==s.end())
             {
                 cout<<"No"<<endl;
             }
               
               else {
               cout<<"Yes"<<endl;
               }     
     
        }

    }      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

