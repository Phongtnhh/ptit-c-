#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1000000007;
int main() {
    int test;
    cin >> test;
    while(test--)
    {
        int a,m,kt=0;
        cin>>a>>m;
        for(int i=0;i<m;i++)
            if( (a*i) % m == 1)
            {
                cout<<i<<endl;
                kt=1;
            }
        if(kt==0)cout<<"-1"<<endl;
    }
}
