#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matrix1;
vector<vector<int>> matrix2;
vector<vector<int>> matrix3;

int get_row() {
	int rows = 0;
	cout << "How many rows are there? ";
	cin >> rows;
	return rows;
}

int get_column() {
	int cols = 0;
	cout << "How many columns are there? ";
	cin >> cols;
	return cols;
}

void create_matrix1() {
	int row = 0, col = 0;
	cout << "\nCreating Matrix 1\n" << endl;

	row = get_row();
	col = get_column();

	matrix1.resize(row);
	for (int i = 0; i < matrix1.size(); ++i) {
		matrix1.at(i).resize(col);
	}

	int value = 0;
	for (int i = 0; i < matrix1.size(); ++i) {
		for (int j = 0; j < matrix1.at(i).size(); ++j) {
			cout << "What is the value for [" << i << "][" << j << "]? ";
			cin >> value;
			matrix1.at(i).at(j) = value;
		}
	}

	cout << endl << "\nMatrix 1" << endl;
	for (int i = 0; i < matrix1.size(); ++i) {
		for (int j = 0; j < matrix1.at(i).size(); ++j) {
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}
}

void create_matrix2() {
	int row = 0, col = 0;
	cout << "\nCreating Matrix 2\n" << endl;

	row = get_row();
	col = get_column();

	matrix2.resize(row);
	for (int i = 0; i < matrix2.size(); ++i) {
		matrix2.at(i).resize(col);
	}

	int value = 0;
	for (int i = 0; i < matrix2.size(); ++i) {
		for (int j = 0; j < matrix2.at(i).size(); ++j) {
			cout << "What is the value for [" << i << "][" << j << "]? ";
			cin >> value;
			matrix2.at(i).at(j) = value;
		}
	}

	cout << endl << "\nMatrix 2" << endl;
	for (int i = 0; i < matrix2.size(); ++i) {
		for (int j = 0; j < matrix2.at(i).size(); ++j) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}
}

int get_matrix1_val() {
	int val = 0;
	for (int i = 0; i < matrix1.size(); ++i) {
		for (int j = 0; j < matrix1.at(i).size(); ++j) {
			val = matrix1[i][j];
		}
	}
}

int get_matrix2_val() {
	int val = 0;
	for (int i = 0; i < matrix2.size(); ++i) {
		for (int j = 0; j < matrix2.at(i).size(); ++j) {
			val = matrix2[i][j];
		}
	}
}

void add_matrices() {
	if (matrix1.size() == matrix2.size()) {
		// values of matrix1 + matrix2 = matrix3
		int matrix1_val, matrix2_val, sum;

		matrix3.resize(matrix1.size());
		for (int i = 0; i < matrix3.size(); ++i) {
			matrix3.at(i).resize(matrix1.size());
		}

		for (int i = 0; i < matrix3.size(); ++i) {
			for (int j = 0; j < matrix3.at(i).size(); ++j) {
				matrix1_val = get_matrix1_val();
				matrix2_val = get_matrix2_val();
				sum = matrix1_val + matrix2_val;
				matrix3.at(i).at(j) = sum;
			}
		}

		cout << endl << "\nMatrix 3" << endl;
		for (int i = 0; i < matrix3.size(); ++i) {
			for (int j = 0; j < matrix3.at(i).size(); ++j) {
				cout << matrix3[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "\nMatrices are NOT the same size." << endl;
	}
}

