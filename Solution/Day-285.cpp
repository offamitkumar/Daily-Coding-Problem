class Solution{
    public:
    int longest (int arr[],int n) {
        int max_height{} , buildings{};
        for (int i =0; i<n; ++i) {
            if (max_height <= arr[i]) {
                max_height = arr[i]; 
                ++buildings;
            }
        }
        return buildings;
    }
};
