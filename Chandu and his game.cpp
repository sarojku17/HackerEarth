#include<bits/stdc++.h>
using namespace std;
int main(){
long n,k;
cin>>n>>k;
vector<long>X(k),Y(k);
for(int i=0;i<k;i++)
    cin>>X[i];
for(int i=0;i<k;i++)
    cin>>Y[i];
long sol=0;
long temp1,temp2,temp3,temp4;
for(int i=0;i<k;i++)
{
    temp1=abs(1-X[i])+abs(1-Y[i]);
    temp2=abs(n-X[i])+abs(1-Y[i]);
    temp3=abs(1-X[i])+abs(n-Y[i]);
    temp4=abs(n-X[i])+abs(n-Y[i]);

    sol+=min(temp1,min(temp2,min(temp3,temp4)));
}
cout<<sol<<endl;

}
