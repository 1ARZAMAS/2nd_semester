#include <iostream>
#include <vector>

using namespace std;

void print2dMat(vector<vector <int>> matrix){
    int M = matrix.size(); // считаем все элементы в внешней матрице (строка)
    int N = matrix[0].size(); // а потом считаем количество элментов во внутренней матрице (столбец)
    for (int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector<vector <int>> matrix_reshape(vector<vector<int>>& matrix, int r, int c){
    int M = matrix.size(); // считаем все элементы в внешней матрице (строка)
    int N = matrix[0].size(); // а потом считаем количество элментов во внутренней матрице (столбец)

    if(M * N != r * c) {
        return matrix; // было дело, додумалась
    }

    vector<vector<int>>new_matrix(r,vector<int>(c,0)); // создаем новую матрицу размерами r c и заполняем нулями
        
    int row = 0; // строки
    int col = 0; // колонны

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            new_matrix[row][col] = matrix[i][j]; // в новой матрице элемент это итый и житый элементы
            col++; // после каждой итерации столбец ++ те мы сдвигаемся вправо {} -> {}
            if(col == c){ // если столбец совпал со столбцом после ресайза, то обнулим счетчик столбцов и перейдем на следующую строку
                row++;
                col = 0;
            }
        }
    }
    print2dMat(new_matrix);
}

int main(){
    system("chcp 65001");
    vector<vector<int>> matrix = {{1,2},{3,4}};
    print2dMat(matrix);
    int r = 1, c = 4;
    matrix_reshape(matrix, r, c);
    
}
