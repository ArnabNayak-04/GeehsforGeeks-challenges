class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        // code here
        int arr[1000];
        vector<int> ans;
        arr[0]=0;
        arr[1]=1;
        for(int i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
        } 
         for (int i = 0; i < n; i++) {
            ans.push_back(arr[i]);
            }

        return ans;
    }
};