using pci = pair<char,int>;
bool compare(pci&a , pci&b){
    return a.second < b.second;
}
class Solution {
    public:
        string reorganizeString(string s) {
            map<char,int>m; 
            for(auto&itr:s) {
                m[itr]++;
            }
            priority_queue<pci,vector<pci> , function<bool(pci&,pci&)>> pq(compare);
            for(auto&itr:m) {
                pq.push(itr);
            }
            string res; 
            while (pq.size() > 1) {
                pci charOne = pq.top(); pq.pop(); 
                pci charTwo = pq.top(); pq.pop();
                res+=charOne.first; charOne.second--; 
                res+=charTwo.first; charTwo.second--; 
                if (charOne.second) pq.push(charOne); 
                if (charTwo.second) pq.push(charTwo); 
            }
            if (pq.size()) {
                pci ch = pq.top(); pq.pop(); 
                if(ch.second >=2) {
                    return "";
                }
                res+=ch.first; 
            }
            return res; 
        }
};

