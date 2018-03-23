#include<bits/stdc++.h>
using namespace std;
map<int,long long>bag;
long long solve(long long  n){

if(n==0||n==1)
    return n;
if(bag.find(n)!=bag.end())
    return bag[n];

long long x=max(n,solve(n/2)+solve(n/3)+solve(n/4));
bag[n]=x;

return bag[n];

}
int main(){
long long n;
while(!cin.eof()){
cin>>n;
cout<<solve(n)<<endl;
}
}
