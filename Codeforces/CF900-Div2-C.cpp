#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,aux=0,total=0;
	scanf("%d",&n);
	vector<bool> record (n, false);
	record[0]=true;
	int pos[n+1], num[n];
	for (int i=0; i<n; i++){
		scanf("%d",&num[i]);
		pos[num[i]]=i;
	}
	set<int>all;
	vector<int> rec_gen(n,0);
	all.insert(num[0]);
	int ans=0;
	for (int i=1 ; i<n ; i++){ //función para rellenar los record generados[número a eliminar] y evaluar si un número es record o no
		if (*all.rbegin() < num[i]) record[i]=true;
		all.insert(num[i]);
		if(num[i]==*++all.rbegin()) rec_gen[pos[*all.rbegin()]]++;
	}
	for (int i=1 ; i<n ; i++) {
		if (rec_gen[ans]-record[ans]<rec_gen[i]-record[i])
			ans=i;
		else if(rec_gen[ans]-record[ans]==rec_gen[i]-record[i] and num[ans]>num[i]) 
			ans=i;
	}
	printf("%d",num[ans]);
	return 0;
}
