class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // code here
        int i=0,j=0;
        vector<int> marge;
        while(i<a.size()&&j<b.size()){
            if(a[i]<=b[j]){
                marge.push_back(a[i]);
                i++;
            }
            else{
                marge.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            marge.push_back(a[i]);
            i++;
        }
        
        while(j<b.size()){
            marge.push_back(b[j]);
            j++;
        }
        
        int n=marge.size();
        
            if(n%2==1){
                return marge[n/2];
            }
            else {
                return (marge[n/2-1]+marge[n/2])/2.0;
            }
        }
};