#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main(){
    ll tt;
    cin>>tt;
    
    while(tt-->0){
        ll a,b;
        cin>>a>>b;
        int count =1;
        a+=3;
        b+=2;
        int pl = 1;
        while(a>0 && b>0){
            if(pl==1){
                if(a-5>0 && b-10>0){
                    a-=5;
                    b-=10;
                    pl=3;
                    count++;
                }
                else if(a-20>0 && b+5>0){
                    a-=20;
                    b+=5;
                    pl=2;
                    count++;
                }
                else{
                    break;
                }
            }
            else{
                pl=1;
                a+=3;
                b+=2;
                count++;
            }
            
        }
        cout<<count<<endl;
    }
}