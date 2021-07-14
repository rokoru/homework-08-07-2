#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>

int main()
{
	setlocale(LC_ALL, "ru");
	std::srand(1000);
	int const random = 15;

	int* a = new int[random];

	for (int i = 0; i < random; ++i) {
		a[i] = std::rand() % 100 - 50;
	}

	int max = 0;
	for (int i = 0; i < random; ++i) {
		int num = std::fabs(a[i]);
		if (num > max) {
			max = num;
		}
	}

	std::cout << "Максимальное значение по модлую = " << max << std::endl;

	bool plus = false;
	int sum = 0;
	for (int i = 0; i < random; ++i) {
		if (a[i] > 0) {
			plus = true;
		}
		if(plus){
			sum += a[i];
		}
	}

	std::cout << "Сумма = " << sum << std::endl;

	for (int i = 0; i < random; ++i) {
		int minus = 0;
		if (a[i] < 0) {
			a[i] *= a[i];
		}
	}

	std::vector<int> vozvrastanie;
	for (int i = 0; i < random; ++i) {
		vozvrastanie.push_back(a[i]);
	}
	
	std::sort(vozvrastanie.begin(), vozvrastanie.end());
	
	std::cout << "Растановлены по возврастанию\n";

	for (auto it = vozvrastanie.begin(); it != vozvrastanie.end(); ++it) {
		std::cout << *it << std::endl;
	}

	delete[] a;
}
