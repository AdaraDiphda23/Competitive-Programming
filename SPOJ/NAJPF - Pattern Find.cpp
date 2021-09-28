#include<bits/stdc++.h>
using namespace std;

string word , pattern;

void found_pattern (string s){
	vector<int> pi (s.size(),0);
	vector <int> appears(0,0);
	for (int i = 1, j = 0 ; i < s.size() ; i++){
		while(j>0 and s[i]!=s[j]) j=pi[j-1];
		if (s[i]==s[j]) j++;
		pi[i]=j;
		if(j==pattern.size()){
			appears.push_back(i-2*j+1);
		}
	}
	if(appears.size() == 0) cout<<"Not Found";
	else {
		cout<<appears.size()<<endl;
		for (auto i:appears) cout<<i<<" ";
	}
	cout<<"\n\n";
}
int main(){
	int cases;
	scanf("%d" , &cases);
	for(int i = 0 ; i < cases ; i++){
		cin>>word>>pattern;
		found_pattern(pattern+'0'+word);
	}
}
