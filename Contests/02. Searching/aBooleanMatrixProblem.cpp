#include <bits/stdc++.h>
 
using namespace std;
 
void modifyMatrix(vector<vector<int>> &mat)
{
    int R = mat.size();
    int C = mat[0].size();
    
    bool row[R];
    bool col[C];
 
    int i, j;
 
    for (i = 0; i < R; i++)
        row[i] = 0;
 
    for (i = 0; i < C; i++)
        col[i] = 0;
 
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            if (mat[i][j] == 1) {
                row[i] = 1;
            }
        }
    }

    for (i = 0; i < R; i++)
        for (j = 0; j < C; j++)
            if (row[i] == 1)
                mat[i][j] = 1;
}


int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row >> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        modifyMatrix(matrix);
        
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
