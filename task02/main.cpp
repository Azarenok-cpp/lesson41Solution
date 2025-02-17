#include <iostream>
#include <string>
#include "logic.h"
using namespace std;
#define N 5
#define M 5

int main() {
	int matrix[N][M]{};

	/*for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}*/

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			matrix[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}





	cout << "\nSum main diagonal: " << sum_main_diagonal_elements(matrix) << endl;
	cout << "Additional diagomal: "<<sum_additional_diagonal_elements(matrix) << endl;
	return 0;
}
