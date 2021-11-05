#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll choco(ll x[], ll y[], ll m, ll n){
    
    ll i=0, j=0;
    ll hr=1, vert=1;
    ll res=0;
    
    
    sort(x, x+m, greater<int>());
    sort(y, y+n, greater<int>());
    
    while(i<m && j<n){
        if(x[i]>y[j]){
            res+=x[i]*hr;
            i++;
            vert++;
        }
        else{
            res+=y[j]*vert;
            j++;
            hr++;
        }
    }
    
    
    ll total=0;
    
    while(i<m){
        total+=x[i];
        i++;
    }
    
    res += total*hr;
    
    total=0;
    while(j<n){
        total+=y[j];
        j++;
    }
    
    res += total*vert;
    
    
    return res;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll tt=0;
	cin>>tt;
	while(tt-->0){
	    ll m,n;
	    cin>>m>>n;
	    ll x[m-1];
	    ll y[n-1];
	    
	    for(int i=0;i<m-1;i++) cin>>x[i];
	    for(int i=0;i<n-1;i++) cin>>y[i];
	    
	    ll ans = choco(x,y,m-1,n-1);
	    
	    cout<<ans<<endl;
	}
}