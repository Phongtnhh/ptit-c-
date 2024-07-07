#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	int n; cin >> n;
	while(n--){
		ll a; cin >> a;
		map<ll,int>m;
		for(ll i = 2;i <= sqrt(a);i++){
			while(a%i == 0){
				cout << i <<" ";
				a /= i;
			}
		}
		if(a > 1) cout << a;
		cout << endl;	   
	}
    return 0;
}

