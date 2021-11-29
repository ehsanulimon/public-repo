#include<math.h>
#include<vector>
#include <iostream>

using namespace std;

int main()
{
       int n,x;
       cout<<"vector size input:";
       cin>>n;
      // vector<int>vec(n,x);
      vector<int>vec;
       cout<<"\nvector element input:"<<endl;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        vec.push_back(x);

    }


   cout<<" output ";
   for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<endl;
   }
    return 0;
}
