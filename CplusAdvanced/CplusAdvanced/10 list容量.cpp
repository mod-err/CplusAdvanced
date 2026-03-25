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

#include<iostream>
#include<list>

using namespace std;

void printlist(const list<int>& lst) {
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	list<int> lst;

	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);

	printlist(lst);

}