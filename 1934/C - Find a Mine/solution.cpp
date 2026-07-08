#include <bits/stdc++.h>
using namespace std;
int query(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
 
    int c;
    cin>>c;
    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
 
        int a=query(1,1);
 
        int xd1=max(1,a+2-m),yd1=a+2-xd1;
        int yd2=max(1,a+2-n),xd2=a+2-yd2;
 
        int ad1=query(xd1,yd1);
        int ad2=query(xd2,yd2);
 
        if(ad1==0){
            cout<<"! "<<xd1<<" "<<yd1<<endl;
            continue;
        }
        if(ad2==0){
            cout<<"! "<<xd2<<" "<<yd2<<endl;
            continue;
        }
 
        //on diagonal
        int xp1=xd1+(ad1/2),yp1=yd1-(ad1/2);
        int xp2=xd2-(ad2/2),yp2=yd2+(ad2/2);
 
        if(query(xp1,yp1)==0){
            cout<<"! "<<xp1<<" "<<yp1<<endl;
        }
        else{
            cout<<"! "<<xp2<<" "<<yp2<<endl;
        }
    }
    return 0;
}