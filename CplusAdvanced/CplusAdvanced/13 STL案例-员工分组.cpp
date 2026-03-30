//#include<iostream>
//#include<vector>
//#include<map>
//#include<string>
//
//using namespace std;
//
//class Worker {
//public:
//	string name = " ";
//	int salary = 0;
//};
//
//void createWorker(vector<Worker>& v) {
//	Worker w;
//	string index = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++) {
//		string name = "员工";
//		//name.operator+=(index.operator[](i));
//		name += index[i];
//		w.name = name;
//		w.salary = rand() % 10001 + 10000; //[10000, 20000]
//		v.push_back(w);
//	}
//	//测试
//	//for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
//	//	cout << it->name << " " << (*it).salary << endl;
//	//}
//}
//
//void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
//	/*
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
//		int index = rand() % 3 + 1;//[1, 3]
//		m.insert(make_pair(index, *it));
//	}
//	*/
//
//	for (int i = 0; i < 10; i++) {
//		int index = rand() % 3 + 1;//[1, 3]
//		m.insert(make_pair(index, v[i]));
//	}
//
//	//测试
//	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << it->first << " " << it->second.name << " " << (*it).second.salary << endl;
//	}
//}
//
//void showWorker(multimap<int, Worker>& m) {
//	//初始化参数
//	multimap<int, Worker>::iterator pos = m.begin();
//	int num = 0;
//	int index = 0;
//
//	cout << "----------策划部门----------" << endl;
//
//	num = m.count(1);
//	for (pos = m.find(1), index = 0; pos != m.end() && index < num; pos++, index++) {
//		cout << "姓名：" << pos->second.name << "\t薪资：" << pos->second.salary << endl;
//	}
//
//	cout << "----------美术部门----------" << endl;
//
//	num = m.count(2);
//	for (pos = m.find(2), index = 0; pos != m.end() && index < num; pos++, index++) {
//		cout << "姓名：" << pos->second.name << "\t薪资：" << pos->second.salary << endl;
//	}
//
//	cout << "----------研发部门----------" << endl;
//
//	num = m.count(3);
//	for (pos = m.find(3), index = 0; pos != m.end() && index < num; pos++, index++) {
//		cout << "姓名：" << pos->second.name << "\t薪资：" << pos->second.salary << endl;
//	}
//}
//
//int main() {
//	//创建员工
//	vector<Worker> v;
//	createWorker(v);
//
//	//随机分组
//	multimap<int, Worker> m;
//	setGroup(v, m);
//
//	//显示信息
//	showWorker(m);
//}