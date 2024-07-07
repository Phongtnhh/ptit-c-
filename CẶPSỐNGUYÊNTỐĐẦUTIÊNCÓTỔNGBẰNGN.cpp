#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<bool> isPrime(10e6, true);
void prime(){
    isPrime[0] = isPrime[1] = false; 
    for (int i = 2; i * i <= pow(10,6); ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 10e6; j += i) {
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
		int ok = 0;
		for(int i = 2;i <= a/2;i++){
			if(isPrime[i]){
				if(isPrime[a-i]){
					cout << i <<" "<< a-i << endl;
					ok = 1;
					break;
				}
			}
		}
		if(ok == 0) cout << -1 << endl;    
	}
    return 0;
}

