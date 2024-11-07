#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include "Provider.h"

//task 1
//int main()
//{
//    int a = 0, b = 0;
//    float c = 0;
//    cout << "Введіть два числа: ";
//    cin >> a >> b;
//
//    try {
//        c = a / b; //Апаратна ВС
//        cout << "Result: " << c << std::endl;
//    }
//    catch (...) {
//        cout << "Error!\n";
//    }
//}

//task 2
//float average(int arr[], int size) {
//	int amount = 0;
//	float sum = 0;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] % 2 != 0) {
//			amount++;
//			sum += arr[i];
//		}
//	}
//	
//	if (amount == 0) throw "Not found odd numbers!"; //Програмна ВС
//
//	return sum / amount;
//}
//
//int main() {
//	int A[5]{ 4, 2, 4, 76, 6 };
//	int B[5]{ 1, 2, 7, 76, 6 };
//	float a1 = 0, b1 = 0;
//
//	try {
//		a1 = average(A, 5);
//		cout << "Результат: " << a1 << endl;
//	}	catch (const char* s) { cout << s << endl; }
//
//	try {
//		b1 = average(B, 5);
//		cout << "Результат: " << b1 << endl;
//	}
//	catch (const char* s) { cout << s << endl; }
//}

//task3
int main() {
	Provider kyivstar("Kyivstar");

	try { kyivstar.addTariff(new SecondsTariff("Day", 0.01)); }
	catch (MobileException* obj) { cout << obj->showMessage(); delete obj; }

	try { kyivstar.addTariff(new MinutesTariff("Night", 0.7)); }
	catch (MobileException* obj) { cout << obj->showMessage(); delete obj; }
	
	try {kyivstar.addTariff(new SecondsTariff("", 67));
	}catch (MobileException* obj) { cout << obj->showMessage(); delete obj; }

	try {
		kyivstar.addTariff(new SecondsTariff("Student", -67));
	}	catch (MobileException* obj) { cout << obj->showMessage(); delete obj; }

	try { kyivstar.addTariff(new MinutesTariff("Night XXX", 0.7)); }
	catch (MobileException* obj) { cout << obj->showMessage(); delete obj; }

	try { kyivstar.addTariff(new MinutesTariff("Teacher", 0.5)); }
	catch (MobileException* obj) { cout << obj->showMessage(); delete obj; }

	cout << "----------------------------------------\n\n";
	kyivstar.showList();
}