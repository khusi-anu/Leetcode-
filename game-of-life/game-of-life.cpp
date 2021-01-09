class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int rows = board.size();
        int cols = board[0].size();
        
        vector<vector<int>> copy(rows, vector<int> (cols, 0));
        
        int neighborsx[] = { 0, -1, 1, 0, 1, -1, -1, 1};
        int neighborsy[] = { -1, 0, 1, 1, 0, -1, 1, -1};
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
                copy[i][j] = board[i][j];
        }
        
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                    int live = 0;
                    for(int k = 0; k < 8; k++)
                    {
                        
                            int r = (i + neighborsx[k]);
                            int c = (j + neighborsy[k]);
​
                            if ((r < rows && r >= 0) && (c < cols && c >= 0) && (copy[r][c] == 1)) {
                                live += 1;
                            }
                        }
                    if((copy[i][j] == 1) && live < 2 || live > 3)
                        board[i][j] = 0;
                
                    if(copy[i][j] == 0 && live == 3)
                            board[i][j] = 1;
            }
        }
    }
};
