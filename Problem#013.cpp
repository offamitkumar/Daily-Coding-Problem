#include <bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    int k ;
    cin>>s>>k;
    int i=0 , j=0 , t_max =0 , mx = 1;
    array<int,27>frequency;
    fill(frequency.begin() , frequency.end() , 0);
    int t_frequency = 0;
    while(i<(int)s.size() && j<(int)s.size()){
        if(t_frequency<=k){
            if(frequency[s[j]-'a']==0){
                t_frequency++;
            }
            frequency[s[j]-'a']++;
            if(t_frequency<=k){
                mx = max(mx , abs(i-j-1));
                j++;
            }
        }else{
            frequency[s[i]-'a']--;
            if(frequency[s[i]-'a']==0){
                t_frequency--;
            }
            i++;
            mx = max(mx , abs(i-j-1));
        }
    }
    cout<<mx<<endl;
    return 0;
}
