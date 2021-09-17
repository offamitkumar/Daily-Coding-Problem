class Solution {
public:
    string pushDominoes(string dominoes) {
        const int &n = dominoes.size();
        vector<int>v(dominoes.size() , INT_MAX); 
        int counter{-1};
        string temp = dominoes; 
        for (int i=0; i<n; ++i) { // left 
            // L..R.L.
            if (dominoes[i] == 'R') {
                counter = 0;
            } else if(dominoes[i]=='L') {
                counter = -1;
            } else if (dominoes[i]=='.' && counter != -1) {
                temp[i] = 'R';
                v[i] = counter++;
            }
        }
        for (int i=n-1; i>=0; --i) {
            if (dominoes[i] == 'L') {
                counter = 0;
            } else if (dominoes[i] == 'R') {
                counter = -1; 
            } else if (dominoes[i] == '.' && counter != -1) {
                if (v[i] > counter) {
                    temp[i] = 'L';
                    counter++;
                } else if(v[i]==counter){
                    temp[i] = '.';
                }
            }
        }
        return temp;
    }
};
