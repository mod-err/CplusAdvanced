//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void printmap(map<int, int>& m) {
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << "-------------------" << endl;
//}
//
//int main() {
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));//创建pair<int, int>类型的匿名对象
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//
//	printmap(m);//插入后的元素按照key值排序
//
//	//拷贝构造
//	map<int, int> m1(m);
//	printmap(m1);
//	//赋值
//	map<int, int> m2;
//	m2 = m;	//m2.operator=(m);
//	printmap(m2);
//}

//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void printmap(map<int, int>& m) {
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << "-------------------" << endl;
//}
//
//int main() {
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//
//	if (m.empty()) {
//		cout << "容器空" << endl;
//	}
//	else {
//		cout << "容器非空" << endl;
//		cout << "容器的大小为：" << m.size() << endl;
//		printmap(m);
//	}
//
//	map<int, int> m1;
//
//	m1.insert(pair<int, int>(1, 100));
//	m1.insert(pair<int, int>(2, 200));
//	m1.insert(pair<int, int>(3, 300));
//	m1.insert(pair<int, int>(4, 400));
//
//	cout << "交换前：" << endl;
//	printmap(m);
//	printmap(m1);
//	cout << "交换后：" << endl;
//	m.swap(m1);
//	printmap(m);
//	printmap(m1);
//}

//#include<iostream>
//#include<map>
//
//using namespace std;
//
//void printmap(map<int, int>& m) {
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//	cout << "-------------------" << endl;
//}
//
//int main() {
//	map<int, int> m;
//
//	//4种插入方式如下：
//	m.insert(pair<int, int>(1, 10));
//
//	m.insert(make_pair(2, 20));
//
//	m.insert(map<int, int>::value_type(3, 30));
//
//	m[4] = 40;
//	m[5];//不给顶value的值，默认为0
//
//	printmap(m);
//
//	//删除
//	m.erase(m.begin());
//	m.erase(--m.end());
//	printmap(m);
//
//	m.erase(2);//删除key = 2的元素
//	printmap(m);
//	
//	m.erase(m.begin(), m.end());
//	printmap(m);
//}

//#include<iostream>
//#include<map>
//
//using namespace std;
//
//class mycompare {
//public:
//	bool operator()(const int& m1, const int& m2) const {
//		return m1 > m2;
//	}
//};
//
//int main() {
//	map<int, int, mycompare> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(2, 40));
//	m.insert(make_pair(3, 20));
//	m.insert(make_pair(4, 30));
//
//	for (map<int, int, mycompare>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key = " << (*it).first << " value = " << it->second << endl;
//	}
//}