//DSA Sheet by Arsh - Updated 2023
// question: https://leetcode.com/problems/set-matrix-zeroes/
// https://leetcode.com/submissions/detail/984792700/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n= matrix.size(), m = matrix[0].size() , c = 1 ;
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(matrix[i][j] == 0)
                {
                    if(j!= 0 ){matrix[0][j] = 0 ;}
                    else{ cout << i << " " << j<<endl ;c = 0 ;}
                    matrix[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < n ; i++)
        {
            for(int j = 1 ; j < m ; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0 ;
                }
            }
        }
        
        if(matrix[0][0] == 0)
        {
            for(int j = 0 ; j < m ; j++)
        {
            matrix[0][j] =0 ;
        }
        }
        if(c == 0)
        {
            for(int i = 0 ; i < n ; i++)
        {
            matrix[i][0] = 0 ;
        }
        }
    }
    
};


