//#include <iostream>
//#include <set>
//
//using namespace std;
//
//void printset(const set<int>& s) {
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void printmultiset(const multiset<int>& s) {
//	for (multiset<int>::const_iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	set<int> s;
//	//二叉树结构不存在push_front()和push_back(); 只能使用insert();
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//	s.insert(30);
//	s.insert(20);
//
//	printset(s);//10 20 30 40
//
//	//拷贝构造
//	set<int> s2(s);
//	set<int> s3;
//	s3 = s;
//
//	multiset<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(20);
//
//	printmultiset(s1);//10 20 30 30 40
//}

//#include <iostream>
//#include <set>
//
//using namespace std;
//
//void printset(const set<int>& s) {
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	set<int> s;
//
//	s.insert(10);
//	s.insert(40);
//	s.insert(30);
//	s.insert(20);
//
//	printset(s);//10 20 30 40
//
//	if (s.empty()) {
//		cout << "容器空" << endl;
//	}
//	else {
//		cout << "容器非空" << endl;
//		cout << "容器的大小为：" << s.size() << endl;
//	}
//
//	set<int> s1;
//
//	s1.insert(100);
//	s1.insert(400);
//	s1.insert(300);
//	s1.insert(200);
//
//	cout << "------------交换前------------" << endl;
//	printset(s);
//	printset(s1);
//	cout << "------------交换后------------" << endl;
//	s.swap(s1);
//	printset(s);
//	printset(s1);
//}

//#include <iostream>
//#include <set>
//
//using namespace std;
//
//void printset(const set<int>& s) {
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	set<int> s;
//
//	s.insert(30);
//	s.insert(40);
//	s.insert(10);
//	s.insert(20);
//
//	printset(s);//10 20 30 40
//
//	set<int>::iterator it = s.begin();
//	//双向迭代器，不支持随机访问it = it + 3;
//	s.erase(++it);
//	//++it先自增，再赋值；删除是按照排序顺序进行删除
//	printset(s);//10 30 40
//
//	s.erase(30);
//	printset(s);//10 40
//
//	s.erase(s.begin(), s.end());
//	printset(s);
//}

//#include<iostream>
//#include<set>
//
//using namespace std;
//
//void printset(const set<int>& s) {
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	set<int> s;
//
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	s.insert(40);
//
//	printset(s);
//
//	set<int>::iterator pos = s.find(10);
//	if (pos == s.end()) {
//		cout << "未找到" << endl;
//	}
//	else {
//		cout << "找到了：" << *pos << endl;
//	}
//
//	int num = s.count(30);
//	cout << "num = " << num << endl;
//}

//#include<iostream>
//#include<set>
//
//using namespace std;
//
//int main() {
//	set<int> s;
//
//	//函数原型pair<iterator, bool> insert(value_type&& _Val){ }，返回值是pair<iterator, bool>
//	//pair本质是结构体，内部有两个模板类型：T1和T2。
//	//pair<set<int>::iterator, bool> 指明T1和T2类型
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second) { //ret.second == 1
//		cout << "插入成功" << endl;
//	}
//	else {
//		cout << "插入失败" << endl;
//	}
//}

//#include<iostream>
//#include<set>
//
//using namespace std;
//
//int main() {
//	pair<string, int> p("Tom", 20);
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//
//	pair<string, int> p1 = make_pair("Jeti", 18);
//	cout << "姓名：" << p1.first << " 年龄：" << p1.second << endl;
//}

#include<iostream>
#include<set>

using namespace std;

//指定排序规则
class mycompare {
public:
	bool operator()(int v1, int v2) const {
		return v1 > v2;
	}
};

int main() {

	set<int, mycompare> s;

	s.insert(50);
	s.insert(20);
	s.insert(30);
	s.insert(10);
	s.insert(40);

	for (set<int, mycompare>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

