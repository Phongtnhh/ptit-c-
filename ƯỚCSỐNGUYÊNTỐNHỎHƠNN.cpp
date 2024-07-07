#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector <bool> isPrime(10e6, true);
void prime(){
	isPrime[0] = isPrime[1] = false;
	for(int i = 2;i*i <= 10e6;i++){
		if(isPrime[i]){
			for(int j = i* i;j <= 10e6;j += i){
				isPrime[j] = false;
			}
		}
	}
}
int main() {
	int n; cin >> n;
	prime();
	while(n--){
		int a; cin >> a;
		for(int i = 1;i <= a;i++){
			if(isPrime[i]) cout << i << " ";
		}
		cout << endl;	   
	}
    return 0;
}

