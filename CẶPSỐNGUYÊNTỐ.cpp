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
int main(){
	int test; cin >> test; 
	prime();
	while(test--){
		int n; cin >> n;
		for(int i = 2; i <= n/2;i++){
			if(isPrime[n-i] == true && isPrime[i]==true){
				cout << i << " "<<n-i;
				cout << endl;
				break;
			}
		}
	}
}