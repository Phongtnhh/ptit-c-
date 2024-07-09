#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1000000007;
int main() {
    int test;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        int res = 0;
        for(int i = 1;i <= n;i++){
        	res += i%k;
		}
		if(res == k) cout << 1 << endl;
		else cout << 0 << endl;
    }
}
