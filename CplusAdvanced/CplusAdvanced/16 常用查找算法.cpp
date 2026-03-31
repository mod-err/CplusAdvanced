//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	//重载==运算符
//	bool operator==(const Person& person) {
//		if (this->name == person.name && this->age == person.age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	string name;
//	int age;
//};
//
//int main() {
//	//查找内置数据类型
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//
//	int val = 6;
//	vector<int>::iterator it = find(v1.begin(), v1.end(), val);
//
//	if (it == v1.end()) {
//		cout << "未找到该元素" << endl;
//	}
//	else {
//		cout << "找到目标元素" << *it << endl;
//	}
//	
//	//查找自定义数据类型
//	vector<Person> v2;
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//
//	v2.push_back(p1);
//	v2.push_back(p2);
//	v2.push_back(p3);
//
//	Person pp("b", 20);
//	vector<Person>::iterator ite = find(v2.begin(), v2.end(), pp);
//
//	if (ite == v2.end()) {
//		cout << "未找到该元素" << endl;
//	}
//	else {
//		cout << "找到目标元素" << ite->name  << " " << ite->age << endl;
//	}
//}

//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//
//class Greater20 {
//public:
//	bool operator()(const Person& p) const{
//		return p.age > 20;
//	}
//};
//int main() {
//	vector<Person> v;
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	vector<Person>::iterator it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end()) {
//		cout << "未找到该元素" << endl;
//	}
//	else {
//		cout << "找到目标元素" << it->name  << " " << it->age << endl;
//	}
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	vector<int> v;
//
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(3);
//
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) {
//		cout << "未找到相邻重复元素" << endl;
//	}
//	else {
//		cout << "找到相邻重复元素" << *it << endl;
//	}
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>//包含头文件
//
//using namespace std;
//
//int main() {
//	vector<int> v;
//
//	//有序序列
//	for (int i = 0; i < 9; i++) {
//		v.push_back(i);
//	}
//
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret) {
//		cout << "找到元素" << endl;
//	}
//	else {
//		cout << "未找到元素" << endl;
//	}
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>//包含头文件
//#include<string>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	bool operator==(const Person& p) const {
//		if (this->age == p.age) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	string name;
//	int age;
//};
//
//int main() {
//	//统计内置数据类型
//	vector<int> v;
//	
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count(v.begin(), v.end(), 30);
//	cout << "元素个数为" << num << endl;
//
//	//统计自定义数据类型
//	vector<Person> v1;
//
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 20);
//	Person p5("e", 20);
//
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	Person pp("f", 20);
//
//	num = count(v1.begin(), v1.end(), pp);
//	cout << "与f同岁的人的个数为" << num << endl;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>//包含头文件
//#include<string>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//
//class Greater20 {
//public:
//	bool operator()(int val) {
//		return val > 20;
//	}
//};
//
//class Ageless30 {
//public:
//	bool operator()(Person& p) {
//		return p.age < 30;
//	}
//};
//
//int main() {
//	//统计内置数据类型
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(35);
//	v.push_back(20);
//	v.push_back(40);
//
//	int num = count_if(v.begin(), v.end(), Greater20());
//	cout << "元素个数为：" << num << endl;
//
//	//统计自定义数据类型
//	vector<Person> v1;
//
//	Person p1("a", 10);
//	Person p2("b", 25);
//	Person p3("c", 40);
//	Person p4("d", 20);
//	Person p5("e", 20);
//
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	num = count_if(v1.begin(), v1.end(), Ageless30());
//	cout << "年龄小于35的人的个数为：" << num << endl;
//}