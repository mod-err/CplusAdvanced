//#include<iostream>
//#include<stack>
//
//using namespace std;
//
//void popstack(stack<int>& s) {
//	cout << "栈的大小为：" << s.size() << endl;
//	//如果栈不为空，s.empty() == 1;为空
//	while (!s.empty()) { 
//		//查看栈顶元素
//		cout << s.top() << endl;
//		//出栈
//		s.pop();
//	}
//	cout << "栈的大小为：" << s.size() << endl;
//	cout << "-------------------------" << endl;
//}
//int main() {
//	stack<int> s;
//	//入栈
//	s.push(40);
//	s.push(30);
//	s.push(20);
//	s.push(10);
//
//	stack<int> s1(s);
//
//	stack<int> s2;
//	s2 = s;//s2.operator=(s);
//
//	popstack(s);
//	popstack(s1);
//	popstack(s2);
//}