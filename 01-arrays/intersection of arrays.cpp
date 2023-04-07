class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int> setA(a,a+n);
        int count=0;
        for(int i=0;i<m;i++){
            if(setA.find(b[i])!= setA.end()){
                count++;
                setA.erase(b[i]);
            } 
            
        }
       return count;
    }
};
