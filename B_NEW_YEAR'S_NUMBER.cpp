/******************************************************************************
 * BRIZZZ
*************************************/
 
// string to int ---> stoi()
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll tt=0;
	cin>>tt;
	while(tt-->0){
	   ll n;
	   cin>>n;
	   ll ans = n%2020;
	   ll ans1 = n/2020;
	   if(ans>ans1) cout<<"NO"<<endl;
	   else cout<<"YES"<<endl;
	}
}