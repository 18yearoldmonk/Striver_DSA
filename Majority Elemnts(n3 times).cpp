class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> lm;
        for(int i=0;i<n;i++){
            if(lm.size()==0 || lm[0]!=nums[i]){
                int cnt=0;
                for(int j=0;j<n;j++){
                    if(nums[i]==nums[j]){
                        cnt++;

                    }
                }
                if(cnt>(n/3)){
                    lm.push_back(nums[i]);
                }
                if(lm.size()==2) break;
            }

        }
        return lm;
    }
};
