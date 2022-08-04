//brute force approach
class Solution{   
  public:
    vector<int> farNumber(int N,vector<int> Arr){
        
        vector<int>arr;
        for(int i=0;i<N;i++){
            int ans=-1;
            for(int j=N-1;j>i;j--){
                if(Arr[j]<Arr[i]){
                ans=j;
                break;
            }
            }
            arr.push_back(ans);
        }
        return arr;
        
    }
};
