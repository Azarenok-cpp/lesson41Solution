#include <iostream>
#include <string>
using namespace std;
#define SIZE 5
double get_avg(int* array, int size);
int get_max_group(double a, double b, double c);

int main() {
	int first_group[]{ 10,10,10,7,10 };
	int second_group[]{ 8,8,9,9,10 };
	int third_group[]{ 6,7,6,8,7 };

	double first_avg = get_avg(first_group, SIZE);
	double second_avg = get_avg(third_group, SIZE);
	double third_avg = get_avg(third_group, SIZE);

	cout << get_max_group(first_avg, second_avg, third_avg);

	return 0;
}

double get_avg(int* array, int size) {
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}

	return sum / size;
}

int get_max_group(double a, double b, double c) {
	
	if (b > a) {
		return 2;
	}
	else if (c > a){
		return 3;
	}
	else
	{
		return 1;
	}
}