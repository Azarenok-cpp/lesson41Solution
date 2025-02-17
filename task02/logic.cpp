#include "logic.h"

int sum_main_diagonal_elements(int matrix[N][N]) {
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][i];
	}
	return sum;
}

int sum_additional_diagonal_elements(int matrix[N][N]) {
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][N-1-i];
	}
	return sum;
}
