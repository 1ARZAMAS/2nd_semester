#include <iostream>
#include <vector>

using namespace std;

ostream& operator <<(ostream& os, vector<vector<int>>& new_matrix){
    int rows = new_matrix.size();
    int col = new_matrix[0].size();
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < col; j++){
            os << new_matrix[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> new_matrix (col,vector<int>(rows,0));
    for (int i = 0; i < rows; i++){
        for(int j = 0; j < col; ++j){
            new_matrix[j][i] = matrix[i][j];
        }
    }
    cout << new_matrix;
    return new_matrix;
}

int main(){
    vector<vector<int>> matrix {{1,2,3},
                                {4,5,6}};
    transpose(matrix);
}
