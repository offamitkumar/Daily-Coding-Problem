class Solution {
    private:
        int maxAns;
        int area(vector<int>&his) {
            int a{}; 
            stack<int>s; 
            int i=0;
            for(; i<his.size();) {
                if (s.empty() || his[s.top()] <= his[i]) {
                    s.push(i++);
                } else {
                    int t = s.top(); s.pop(); 
                    if (s.empty()) {
                        a = max(a , his[t] * i);
                    } else {
                        a = max(a , his[t] * (i - s.top() - 1));
                    }
                }
            }
            while (!s.empty()) {
                int t = s.top(); s.pop();
                int area;
                if (s.empty()) {
                    area = his[t] * (i); 
                } else{
                    area = his[t] * (i - s.top() -1);
                }
                a = max(a , area);
            }
            return a;
        }
    public:
        int maximalRectangle(vector<vector<char>>& matrix) {
            if (matrix.size() ==0 || matrix[0].size()==0){
                return 0;
            }
            maxAns = 0;
            vector<int>histogram(matrix[0].size()); 
            for(int row=0; row<matrix.size(); ++row) {
                for(int col=0; col<matrix[row].size(); ++col) {
                    if (matrix[row][col]=='1') {
                        histogram[col]+=1;
                    } else {
                        histogram[col]=0;
                    }
                }
                maxAns =max(maxAns , area(histogram));
            }
            return maxAns;
        }
};
