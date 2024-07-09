#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1000000007;
int main() {
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i=0;i < n;i++) cin >> A[i];
        sort(A,A+n);
        int res = 10e9;
        for (int i = 0;i < n-1;i++){
    		if(res > A[i+1]-A[i]){
    			res = (A[i+1]-A[i]);
			}
		}
		cout << res << endl;
    }
}