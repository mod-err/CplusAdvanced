//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Myadd {
//public:
//	int operator()(int a, int b) {
//		return a + b;
//	}
//};
//
//class Myprint {
//public:
//	Myprint() : count(0){ }
//
//	void operator()(string test) {
//		cout << test << endl;
//		this->count++;
//	}
//
//	int count;
//};
//
//void doprint(Myprint& myprint, string test) {
//	myprint(test);
//}
//
//int main() {
//	Myadd myadd;
//	cout << myadd(1, 2) <<endl;//myadd.operator()(1, 2)
//
//	Myprint myprint;
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	cout << "函数的调用次数为：" << myprint.count << endl;
//
//	doprint(myprint, "hello C++");
//}

//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//class GreaterFive {
//public:
//	bool operator()(int value) {
//		return value > 5;
//	}
//};
//
//int main() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	
//	if (it == v.end()) {
//		cout << "没找到!" << endl;
//	}
//	else {
//		cout << "找到:" << *it << endl;
//	}
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//void printvector(vector<int> &v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//class compare {
//public:
//	bool operator()(int a, int b) {
//		return a > b;
//	}
//};
//int main() {
//	vector<int> v;
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//
//	sort(v.begin(), v.end());
//	printvector(v);
//
//	sort(v.begin(), v.end(), compare());
//	printvector(v);
//}

#include<iostream>
#include<functional>

using namespace std;

int main() {
	negate<int> n;
	cout << n(10) << endl;

	plus<int> p;
	cout << p(1, 2) << endl;
}