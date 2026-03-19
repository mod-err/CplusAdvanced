//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class NameType, class AgeType>//类中的两个类型都先不指定
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->name = name;
//		this->age = age;
//	}
//	NameType name;
//	AgeType age;
//};
//
//int main() {
//	//通过类模板实例化对象
//	Person<string, int> p("孙悟空", 999);
//	cout << p.name << p.age << endl;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class NameType, class AgeType = int>
//class Person {
//public:
//	Person(NameType name, AgeType age) {
//		this->name = name;
//		this->age = age;
//	}
//	NameType name;
//	AgeType age;
//};
//
//int main() {
//	//类模板没有自动类型推导的使用方式
//	Person p1("孙悟空", 999);//C++17引入自动类型推导
//	Person<string, int>p2("猪八戒", 999);
//	//类模板在模板参数列表中可以有默认参数
//	Person<string>p3("沙和尚", 999);//省去指定的默认参数
//}

#include <iostream>
#include <string>
using namespace std;

class Person1 {
public:
	void showPerson1() {
		cout << "Person1 show" << endl;
	}
};

class Person2 {
public:
	void showPerson2() {
		cout << "Person2 show" << endl;
	}
};

template<typename T>
class Person {
public:
	T obj;
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

int main() {
	Person<Person1> p1;
	p1.func1();
	//p.func2();不是Person1的成员
	Person<Person2> p2;
	p2.func2();
	//p.func1();不是Person2的成员
}