class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int>temp;
        temp.push_back(1);
        ans.push_back(temp);
        int rows = 2;
        while(numRows >= rows){
            vector<int>temp;
            temp.push_back(1);
            vector<int>upper_line = ans[ans.size()-1];
            for(int i=0; i<upper_line.size()-1; i++){
                if(i+1 <= upper_line.size()-1){
                    temp.push_back(upper_line[i] + upper_line[i+1]);
                }
            }
            temp.push_back(1);
            rows ++;
            ans.push_back(temp);
        }
        return ans;
    }
};