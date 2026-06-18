class Solution {
private:
    vector<int> nxtsmall(vector<int> arr,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = n-1 ; i >= 0 ; i--){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            //now stack ka top is the answer of curr element
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevsmall(vector<int> arr,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            while(st.top()!=-1 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            //now stack ka top is the answer of curr element
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        //finding next & previous smaller element index of every element and make array of it
        int n = heights.size();

        vector<int> next(n);
        next = nxtsmall(heights,n);

        vector<int> prev(n);
        prev = prevsmall(heights,n);

        int area = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            int len = heights[i];
            if(next[i]==-1){
                next[i] = n;
            }
            int width = next[i] - prev[i] - 1;
            int newArea = len*width;
            area = max(area,newArea);
        }
        return area;
    }
};
