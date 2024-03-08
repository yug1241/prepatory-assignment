#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
void matrixMultiplication(int mat1[MAX_SIZE][MAX_SIZE],
int mat2[MAX_SIZE][MAX_SIZE], int 
result[MAX_SIZE][MAX_SIZE], int row1, int col1, int row2,
int col2) {
 if (col1 != row2) {
 cout << "Matrix multiplication not possible!" <<
endl;
 return;
 }
 for (int i = 0; i < row1; ++i) {
 for (int j = 0; j < col2; ++j) {
 result[i][j] = 0;
 }
 }
 for (int i = 0; i < row1; ++i) {
 for (int j = 0; j < col2; ++j) {
 for (int k = 0; k < col1; ++k) {
 result[i][j] += mat1[i][k] * mat2[k][j];
 }
 }
 }
}
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int
rows, int cols) {
 for (int i = 0; i < rows; ++i) {
 for (int j = 0; j < cols; ++j) {
 cout << matrix[i][j] << " ";
 }
 cout << endl;
 }
}
int main() {
 int mat1[MAX_SIZE][MAX_SIZE],
mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
 int row1, col1, row2, col2;
 cout << "Enter the number of rows and columns of the first matrix: ";
 cin >> row1 >> col1;
 cout << "Enter elements of the first matrix:" << endl;
 for (int i = 0; i < row1; ++i) {
 for (int j = 0; j < col1; ++j) {
 cin >> mat1[i][j];
 }
 }
 cout << "Enter the number of rows and columns of the second matrix: ";
 cin >> row2 >> col2;
 cout << "Enter elements of the second matrix:" <<
endl;
 for (int i = 0; i < row2; ++i) {
 for (int j = 0; j < col2; ++j) {
 cin >> mat2[i][j];
 }
 }
 matrixMultiplication(mat1, mat2, result, row1, col1,
row2, col2);
 cout << "Resultant Matrix:" << endl;
 displayMatrix(result, row1, col2);
 return 0;
}