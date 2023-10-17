class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(i!=j){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }

        int start = 0;
        int end = n-1;
        

        while(start<=end){
            for(int row=0; row<n; row++){
                int temp = matrix[row][start];
                matrix[row][start] = matrix[row][end];
                matrix[row][end] = temp;
            }

            start++;
            end--;
        }
            
    }
};

