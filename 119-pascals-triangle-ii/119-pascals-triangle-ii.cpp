class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>temp;
        if(rowIndex==0)
        {
            temp.push_back(1);
            return temp;
            
        }
        temp.push_back(1);
       long long int next_value=1;
        for(int r=0;r<rowIndex;r++)
        {
            
            next_value=(next_value*(rowIndex-r))/(r+1);
          
            temp.push_back(next_value);
      }
        return temp;
        
    }
};