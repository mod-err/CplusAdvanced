//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void printlist(const list<int>& lst) {
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	list<int> lst;
//
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	lst.push_back(40);
//
//	printlist(lst);
//
//	list<int> lst1(lst.begin(), lst.end());
//	printlist(lst1);
//
//	list<int> lst2(10, 1);
//	printlist(lst2);
//
//	list<int> lst3(lst);
//	printlist(lst);
//}

//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void printlist(const list<int>& lst) {
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	list<int> lst;
//
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	lst.push_back(40);
//
//	printlist(lst);
//
//	list<int> lst1;
//	lst1 = lst;//lst1.operator=(lst);
//	printlist(lst1);
//
//	list<int> lst2;
//	lst2.assign(lst.begin(), lst.end());
//	printlist(lst1);
//
//	list<int> lst3;
//	lst3.assign(10, 1);
//	printlist(lst3);
//
//	
//	cout << "----------互换前----------" << endl;
//	cout << "lst："; printlist(lst);
//	cout << "lst3："; printlist(lst3);
//
//	lst.swap(lst3);
//
//	cout << "----------互换后----------" << endl;
//	cout << "lst："; printlist(lst);
//	cout << "lst3："; printlist(lst3);
//}

//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void printlist(const list<int>& lst) {
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	list<int> lst;
//
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	lst.push_back(40);
//
//	if (lst.empty()) {
//		cout << "容器空" << endl;
//	}
//	else {
//		cout << "容器不为空" << endl;
//		cout << "容器的大小为：" << lst.size() << endl;
//		printlist(lst);
//	}
//
//	lst.resize(10);
//	printlist(lst);
//	lst.resize(15, 10);
//	printlist(lst);
//
//	lst.resize(2);
//	printlist(lst);
//}

//#include<iostream>
//#include<list>
//
//using namespace std;
//
//void printlist(const list<int>& lst) {
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	list<int> lst;
//
//	//尾插
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//	//头插
//	lst.push_front(100);
//	lst.push_front(200);
//	lst.push_front(300);
//	printlist(lst);//300 200 100 10 20 30
//	//尾删
//	lst.pop_back();
//	printlist(lst);//300 200 100 10 20
//	//头删
//	lst.pop_front();
//	printlist(lst);//200 100 10 20
//	//插入
//	list<int>::iterator it = lst.begin();
//	//lst.insert(it++, 1000);//先赋值在＋＋，1000 200 100 10 20
//	lst.insert(++it, 1000);//先＋＋再赋值，200 1000 100 10 20
//	printlist(lst);
//	//删除
//	it = lst.begin();
//	lst.erase(++it);
//	printlist(lst);//200 100 10 20
//	//移除
//	lst.push_back(1000);
//	lst.push_back(1000);
//	lst.push_back(1000);
//	lst.remove(1000);//把所有的1000全部移除
//	printlist(lst);
//	//清除
//	lst.clear();
//	printlist(lst);
//}

//#include<iostream>
//#include<list>
//using namespace std;
//
//int main() {
//	list<int> lst;
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(30);
//
//	//cout << lst.at(0) << endl;//错误 不支持at访问数据
//	//cout << lst[0] << endl;   //错误 不支持[]方式访问数据
//	cout << "第一个元素为： " << lst.front() << endl;
//	cout << "最后一个元素为： " << lst.back() << endl;
//
//	//list容器的迭代器是双向迭代器，不支持随机访问
//	//it = it + 1;//错误，不可以跳跃访问，即使是+1，因为如果可以+1，那边可以＋n；所以list容器要避免这种写法，it = it + n;
//
//	list<int>::iterator it = lst.begin();
//	cout << *it++ << endl;//10
//	it = lst.begin();
//	//双向迭代器
//	cout << *++it << endl;//20
//	cout << *--it << endl;//10
//}

//#include<iostream>
//#include<list>
//using namespace std;
//
//void printlist(const list<int>& lst) {
//	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//bool compare(int v1, int v2) {
//	return v1 > v2;
//}
//
//int main() {
//	list<int> lst;
//	lst.push_back(50);
//	lst.push_back(40);
//	lst.push_back(20);
//	lst.push_back(10);
//	lst.push_back(30);
//
//	cout << "-----倒置前----" << endl;
//	printlist(lst);
//	cout << "-----倒置后----" << endl;
//	lst.reverse();
//	printlist(lst);
//	cout << endl;
//
//	cout << "-----排序前----" << endl;
//	printlist(lst);
//	cout << "-----排序后：升序----" << endl;
//	lst.sort();//默认升序：从小到大
//	//list不支持随机访问，所以无法使用全局排序函数sort();但list内部有排序的成员函数list.sort();
//	printlist(lst);
//	cout << "-----排序后：降序----" << endl;
//	lst.sort(compare);
//	printlist(lst);
//}

//#include <iostream>
//#include <string>
//#include <list>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age, int height, int weight) {
//		this->name = name;
//		this->age = age;
//		this->height = height;
//		this->weight = weight;
//	}
//	string name;
//	int age;
//	int height;
//	int weight;
//};
//
//void printlist(const list<Person> L) {
//	for (list<Person>::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << "姓名：" << (*it).name << " 年龄：" << it->age << " 身高：" << it->height << " 体重：" << it->weight << endl;
//	}
//}
//
////排序规则
//bool mycompare(Person& p1, Person& p2) {
//	if (p1.age == p2.age) {
//		if (p1.height == p2.height) {
//			return p1.weight > p2.weight;
//		}
//		else {
//			return p1.height > p2.height;
//		}
//	}
//	else {
//		return p1.age < p2.age;
//	}
//}
//
//int main() {
//	list<Person> L;
//
//	Person p1("刘备", 35, 175, 120);
//	Person p2("曹操", 45, 180, 100);
//	Person p3("孙权", 40, 170, 100);
//	Person p4("赵云", 25, 190, 100);
//	Person p5("张飞", 35, 200, 150);
//	Person p6("关羽", 35, 200, 140);
//
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_front(p5);
//	L.push_front(p6);
//
//	cout << "------------排序前-----------" << endl;
//	printlist(L);
//
//	cout << "------------排序后-----------" << endl;
//	L.sort(mycompare);
//	printlist(L);
//}