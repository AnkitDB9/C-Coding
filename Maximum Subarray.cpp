class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int n=arr.size();
    int maxend=arr[0];
    int res=arr[0];
    for(int i=1;i<n;i++){
       maxend=max(maxend+arr[i],arr[i]);
       res=max(res,maxend);
    }
    return res;
    }
};
