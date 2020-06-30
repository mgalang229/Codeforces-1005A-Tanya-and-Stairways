#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a[1000], n;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	int f = 0;	
	for(int i = 0; i < n; i++){
		if(a[i] == 1) f++;
	}
	cout << f << "\n";
	int cnt = 1;
	for(int i = 1; i < n; i++){
		if(a[i] > a[i-1]) cnt++;
		else{
			cout << cnt << " ";
			cnt = 1;
		}
	}
	cout << a[n-1] << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	solve();
	return 0;
}