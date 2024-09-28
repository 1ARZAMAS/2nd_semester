#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int rows = matrix.size();
    int cols = matrix[0].size();
    int left = 0, right = cols - 1, top = 0, bot = rows - 1;
    while(left <= right && top <= bot){
        for (int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i <= bot; i++){
            result.push_back(matrix[i][right]);
        }
         right--;
        if (top <= bot) {
            for (int i = right; i >= left; i--){
                result.push_back(matrix[bot][i]);
            }
            bot--;
        }
        if (left <= right) {
            for(int i = bot; i >= top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}

int main(){
    vector<vector<int>> matrix {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = spiralOrder(matrix);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
}