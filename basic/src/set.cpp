#include<set>
#include<iostream>
using namespace std;

int main()
{
    set<pair<double,int>> a;
    a.insert(make_pair(1.2,2));
    a.insert(make_pair(1.2,1));
    a.insert(make_pair(1.5,0));
    
    cout<<"a.size is: "<<a.size()<<endl;
    
    // set<pair<double,int>>::iterator it;
    for(auto it=a.begin();it!=a.end();++it) {
      cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
