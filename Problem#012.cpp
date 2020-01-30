#include <bits/stdc++.h>
using namespace std;
int main(void){
    int x; // number of stairs can be climbed 
    cin>>x; // 2 by default
    vector<int>possible(x);
    for(auto &itr:possible){
        cin>>itr;
    }
    int n; // nth stair final
    cin>>n;
    vector<int>dp(n+2);
    for(int i=1;i<=n;++i){
        dp[i]=0;
        for(auto &itr:possible){
            if(itr==i){
                dp[i]+=1;
            }
            if(itr>i){
                break;
            }
            dp[i]+=(i-itr>=0)?dp[i-itr]:0;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
