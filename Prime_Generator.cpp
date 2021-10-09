#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool ans(int a){
	if(a == 1)
		return 0;
	for(int i = 2; i <= sqrt(a); i++)
		if(a % i == 0)
			return 0;
	return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n;
		cin >> m >> n;
		for(int i = m; i <= n; i++)
			if(ans(i))
				cout << i << '\n';
        cout<<endl;
	}
}