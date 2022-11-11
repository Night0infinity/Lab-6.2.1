#include <iostream>  

#include <iomanip>  

#include <time.h>  
using namespace std;

void random(int* mas, const int size, const int min, const int max, const int i) {
	mas[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		random(mas, size, min, max, i + 1);
}

void wivid(int* mas, const int size, const int i) {
	cout << mas[i] << setw(4);
	if (i < size - 1)
		wivid(mas, size, i + 1);
	else
		cout << setw(4) << endl;
}

void Inverse(int* mas, const int size, int i)
{
	int tmp = mas[i];
	mas[i] = mas[size - 1 - i];
	mas[size - 1 - i] = tmp;
	if (i < size / 2 - 1)
		Inverse(mas, size, i + 1);
}


int main() {

	srand((unsigned)time(NULL));
	int min = -100;
	int max = 100;
	const int n = 25;
	int b[n];
	int breverse[n];

	random(b, n, min, max, 0);//putting random elements into empty array 
	cout << "Massive: " << endl;
	wivid(b, n, 0); //printing filled with elements 
	cout << "Inverse of Massive: " << endl;
	Inverse(b, n, 0);
	wivid(b, n, 0);
	cout << endl;
	return 0;
}
