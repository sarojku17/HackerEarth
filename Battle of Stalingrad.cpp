#include<bits/stdc++.h>
using namespace std;

int CalcArea(int x1,int y1,int x2,int y2,int x3,int y3){

return abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));

}
int main(){

int t;
cin>>t;
int x1,x2,x3,x4,y1,y2,y3,y4;
while(t--){
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int area1=CalcArea(x1,y1,x2,y2,x3,y3);
    int area2=CalcArea(x4,y4,x2,y2,x3,y3);

    int area3=CalcArea(x1,y1,x4,y4,x3,y3);
    int area4=CalcArea(x1,y1,x2,y2,x4,y4);
    if(area1==area2+area3+area4)
        cout<<"Inside"<<endl;
    else
    cout<<"Outside"<<endl;


}



}
