class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int length = nums.size();
        if (length == k || length == 1 || k == 0) return;
        if (length < k) k %= length;
        int q, p = 0, init=0;  
        int rep, orig= nums[p];  
        for (int i = 0; i < length; ++i) {  
            q = (p + k) % length;
            rep = nums[q];  
            nums[q] = orig;  
            p = q;  
            if (init == p) {  
                init = ++p;  
                orig = nums[p];  
            }
            else orig = rep;  
        }
    }
};

