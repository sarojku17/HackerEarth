#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int temp;
int counter=0;
int arr[1000001]={0};
for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(arr[temp]==0)
            counter++;
        arr[temp]++;
    }
cout<<((long long)counter*(long long)(counter-1))/2<<endl;
}
