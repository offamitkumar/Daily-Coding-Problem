#include <bits/stdc++.h>
using namespace std;
#define int int64_t
void interleave (stack<int>&s) {
    queue<int>q; 
    while (!s.empty()) {
        q.push(s.top()); s.pop();
    }
    int f = q.size(); 
    int n = f/2+(f&1);
    for (int i=0; i<n; ++i) {
        s.push(q.front()); 
        q.pop();
    }
    while (!s.empty()) {
        if (f&1) {
            q.push(s.top()); 
            s.pop();
            if (!s.empty()){
                q.push(q.front()); 
                q.pop(); 
            }
        } else {
            if (!s.empty()){
                q.push(q.front()); 
                q.pop(); 
            }
            q.push(s.top()); 
            s.pop();
        }
    }
    while (!q.empty()) {
        s.push(q.front()); 
        q.pop();
    }
}
signed main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    cout.tie(nullptr);
#ifdef HELL_JUDGE
    freopen("input","r",stdin);
    freopen("output","w",stdout);
#endif
    stack<int>s; 
    for (int i=5; i>=1; --i) {
        s.push(i);
    }
    interleave(s); 
    while (!s.empty()) {
        cout << s.top() << '\n'; 
        s.pop();
    }
    return 0;
}
