#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll F[93];
void Fibo(){
	F[1] = F[2] = 1;
	for(int i = 3;i <= 92;i++){
		F[i] = F[i-1] + F[i-2];
	}
}
int main(){
	int test; cin >> test;
	Fibo();
	while(test--){
		int n; cin >> n;
		cout << F[n] << endl;
	}
}
