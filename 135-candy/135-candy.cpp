class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int>left_ratings;
        vector<int>right_ratings;
        int total_candy=0;
        for(int i=0;i<ratings.size();i++)
        {
            left_ratings.push_back(1);
            right_ratings.push_back(1);
        }
        for(int i =1;i<ratings.size();i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                left_ratings[i]=left_ratings[i-1]+1;
            }
        }
        for(int i=ratings.size()-2; i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                right_ratings[i]=right_ratings[i+1]+1;
            }
        }
        for(int i=0;i<right_ratings.size();i++)
        {
            int temp_candy=max(right_ratings[i],left_ratings[i]);
            total_candy=total_candy+temp_candy;
            
        }
        return total_candy;
    }
};