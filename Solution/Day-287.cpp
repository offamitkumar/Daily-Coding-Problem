#include <bits/stdc++.h>
using namespace std;
using dcc= tuple<double, char, char>;
bool compare(dcc&a, dcc&b) {
    return get<0>(a) > get<0>(b);
}
double getSimilarity(set<int>&a , set<int>&b) {
    vector<int>inter(a.size()+b.size()); 
    vector<int>::iterator l; 
    l = set_intersection(a.begin(), a.end(), b.begin(), b.end(), inter.begin()); 
    double interE= (l - inter.begin()); 
    l = set_union(a.begin(), a.end(), b.begin(), b.end(), inter.begin()); 
    double uniE= (l - inter.begin()); 
    return double(interE / uniE); 
}
list<pair<char,char>> similarWebsites(multimap<char,int>website , int k) {
    list<pair<char,char>>ans; 
    map<char,set<int>>user; 
    for (auto &itr: website) {
        user[itr.first].insert(itr.second);
    }
    vector<char>web; 
    for (auto& itr: user) {
        web.push_back(itr.first);
    }
    priority_queue<dcc, vector<dcc>, function<bool(dcc& ,dcc&)>>pq(compare);
    for (int i=0; i<web.size(); ++i) {
        for (int j=i+1; j<web.size(); ++j) {
            double similarity = getSimilarity(user[web[i]] , user[web[j]]);
            if (pq.size() < k) {
                pq.push(make_tuple(similarity , web[i] , web[j])); 
            }else if (get<0>(pq.top()) < similarity) {
                pq.pop(); 
                pq.push(make_tuple(similarity , web[i] , web[j])); 
            }
        }
    }
    while(!pq.empty()) {
        ans.push_back(make_pair(get<1>(pq.top()), get<2>(pq.top())));
        pq.pop();
    }
    return ans;
}
int main(void){
    multimap<char,int>website; 
    website.insert({'a',1});
    website.insert({'a',3});
    website.insert({'a',5});
    website.insert({'b',2});
    website.insert({'b',6});
    website.insert({'c',1});
    website.insert({'c',2});
    website.insert({'c',3});
    website.insert({'c',4});
    website.insert({'c',5});
    website.insert({'d',4});
    website.insert({'d',5});
    website.insert({'d',6});
    website.insert({'d',7});
    website.insert({'e',1});
    website.insert({'e',3});
    website.insert({'e',5});
    website.insert({'e',6});
    list<pair<char,char>>l = similarWebsites(website , 3); 
    for(auto&itr:l) {
        cout << itr.first << ' ' << itr.second << '\n';
    }
    return 0;
}
