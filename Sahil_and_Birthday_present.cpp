#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int temp;
set<int> bag;
for(int i=0;i<n;i++)
    {
        cin>>temp;
        bag.insert(temp);
    }
cout<<((long long)bag.size()*(long long)(bag.size()-1))/2<<endl;
}
