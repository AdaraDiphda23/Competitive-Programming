    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    ll maxim(ll a, ll b);
    int main(){
    	int n;
    	cin>>n;
    	map <ll,ll> A;
    	ll aux,sum=0,ans=0;
    	for(int i=0; i<n; i++){
    		cin>>aux;
    		sum+=aux;
    		ans=maxim(ans,++A[sum]);
    	}
    	cout<<n-ans;
    }
    ll maxim(ll a, ll b){
    	if (a>b) return a;
    	return b;
    }
