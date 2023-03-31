    // Leetcode 26

// USING HASHING //


int removeDuplicates(vector<int>& nums) {
    unordered_set<int> seen;
    int i = 0;
    for (int j = 0; j < nums.size(); j++) {
        if (!seen.count(nums[j])) {  // if the element at index j is not already in the set
            seen.insert(nums[j]);    // insert the element into the set
            nums[i] = nums[j];       // set the i-th element to the j-th element
            i++;                     // increment the counter for the next unique element
        }
    }
    return i;                        // return the number of unique elements
}



// Using 2 pointers


int removeDuplicates(vector<int>& nums) {
    int k = 0; // index for the first unique element
    for (int i = 0; i < nums.size(); i++) {
        if (i == 0 || nums[i] != nums[i-1]) {
            nums[k++] = nums[i]; // copy the unique element to the front
        }
    }
    return k;
}
