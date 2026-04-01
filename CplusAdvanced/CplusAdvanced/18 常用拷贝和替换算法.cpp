//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//int main() {
//	vector<int> v;
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(20);
//
//	for_each(v.begin(), v.end(), Myprint());
//	cout << endl;
//
//	vector<int> v1;
//	v1.resize(v.size());//提前指定v1的大小
//
//	copy(v.begin(), v.end(), v1.begin());
//	for_each(v.begin(), v.end(), Myprint());
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//int main() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(30);	
//	v.push_back(20);
//
//	cout << "替换前" << endl;
//	for_each(v.begin(), v.end(), Myprint());
//	cout << endl;
//
//	replace(v.begin(), v.end(), 10, 100);
//	cout << "替换后" << endl;
//	for_each(v.begin(), v.end(), Myprint());
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//class Less30 {
//public:
//	bool operator()(int val) {
//		return val < 30;
//	}
//};
//
//int main() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//
//	cout << "替换前" << endl;
//	for_each(v.begin(), v.end(), Myprint());
//	cout << endl;
//
//	replace_if(v.begin(), v.end(), Less30(), 30);
//
//	cout << "替换后" << endl;
//	for_each(v.begin(), v.end(), Myprint());
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//int main() {
//	vector<int> v;
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//		v1.push_back(i + 1);
//	}
//
//	cout << "交换前" << endl;
//	for_each(v.begin(), v.end(), Myprint());
//	cout << endl;
//	for_each(v1.begin(), v1.end(), Myprint());
//	cout << endl;
//	cout << "--------------------" << endl;
//
//	swap(v, v1);
//
//	cout << "交换后" << endl;
//	for_each(v.begin(), v.end(), Myprint());
//	cout << endl;
//	for_each(v1.begin(), v1.end(), Myprint());
//}