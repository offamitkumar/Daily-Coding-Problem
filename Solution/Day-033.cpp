class MedianFinder {
    priority_queue<int, vector<int>, greater<int>>mn; // min of greater values
    priority_queue<int, vector<int>, less<int>>mx;  // max of lesser values
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if (mn.empty()) mn.push(num); 
        else if (mx.empty()){ 
            if (mn.top() > num) {
                mx.push(num); 
            } else {
                mx.push(mn.top()); 
                mn.pop(); 
                mn.push(num); 
            }
        }
        else if (num < mx.top()) mx.push(num); 
        else mn.push(num); 

        if ((int)mx.size() -(int) mn.size() >= 2) {
            mn.push(mx.top()); 
            mx.pop(); 
        } else if ((int)mn.size() -(int) mx.size() >=2) {
            mx.push(mn.top()); 
            mn.pop(); 
        }
    }
    
    double findMedian() {
        if ((mn.size() + mx.size())&1) {
            if (mn.size() > mx.size()) {
                return mn.top(); 
            } else{
                return mx.top(); 
            }
        } else {
            return (mx.top() + mn.top())/2.0; 
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
