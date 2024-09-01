vector<int> generateRow(int row){
    vector<int> irow;
    int val=1;
    irow.push_back(val);
    for(int col=1;col<row;col++){
        val*=(row-col);
        val/=col;
        irow.push_back(val);
    }
    return irow;
}
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       for(int row=1;row<=numRows;row++){
          ans.push_back(generateRow(row));
       }
       return ans;
    }
};