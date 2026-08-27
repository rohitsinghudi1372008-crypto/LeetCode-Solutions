class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
       int n=arr.size();
       vector<int> result(n,-1);
       stack<int>st;
       for(int i=0; i<n; i++){
           while(!st.empty()&&st.top()<=arr[i]){
               st.pop();
           }
           if(!st.empty()){
               result[i]=st.top();
           }
           st.push(arr[i]);
       }
       return result;
        
    }
};