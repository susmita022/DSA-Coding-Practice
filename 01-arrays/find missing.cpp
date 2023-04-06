class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int N= nums.size();
       int sum=0;
       for(int i=0;i<N;i++){
         sum+=nums[i];
       }
       int sum1=N*(N+1)/2;
       return sum1-sum;
    }
};



  // ANOTHER APPROACH USING HASHING
  
  int missingNumber(int A[], int N)
{
    // Your code goes here 
    int hash[N+1]={0};
    for(int i=0;i<N-1;i++){
        hash[A[i]]=1;
    }
   for(int i=1;i<=N;i++){
        if(hash[i]==0)
        return i;
    } 
       return -1;
}
