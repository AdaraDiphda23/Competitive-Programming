    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t,n,l,r;
        cin>>t;
        for (int i=0; i<t; i++){
             cin>>n;
             for(int k=1, j=1; j<=n; k++,j++){
             	cin>>l>>r;
            	if (l>k) k=l;
                (k<l || k>r)? k--, cout<<0<<" ":cout<<k<<" ";
             }
             cout<<endl;
        }
        return 0;
    }
