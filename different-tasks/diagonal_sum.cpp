#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int rows = mat.size();
    int sum = 0;
    for (int i = 0, j = 0; i < rows; i++, j++){ 
        sum+= mat[i][j]; // пройдемся по главной диагонали
    }
    for(int j = rows-1, i = 0; i < rows; i++, j--){
        if(i != j){ // пройдемся по побочной диагонали
            sum+= mat[i][j];
        }
        
    }
    return sum;
}

int main(){
    vector<vector<int>> mat {{1,2,3},{4,5,6},{7,8,9}};
    int sum = diagonalSum(mat);
    cout << sum;
}