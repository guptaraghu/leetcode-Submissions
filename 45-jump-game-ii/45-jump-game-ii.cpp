class Solution {
public:
    int jump(vector<int>& nums) {
        int max_distance=0;
        int jump=0;
        int current_position=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int x=nums[i];
           int  temp_max_distance=i+x;
            if(temp_max_distance>max_distance)
            {
                max_distance=temp_max_distance;
            }
                if(i==current_position)
                {
                    jump++;
                    current_position=max_distance;
                }
                }
        return jump;
        }
};