#include <iostream>
#include <vector>

using namespace std;

int main(){
	const int M = 3, N = 3;
	vector <vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
	vector<int> matrix1d;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
            matrix1d.push_back(matrix[i][j]);
		}
	}

    for (int i = 0; i < matrix1d.size(); i++){
        cout << matrix1d[i] << " ";
    }
}