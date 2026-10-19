class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size()-1,col=matrix[0].size()-1;
        int i=0,j=row;

        while (i<j){
            swap(matrix[i],matrix[j]);
            i++;
            j--;
        }
        for(int left=0;left<=col;left++){
            for(int right=left;right<=col;right++){
                swap(matrix[left][right],matrix[right][left]);
            }
        }
    }
};