#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,k,num, init;
	scanf("%d%d",&n,&k);
	set <int> val;
	map <int,int> N;
	int A [100005];
	A[0]=-1e9;
	for(int i=1 ; i<=n; i++){
		scanf("%d",&A[i]);
		N[A[i]]++;
		if (N[A[i]]==1) val.insert(A[i]);
		else val.erase(A[i]);
		if (i<k) continue;
		N[A[i-k]]--;
		if (N[A[i-k]]==1) val.insert(A[i-k]);
		else val.erase(A[i-k]);
		(val.empty())? printf("Nothing\n"):printf("%d\n",*val.rbegin());
	}
	return 0;
}
