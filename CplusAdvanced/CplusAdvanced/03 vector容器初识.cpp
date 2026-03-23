//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void MyPrint(int value) {
//	cout << value << endl;
//}
//
//int main() {
//	//创建容器对象，vector类似于前面写的MyArry数组类，实例化一个对象v
//	vector<int> v;
//	//向容器中存放数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	/*
//	每一个容器都有自己的迭代器，迭代器是用来遍历容器中的元素
//	v.begin();返回迭代器，这个迭代器指向容器中第一个数据
//	v.end();返回迭代器，这个迭代器指向容器元素的最后一个元素的下一个位置
//	vector<int>::iterator 拿到vector<int>这种容器的迭代器类型
//	*/
//	vector<int>::iterator pbegin = v.begin();
//	vector<int>::iterator pend = v.end();
//
//	//第一种遍历方式
//	while (pbegin != pend) {
//		cout << *pbegin << endl;
//		pbegin++;
//	}
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	//第三种遍历方式：使用STL提供的标准遍历算法，头文件<algorithm>
//	for_each(v.begin(), v.end(), MyPrint);
//}

//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int age) {
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//
//int main() {
//
//	Person p1("孙悟空", 99); Person p2("猪八戒", 9); Person p3("唐三藏", 19); Person p4("沙和尚", 999); Person p5("白龙马", 29);
//
//	//存放Person类
//	vector<Person> v;
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		//cout << it->name << it->age <<endl;//it是指向Person的指针，类似Person* it = &p1;
//		cout << (*it).name << "\t" << (*it).age << endl; //(*it)解引用之后得到Person类的对象p1，p1.age == (*it).age;
//	}
//
//	//存放Person类的地址
//	vector<Person*> v1;
//	v1.push_back(&p1);//要传入地址，类似于Person* it = &p1;
//	v1.push_back(&p2); 
//	v1.push_back(&p3);
//	v1.push_back(&p4);
//	v1.push_back(&p5);
//
//	for (vector<Person*>::iterator it = v1.begin(); it != v1.end(); it++) {
//		cout << (*it)->name << "\t" << (*it)->age << endl;//it是指向Person*的指针，即二级指针，(*it)得到指向Person类的指针
//		cout << (*(*it)).name << "\t" << (*(*it)).age << endl;//(*(*it))得到Person类的对象p1
//	}
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	//容器嵌套容器
//	vector<vector<int>> v;
//	//创建内层容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//	//内存容器存放数据
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	//存放到外层容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	//打印输出容器
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++) {
//		//(*it) == <vector<int>; (*it)指向内层容器，通过(*it)获取内层容器的首尾
//		for (vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++) {
//			cout << *jt << " ";
//		}
//		cout << endl;
//	}
//}