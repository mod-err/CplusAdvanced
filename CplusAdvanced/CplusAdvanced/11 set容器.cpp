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

#include <iostream>
#include <set>

using namespace std;

void printset(const set<int>& s) {
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	set<int> s;

	s.insert(10);
	s.insert(40);
	s.insert(30);
	s.insert(20);

	printset(s);//10 20 30 40

	if (!s.empty()) {
		cout << "容器空" << endl;
	}


}