#include<iostream>
#include<string>
#include<time.h>
#include<Windows.h>
#include <Lmcons.h>
#include <fstream>


using namespace std;
void switch_c(int* a, int* b) {

	cout << *a << " " << *b << endl;

	int temp = *a;
	*a = *b;
	*b = temp;
	cout << *a << " " << *b << " " << endl;
}
void raznArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		int* r = arr + i;

		*(arr + i) = *(r + (rand() % size));
	}
}
// ifdef^
int fact(int b) {
	if (b == 0) {
		return 0;
	}
	else if (b == 1) {
		return 1;
	}

	return b * fact(b - 1);
}
void vivod(int* arr, int ig) {
	for (int i = 0; i < ig; i++) {
		cout << *(arr + i);
	}
}
void newVvod(int*& arr2) {
	int size = 0;
	cout << "Введите размер Массива" << endl;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);


	}
	for (int j = 0; j < size; j++) {
		arr2[j] = arr[j];
	}
	delete[] arr2;
	arr2 = arr;
	for (int g = 0; g < size; g++) {
		cout << arr2[g] << endl;
	}
}
void mid_arr(int arr[], int ig) {
	int mid = 0;
	for (int i = 0; i < ig; i++) {
		mid += arr[i];
	}
	float eq = (float)mid / ig;
	cout << mid << endl;
	cout << eq;
}
void vvod(int arr[], int ig) {

	for (int i = 0; i < ig; i++) {
		cin >> arr[i];

	}
}
void dva(int a) {
	cout << a % 2 << endl;
	cout << (a % 2 == 0);

}
void summanedv(int start, int end) {
	int sum = 0;
	do {
		if (start % 2 != 0) {
			sum += start;
		}
		start++;
	} while (start <= end);
	cout << sum;

}
void kvadrat(int shirina, int visota) {
	int v = 0;
	for (int i = 0; i <= shirina; i++) {
		cout << "*";
		if (i == shirina) {
			cout << endl;

		}

		for (int g = 0; g < (visota - 2); g++) {
			if (i == shirina) {
				cout << "*";
				for (int j = 0; j < (shirina - 1); j++) {
					cout << " ";
				}
				cout << "*" << endl;
			}

		}

	}
	for (int i = 0; i <= shirina; i++) {
		cout << "*";
	}


}
void min_arr(int size, int *arr) {
	int min = 0;


	min = arr[0];

	for (int i = 0; i < size; i++) {

		for (int j = 0; j <= i; j++) {
			if (min > arr[j]) {
				swap(min,arr[j]);
			}

		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl << min;

}
template<typename type, typename type2>
void sum(type a, type2 b) {
	cout << a + b << endl;
}
void fillArr(int* arr, int  size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
	}
}
void showArr(int* arr, int  size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void push_forward(int*& arr, int& size, const int value) {
	int* arr1 = new int[size + 1];
	for (int i = 0; i < size; i++) {
		arr1[i] = arr[i];

	}
	arr1[size] = value;
	size++;
	delete[]arr;


	arr = arr1;


}
void str(char* arr) {
	int i = 0;
	for (arr[i] != '\0';;) {
		i++;
	}
	cout << i;
}
template<class t, class t1>
void foo(t& a, t1& b) {

	int temp = a;
	a = b;

	b = temp;;

	cout << a << " " << b << endl;
}
void x2newarr(int size1, int size2) {

	int** arr = new int* [size1];
	for (int i = 0; i < size1; i++) {
		*(arr + i) = new int[size2];

	}


	for (int i = 0; i < size1; i++) {


		for (int j = 0; j < size2; j++)
		{
			arr[i][j] = rand() % 20;
			cout << arr[i][j] << "  ";

		}
		cout << endl;

	}

	for (int i = 0; i < size1; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
void copyArr(int* arr1, int* arr2) {

	int size = 0;
	int size1 = 0;
	cout << "Razmer arr1" << endl;
	cin >> size;
	cout << "razmer arr2" << endl;
	cin >> size1;




	if (size > size1) {

		for (int i = 0; i < size1; i++) {
			arr2[i] = *(arr1 + i);
			cout << arr2[i] << " ";
		}


	}
	else if (size < size1) {
		for (int i = 0; i < size; i++) {
			arr2[i] = *(arr1 + i);
			cout << arr2[i] << " ";
		}
	}
	cout << endl;
}
void ShowUserName() {

	TCHAR name[UNLEN + 1];
	DWORD len = UNLEN + 1;
	GetUserName(name, &len);

	for (int i = 0; i < len; i++) {
		cout << (char)name[i];
	}
	cout << endl;

}

class sys {
public:
	bool a = 0;
};

int main(int arga, char* argb[]) {
	cout << "DEBUG Mode: on / off" << endl;
	sys debug;

	cin >> debug.a;

	switch (debug.a) {
	case true:
		debug.a = 1;
		break;
	case false:
		debug.a = 0;
		break;
	default:
		cout << "cin 1/0" << endl;

		break;


	}

	setlocale(LC_ALL, "ru");
	srand(time(NULL));


	string MontH;
	SYSTEMTIME sys_time;
	GetLocalTime(&sys_time);
	switch (sys_time.wMonth) {
	case 1:
		MontH = "Январь";

		break;
	case 2:
		MontH = "Февраль";

		break;
	case 3:
		MontH = "Март";

		break;
	case 4:
		MontH = "Апрель";

		break;
	case 5:
		MontH = "Май";

		break;
	case 6:
		MontH = "Июнь";

		break;
	case 7:
		MontH = "Июль";

		break;
	case 8:
		MontH = "Август";

		break;
	case 9:
		MontH = "Сентябрь";

		break;
	case 10:
		MontH = "Октябрь";

		break;
	case 11:
		MontH = "Ноябрь";

		break;
	case 12:
		MontH = "Декабрь";

		break;
	default:
		MontH = "Error";
		break;

	}
	cout << "Time is: " << sys_time.wHour << " : " << sys_time.wMinute << endl;
	cout << "Date is: " << sys_time.wDay << "." << MontH << "." << sys_time.wYear << endl;

	if (sys_time.wDay == 8 && MontH == "Июль") {
		cout << "Happy Birthday!";
		ShowUserName();
	}
	else if (sys_time.wDayOfWeek == NULL) {
		cout << "Happy Birthday! ";
		ShowUserName();
	}
	else {
		cout << "Hello sussy ";
		ShowUserName();
	}
	(debug.a) ? cout << "/Debug mode/" << endl << endl << endl << endl : (debug.a == 0) ? cout << "/Normal mode/" << endl << endl << endl << endl : cout << "sus";

#define dbg
	///////////////////////sysThings
	int size;
	cin >> size;
	int* arr = new int[size];
	int n = size;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	/////////////////////////////arr
	bool sus = true;
	int gg = 0;
	while (sus) {
		!sus;
		for (int i = 0; i < n-1; i++) {
			
			if (arr[i] > arr[i + 1]&&i==n-1) {
				swap(arr[i], arr[i + 1]);
				sus;
			}
			
		}
		gg++;
		n--;
	}
	cout << gg << endl;
	delete[]arr;
	
	
	return 0;
}