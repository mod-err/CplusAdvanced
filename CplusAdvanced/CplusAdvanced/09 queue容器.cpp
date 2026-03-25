//#include<iostream>
//#include <string>
//#include<queue>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string Name, int Age) : name(Name), age(Age){ }
//	string name;
//	int age;
//};
//
//void popqueue(queue<Person>& q) {
//	cout << "队列的大小为：" << q.size() << endl;
//	//!q.empty() == 1;即q.empty() == 0时执行
//	while (!q.empty()) {
//		cout << "查看队头----" << q.front().name << q.front().age << endl;
//		cout << "查看队尾----" << q.back().name << q.back().age << endl;
//		cout << "----------------------" << endl;
//		//队头出队
//		q.pop();
//	}
//	cout << "队列的大小为：" << q.size() << endl;
//	cout << "---------------------------------" << endl;
//}
//
//int main() {
//	queue<Person> q;
//
//	Person s1("孙悟空", 599);
//	Person s2("猪八戒", 999);
//	Person s3("沙和尚", 199);
//	Person s4("唐三藏", 299);
//	Person s5("白龙马", 399);
//
//	//入队
//	q.push(s1);
//	q.push(s2);
//	q.push(s3);
//	q.push(s4);
//	q.push(s5);
//
//	queue<Person> q1(q);
//
//	queue<Person> q2;
//	q2 = q;
//
//	popqueue(q);
//	popqueue(q1);
//	popqueue(q2);
//}