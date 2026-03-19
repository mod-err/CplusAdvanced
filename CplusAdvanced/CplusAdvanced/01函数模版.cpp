//#include <iostream>
//#include <string>
//using namespace std;
//
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapDouble(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void myswap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	swapInt(a, b);
//	cout << a << " " << b << endl;
//
//	double c = 2.1;
//	double d = 3.1;
//	swapDouble(c, d);
//	cout << c << " " << d << endl;
//
//	string e = "张三";
//	string f = "李四";
//	myswap(e, f);
//	myswap<string>(e, f);
//	cout << e << " " << f << endl;
//}

//#include <iostream>
//using namespace std;
//
//template<typename T>
//void myswap(T& a, T& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T>
//void func() {
//	cout << "func调用" << endl;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	double c = 30;
//
//	//myswap(a, c);
//	func<int>();
//}

//#include <iostream>
//using namespace std;
//
//template<typename T>
//void mysort(T arr[], int len) {
//	//选择排序
//	for (int i = 0; i < len; i++) {
//		int min = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[min] > arr[j]) min = j;
//		}
//		if (min != i) {
//			T temp = arr[i];
//			arr[i] = arr[min];
//			arr[min] = temp;
//		}
//	}
//}
//
//template<typename T>
//void printarr(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i];
//	}
//	cout << endl;
//}
//
//int main() {
//	char arr[] = "acbdifgeh";
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	cout << len << endl;
//	mysort(arr, len);
//	printarr(arr, len);
//}

//#include <iostream>
//using namespace std;
//
//int myadd01(int a, int b) {
//	return a + b;
//}
//
//template<typename T>
//T myadd02(T a, T b) {
//	return a + b;
//}
//
//int main() {
//	int a = 10;
//	int b = 1;
//	char c = 'C';//ASCII值为67
//
//	cout << myadd01(a, c) << endl;//77
//
//	//cout << myadd02(a, c) << endl;
//	cout << myadd02<int>(a, c) << endl;//77
//	cout << myadd02<char>(b, c) << endl;//'D'
//}

//#include <iostream>
//using namespace std;
//
//void myprint(int a, int b) {
//	cout << "普通函数被调用" << endl;
//}
//
//template<typename T>
//void myprint(T a, T b) {
//	cout << "函数模版被调用" << endl;
//}
//
//template<typename T>
//void myprint(T a, T b, T c) {
//	cout << "重载的函数模版被调用" << endl;
//}
//
//int main() {
//	//如果函数模版和普通函数都可以实现，优先调用普通函数
//	myprint(10, 20);
//	//可以通过空模版参数列表<>来强制调用函数模版
//	myprint<>(10, 20);
//	//函数模版也可以发生重载
//	myprint<>(10, 20, 30);
//	myprint<int>(10, 20, 'a');
//	//如果函数模版可以产生更好的匹配，优先调用函数模版
//	myprint('a', 'b');
//}

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	Person(string Name, int Age) : name(Name), age(Age){}

	//Person(string name, int age) {
	//	this->name = name;
	//	this->age = age;
	//}
	bool operator==(Person& person) {
		if (this->name == person.name && this->age == person.age) {
			return true;
		}
		else {
			return false;
		}
	}

	string name;
	int age;
};

template<typename T>
bool compare(T& a, T& b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
//模版具体化重载
template<> bool compare(Person& p1, Person& p2) {
	if (p1.name == p2.name && p1.age == p2.age) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	Person p1("王悦", 18);
	Person p2("王悦", 18);

	cout << compare(p1, p2) << endl;
	cout << p1.operator==(p2) << endl;
	cout << (p1==p2) << endl;
}