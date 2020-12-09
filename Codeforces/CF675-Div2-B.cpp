    #include <bits/stdc++.h>
    using namespace std;
    long long maxi(long long a, long long b); 
    long long mini(long long a, long long b);
    int main() {
    	long long n,a,b,c,d,ans=0;
    	cin>>n>>a>>b>>c>>d;
    	long long  x,y;
    	x=c-b; y=d-a;
    	long long r=maxi(0,maxi(maxi(x,y),x+y));
    	long long s=mini(n,mini(mini(n+x,n+y),n+x+y));
    	if(s<r) n=0;
    	cout<<(s-r)*n<<endl;
    	return 0;
    }
    long long maxi(long long a, long long b){
    	if (a>b) return a;
    	return b;
    }
    long long mini(long long a, long long b){
    	if (a<b) return a;
    	return b;
    }
