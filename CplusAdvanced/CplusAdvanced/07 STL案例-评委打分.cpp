//#include <iostream>
//#include <string>
//#include <vector>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
////选手类
//class Person {
//public:
//	Person(string name, int score) {
//		this->name = name;
//		this->score = score;
//	}
//	string name;
//	int score;
//};
//
//void setperson(vector<Person>& v){
//	//创建选手
//	string index = "ABCDE";
//	for(int i = 0; i < 5; i++) {
//		string name = "选手";
//		name += index[i];//name.operator+=(index.operator[](i));
//		Person p(name, 0);
//		v.push_back(p);
//	}
//	//显示选手
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//	//	cout << "姓名：" << (*it).name << "\t得分：" << it->score << endl;
//	//}
//}
//
//void setscore(vector<Person>& v) {
//	for (int i = 0; i < v.size(); i++) {
//
//		deque<int> d; 
//
//		for (int i = 0; i < 10; i++) {
//			int score = rand() % 41 + 60;//rand()%40是0~39，总范围60~99；rand()%41是0~40，总范围60~100
//			d.push_back(score);
//		}
//
//		//测试代码
//		//for (int i = 0; i < d.size(); i++) {
//		//	cout << d[i] << " ";
//		//}
//		//cout << endl;
//
//		//从小到大排序
//		sort(d.begin(), d.end());
//		d.pop_front();//去掉最小值
//		d.pop_back(); //去掉最大值
//
//		//获取平均分
//		int sum = 0;
//		for (deque<int>::iterator it = d.begin(); it != d.end();it++) {
//			sum += *it;
//		}
//		int avg = sum / d.size();
//
//		v[i].score = avg;//v.operator[](i).score = avg;
//	}
//}
//
//void showperson(const vector<Person>& v) {
//	for (vector<Person>::const_iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名：" << (*it).name << "\t得分：" << it->score << endl;
//	}
//}
//
//int main() {
//	//创建随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1.创建五名选手，放到vector中
//	vector<Person> v;
//	setperson(v);
//	//2.打分
//	setscore(v);
//	//3.显示分数
//	showperson(v);
//}