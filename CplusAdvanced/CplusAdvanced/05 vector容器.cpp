//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void printvec(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	printvec(v);
//
//	vector<int> v1(v.begin(), v.end());
//	printvec(v1);
//
//	vector<int> v2(10, 1);
//	printvec(v2);
//
//	vector<int>  v3(v2);
//	printvec(v3);
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void printvec(vector<int>& v){
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	printvec(v);
//
//	vector<int> v1;
//	v1 = v;//v1.operator=(v);
//	printvec(v);
//
//	vector<int> v2;
//	v2.assign(v.begin(), v.end());
//	printvec(v2);
//
//	vector<int> v3;
//	v3.assign(10, 100);
//	printvec(v3);
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void printvec(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	printvec(v);
//
//	if (v.empty()) {//v.empty()的返回值是1
//		cout << "v为空" << endl;
//	}
//	else {
//		cout << "v不为空" << endl;
//		cout << "v的容量为" << v.capacity() << endl;//动态存储，容量永远大于等于大小
//		cout << "v的大小为" << v.size() << endl;
//	}
//
//	v.resize(15);//默认用0填充
//	printvec(v);
//
//	v.resize(20, 100);//用指定值100填充
//	printvec(v);
//
//	v.resize(10);
//	printvec(v);
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void printvec(vector<int>& v) {
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	vector<int> v;
//
//	//尾插
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	printvec(v);
//	//尾删
//	v.pop_back();
//	printvec(v);
//	//插入
//	v.insert(v.begin(), 60);
//	printvec(v);
//	v.insert(v.begin(), 2, 60);
//	printvec(v);
//	//删除
//	v.erase(v.begin());
//	printvec(v);
//	v.erase(v.begin(), v.end());
//	printvec(v);
//	//清空
//	v.clear();
//	printvec(v);
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> v;
//
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	//迭代器输出
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//operator[]输出
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";//v.operator[](i) == v[i];
//	}
//	cout << endl;
//	//成员函数at()输出
//	for (int i = 0; i < v.size(); i++) {
//		cout << v.at(i) << " ";
//	}
//	cout << endl;
//	//访问首位元素
//	cout << "第一个元素为：" << v.front() << endl;
//	cout << "最后一个元素为：" << v.back() << endl;
//}

#include <iostream>
#include <vector>
using namespace std;

void printvec(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

/*----------元素互换------------*/
void test1() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	vector<int> v2;
	for (int i = 9; i >= 0; i--) {
		v2.push_back(i);
	}

	cout << "互换前：" << endl;
	printvec(v1);
	printvec(v2);

	v1.swap(v2);

	cout << "互换后：" << endl;
	printvec(v1);
	printvec(v2);
}

/*-----------内存收缩-----------*/
void test2() {
	vector<int> v;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i);
	}
	cout << "容量为：" << v.capacity() << endl;
	cout << "大小为：" << v.size() << endl;
	cout << "-----------------------" << endl;

	//重新指定大小
	v.resize(3);
	cout << "容量为：" << v.capacity() << endl;
	cout << "大小为：" << v.size() << endl;//大小变为3，但是容量没变，造成空间浪费
	cout << "-----------------------" << endl;

	//收缩内存
	vector<int>(v).swap(v);
	cout << "容量为：" << v.capacity() << endl;
	cout << "大小为：" << v.size() << endl;
	cout << "-----------------------" << endl;
	/*
	vector<int>(); 默认构造匿名对象
	vector<int>(v);拷贝构造匿名对象
	*/
}

int main() {
	test2();
}