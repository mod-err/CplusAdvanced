//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<functional>
//
//using namespace std;
//
////利用for_each遍历过程中打印
//class Myprint {
//public:
//	void operator()(int val) {
//		cout << val << " ";
//	}
//};
//
//class Mycompare {
//public:
//	bool operator()(int a, int b) {
//		return a > b;
//	}
//};
//
//int main() {
//	//统计内置数据类型
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(35);
//	v.push_back(20);
//	v.push_back(40);
//
//	//默认升序
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Myprint());
//
//	cout << endl;
//
//	//降序排列----自定义谓词
//	sort(v.begin(), v.end(), Mycompare());
//	for_each(v.begin(), v.end(), Myprint());
//
//	cout << endl;
//
//	//降序排列----<functional>中内置谓词greater<int>()
//	sort(v.begin(), v.end(), greater<int>());
//	for_each(v.begin(), v.end(), Myprint());
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<random> //shuffle需要随机数引擎头文件  
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
//
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//
//	//创建真随机数种子
//	random_device rd;
//	//创建随机数生成器：梅森旋转算法，最常用
//	mt19937 g(rd());
//	shuffle(v.begin(), v.end(), g);
//
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
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 2);
//	}
//
//	//待存放的目标容器
//	vector<int> v;
//	v.resize(v1.size() + v2.size());
//	cout << "v的大小为：" << v.size() << endl;
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v.begin());
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
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(10);
//	v.push_back(20);
//
//	//反转前
//	for_each(v.begin(), v.end(), Myprint());//30 40 10 20
//	cout << endl;
//	//反转后
//	reverse(v.begin(), v.end());
//	for_each(v.begin(), v.end(), Myprint());//20 10 40 30
//}

