/******************************************************************************
 * BRIZZZ
*************************************/
 
// string to int ---> stoi()
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


code is incomplete
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    
    char aa =s[0];
    ll curr=1;
    ll pastl;
    for(int i=1;i<s.length();i++){
        
        if(i==s.length()-1 && curr>=3){
            s=s.substr(0,i-curr+2);
        }
        else if(s[i]!=aa && curr>=3){
            aa=s[i];
            s=s.substr(0,i-curr+2)+s.substr(i);
            i=i-curr+2;
            curr=1;
        }
        else if(s[i]!=aa && curr<3){
            aa=s[i];
        }
        else if(s[i]==aa) curr++;
    }

    cout<<s<<endl;
    
}
