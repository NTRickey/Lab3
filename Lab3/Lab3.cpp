#include<iostream>
#include<clocale>
using namespace std;
int main() {	
	setlocale(LC_ALL, "RUSSIAN");
	int UserNum;
	cin >> UserNum;
	if ((UserNum / 100 != (UserNum / 10 % 10)) and (UserNum % 10 != UserNum / 100) and ((UserNum / 10 % 10) != UserNum % 10)) {
		cout << "Все числа различны\n";
	}
	else {
		cout << "Числа не различны\n";
	}
	return 0;
}