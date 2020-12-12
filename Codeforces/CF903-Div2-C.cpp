#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=-1;
    cin>>n;
    map <int,int> boxes;
    while(cin>>n) ans=max(ans,++boxes[n]);
    cout<<ans<<endl;
    return 0;
}
