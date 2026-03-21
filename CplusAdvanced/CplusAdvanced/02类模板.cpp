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

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person1 {
//public:
//	void showPerson1() {
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2 {
//public:
//	void showPerson2() {
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<typename T>
//class Person {
//public:
//	T obj;
//	void func1() {
//		obj.showPerson1();
//	}
//	void func2() {
//		obj.showPerson2();
//	}
//};
//
//int main() {
//	Person<Person1> p1;
//	p1.func1();
//	//p.func2();不是Person1的成员
//	Person<Person2> p2;
//	p2.func2();
//	//p.func1();不是Person2的成员
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age){
//		this->name = name;
//		this->age = age;
//	}
//	T1 name;
//	T2 age;
//};
//
////1.指定传入的类型
//void PrintPerson1(Person<string, int>& p) {
//	cout << p.name << " " << p.age << endl;
//}
////2.参数模板化
//template <class T1, class T2>//对传入的p中的参数进行自动类型推导
//void PrintPerson2(Person<T1, T2>& p) {
//	cout << p.name << " " << p.age << endl;
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//}
////3.整个类模板化
//template <class T>//对传入的p进行自动类型推导
//void PrintPerson3(T& p) {
//	cout << p.name << " " << p.age << endl;
//	cout << typeid(T).name() << endl;
//}
//
//int main() {
//	Person<string, int> p1("孙悟空", 999);
//	PrintPerson1(p1);
//
//	Person<string, int> p2("猪八戒", 999);
//	PrintPerson2(p2);
//
//	Person<string, int>	p3("沙和尚", 999);
//	PrintPerson3(p3);
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T>
//class Base {
//public:
//	T m;
//};
//
//class Son1 : public Base<int>{
//public:
//	Son1(int t) {
//		this->m = t;
//	}
//};
//
//template <class T>
//class Son2 : public Base<T> {
//public:
//	Son2() {
//		cout << typeid(T).name() << endl;
//	}
//};
//template <class T1, class T2>
//class Son3 : public Base<T1> {
//public:
//	Son3() {
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//	T1 n;
//};
//
//int main() {
//	Son1 s(10);
//	cout << s.m << endl;
//
//	Son2<int> s2;
//	Son3<int, char> s3;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//#include "person.hpp"
//
//int main() {
//	Person<string, int> p("猪八戒", 99);
//	p.showPerson();
//}

//#include <iostream>
//#include <string>
//using namespace std;
//
//template<class T1, class T2>
//class Person;
//
//template<class T1, class T2>
//void showPerson(Person<T1, T2>& p) {
//	cout << p.name << " " << p.age << endl;
//}
//
//template<class T1, class T2>
//class Person {
//	friend void showPerson(Person<T1, T2>& p);
//public:
//	Person(T1 name, T2 age) {
//		this->name = name;
//		this->age = age;
//	}
//private:
//	T1 name;
//	T2 age;
//};
//
//int main() {
//	Person<string, int> p("唐三藏", 999);
//	showPerson(p);
//}

//#include "myarry.hpp"
//
//class Person {
//	friend ostream& operator<<(ostream& cout, const Person& person);
//public:
//	Person() {}
//	Person(string Name, int Age) : name(Name), age(Age) {}
//	string name;
//	int age;
//};
//
////重载<<运算符
//ostream& operator<<(ostream& cout, const Person& person) {
//	cout << person.name << " " << person.age;
//	return cout;
//}
//
//template<class T>
//void printMyArry(MyArry<T>& arr) {
//	cout << "数组的容量为：" << arr.getcapacity() << endl;
//	cout << "数组的大小为：" << arr.getsize() << endl;
//	for (int i = 0; i < arr.getcapacity(); i++) {
//		cout << arr[i] << endl;//arr.operator[](i)
//	}
//	cout << "------------------------------" << endl;
//}
//
//int main() {
//	//测试系统类型int
//	MyArry<int> arr(10);
//
//	for (int i = 0; i < arr.getcapacity(); i++) {
//		arr.pushback(i);
//	}
//
//	printMyArry(arr);
//
//	//尾删法删除数据
//	arr.popback();
//	printMyArry(arr);
//
//	//测试自定义数据类型Person类
//	MyArry<Person> arr1(5);
//
//	Person p1("孙悟空", 99);Person p2("猪八戒", 9);Person p3("唐三藏", 19);Person p4("沙和尚", 999);Person p5("白龙马", 29);
//
//	arr1.pushback(p1);arr1.pushback(p2);arr1.pushback(p3);arr1.pushback(p4);arr1.pushback(p5);
//
//	printMyArry(arr1);
//
//	//尾删法删除数据
//	arr1.popback();
//	printMyArry(arr1);
//}