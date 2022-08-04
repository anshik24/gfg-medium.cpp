class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        vector<int>ans;
        int i,j;
        for( i=0;i<N;i++){
             j=N-1;
            
                while(A[j]<A[i])
                j--;
                ans.push_back(j-i);
        }
        return *max_element(ans.begin(),ans.end());
    }
};
