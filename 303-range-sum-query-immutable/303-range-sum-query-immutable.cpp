class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        // for(auto ele : nums)
        //     v.push_back(ele);
        this->v=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++)
        {
            sum+=(this->v[i]);
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */