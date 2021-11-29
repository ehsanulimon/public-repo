#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    
    
    map<string,int> m;

    int Q,i,type;
    string key;
    cin>>Q;
    int y;
    
   
    for(i=0;i<Q;i++)
    {
      cin>>type>>key; 
        
        if(type==1)
        {
            
            
            cin>>y;
            
            m[key]+=y;
        }
          else if(type==2)
        {
           
            
            m.erase(key);
        }
           
        else {
           
               
             cout<<m[key]<<endl;
                    
    
            
        }
        
        
    }}      
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

