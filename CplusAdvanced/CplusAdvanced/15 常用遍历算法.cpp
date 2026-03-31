//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
////仿函数，要创建匿名对象，即传入类的对象
//class print1 {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
////普通函数，直接传入函数名称即可
//void print2(int val){
//	cout << val << " ";
//}
//
//int main() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	for_each(v.begin(), v.end(), print1());
//	cout << endl;
//	for_each(v.begin(), v.end(), print2);
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
////搬运过程中，将原值+10
//class Transform {
//public:
//	int operator()(int val) {
//		return val + 10;
//	}
//};
//
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//int main() {
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	vector<int> v1;
//	v1.resize(v.size());
//
//	transform(v.begin(), v.end(), v1.begin(), Transform());
//
//	for_each(v1.begin(), v1.end(), Myprint());
//}