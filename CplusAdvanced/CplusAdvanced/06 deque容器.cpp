//#include <iostream>
//#include <deque>
//using namespace std;
//
////普通打印输出
////void printdeq(deque<int>& d) {
////	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
////		//*it = 10;
////		cout << *it << " ";
////	}
////	cout << endl;
////}
////防止修改打印输出
//void printdeq(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main() {
//	deque<int> d;
//	for (int i = 0; i < 10; i++) {
//		d.push_back(i);
//	}
//	printdeq(d);
//
//	deque<int> d2(d.begin(), d.end());
//	printdeq(d2);
//
//	deque<int> d3(10, 1);
//	printdeq(d3);
//
//	deque<int> d4(d3);
//	printdeq(d4);
//}

//#include <iostream>
//#include <deque>
//using namespace std;
//
//void printdeq(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	deque<int> d;
//	for (int i = 0; i < 10; i++) {
//		d.push_back(i);
//	}
//	printdeq(d);
//
//	deque<int> d1;
//	d1.operator=(d);
//	printdeq(d1);
//
//	deque<int> d2;
//	d2.assign(d.begin(), d.end());
//	printdeq(d2);
//
//	deque<int> d3;
//	d3.assign(10, 1);
//	printdeq(d3);
//}

//#include <iostream>
//#include <deque>
//using namespace std;
//
//void printdeq(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	deque<int> d;
//	for (int i = 0; i < 10; i++) {
//		d.push_back(i);
//	}
//	printdeq(d);
//
//	if (d.empty()) { //d.empty() == 1;返回值为int类型
//		cout << "容器为空" << endl;
//	}
//	else {
//		cout << "容器不为空" << endl;
//		cout << "容器的大小为：" << d.size() << endl;
//	}
//
//	d.resize(15);//默认用0填充
//	printdeq(d);
//
//	d.resize(20, 1);//用给定值1填充
//	printdeq(d);
//
//	d.resize(5);
//	printdeq(d);
//}

//#include <iostream>
//#include <deque>
//using namespace std;
//
//void printdeq(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01() {
//	deque<int> d;
//	//尾插
//	d.push_back(10);
//	d.push_back(20);
//	//头插
//	d.push_front(100);
//	d.push_front(200);
//	printdeq(d);//200 100 10 20
//
//	//尾删
//	d.pop_back();
//	//头删
//	d.pop_front();
//	printdeq(d);//100 10
//}
//void test02() {
//	deque<int> d;
//	//指定位置插入1个数据
//	d.insert(d.begin(), 10);
//	d.insert(d.end(), 20);
//	//指定位置插入n个num
//	d.insert(d.end(), 2, 30);
//	printdeq(d);//10 20 30 30
//	//利用迭代器
//	deque<int>::iterator it = d.begin();
//	it++;
//	d.insert(it, 2, 15);
//	printdeq(d);//10 15 15 20 30 30
//	//插入区间
//	deque<int> d1;
//	d1.push_front(100);
//	d1.push_front(200);
//	printdeq(d1);//200 100
//	d.insert(d.begin(), d1.begin(), d1.end());
//	printdeq(d);//200 100 10 15 15 20 30 30
//
//	//删除指定位置
//	d1.erase(d1.begin());
//	printdeq(d1);//100
//	//删除区间
//	d1.erase(d1.begin(), d1.end());
//	printdeq(d1);
//	//清除
//	d.clear();
//	printdeq(d);
//}
//
//int main() {
//	test02();
//}

//#include <iostream>
//#include <deque>
//using namespace std;
//
//int main() {
//	deque<int> d;
//
//	for (int i = 0; i < 10; i++) {
//		d.push_back(i);
//	}
//
//	//迭代器访问数据
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//operator[]访问
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " "; //d.operator[](i) == d;
//	}
//	cout << endl;
//
//	//成员函数at()输出
//	for (int i = 0; i < d.size(); i++) {
//		cout << d.at(i) << " "; 
//	}
//	cout << endl;
//
//	//访问首尾元素
//	cout << "第一个元素为：" << d.front() << endl;
//	cout << "最后一个元素为：" << d.back() << endl;
//}

//#include <iostream>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
//void printdeq(const deque<int>& d) {
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main() {
//	deque<int> d;
//	d.push_back(30);
//	d.push_back(200);
//	d.push_back(10);
//	d.push_front(40);
//	d.push_front(500);
//	d.push_front(60);
//
//	printdeq(d);//60 500 40 30 200 10
//
//	/*
//	sort默认排序顺序：从小到大
//	支持随机访问的迭代器的容器，都可以用sort排序，vector容器也可以
//	*/
//
//	sort(d.begin(), d.end());
//	printdeq(d);//10 30 40 60 200 500
//}