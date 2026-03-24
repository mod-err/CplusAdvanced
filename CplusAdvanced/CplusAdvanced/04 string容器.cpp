//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void printstr(char* str, int len) {
//	for (int i = 0; i < len; i++) {
//		cout << str[i];//*(str + i) == str[i];
//	}
//}
//int main() {
//	char ch[] = "hello world";
//	char* str = ch;//数组名即为首地址
//
//	cout << str << endl;
//	cout << *str << endl;
//	cout << str[1] << endl;
//	cout << *(str + 1) << endl;
//
//	int len = sizeof(ch) / sizeof(char) - 1;
//	cout << "数组长度:" << len << endl;
//	printstr(ch, len);
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	string s1;//默认构造
//
//	const char* str = "hello world";//常量指针
//	string s2(str);
//
//	string s3(s2);//拷贝构造
//
//	string s4(10, 'a');
//	cout << s4 << endl;//string类内部重载了operator<<(cout, s4);
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	string s1;
//	s1 = "hello world";//s1.operator=("hello world");
//	cout << "s1 = " << s1 << endl;
//
//	string s2;
//	s2 = s1;
//	cout << "s2 = " << s2 << endl;
//
//	string s3;
//	s3 = 'c';
//	cout << "s3 = " << s3 << endl;
//
//	string s4;
//	s4.assign("hello world");
//	cout << "s4 = " << s4 << endl;
//
//	string s5;
//	s5.assign("hello world", 5);
//	cout << "s5 = " << s5 << endl;
//
//	string s6;
//	s6.assign(s5);
//	cout << "s6 = " << s6 << endl;
//
//	string s7;
//	s7.assign(10, 'a');
//	cout << "s7 = " << s7 << endl;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s1 = "我";
//	s1 += "爱游戏";//s1.operator+=("爱游戏");
//	cout << "s1 = " << s1 << endl;
//
//	s1 += 's';//字符char用''
//	cout << "s1 = " << s1 << endl;
//	
//	string s2 = "LOL DNF";
//	s1 += s2;
//	cout << "s1 = " << s1 << endl;
//
//	string s3 = "I";//字符串string用""
//	s3.append(" love");
//	cout << s3 << endl;
//
//	s3.append(" game abcd", 6);
//	cout << s3 << endl;
//
//	s3.append(s2);
//	cout << s3 << endl;
//
//	s3.append(s2, 0, 3);
//	cout << s3 << endl;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s1 = "abcdefgde";//下标从0开始
//	int pos = s1.find("de");
//	cout << "pos = " << pos << endl;//pos = 3;
//
//	//find从左往右查，rfind从右往左查
//	pos = s1.rfind("de");
//	cout << "pos = " << pos << endl;//pos = 7;
//
//	//对比可知，replace(1, 3, " ")，""引号中有多少加多少进去
//	string s2 = "abcdef";
//	s2.replace(1, 3, "111");//从1号位置起，s2中的3个字符替换为111
//	cout << "s2 = " << s2 << endl;
//
//	string s3 = "abcdef";
//	s3.replace(1, 3, "1111");//从1号位置起，s2中的3个字符替换为1111
//	cout << "s3 = " << s3 << endl;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s1 = "hello";
//	string s2 = "hello";
//
//	if (s1.compare(s2) == 0) {
//		cout << "s1 = s2" << endl;
//	}
//	else if (s1.compare(s2) > 0) { //s1 = "xello"; s2 = "hello"; 'x'的ASCII码大于'h'，s1 > s2
//		cout << "s1 > s2" << endl;
//	}
//	else if (s1.compare(s2) < 0) {
//		cout << "s1 < s2" << endl;
//	}
//}

//#include <iostream>
//#include <string>
//
//using namespace std;

//void printstr(string& s) {
//	for (int i = 0; i < s.size(); i++) {
//		cout << s[i];
//	}
//	cout << endl;
//}

//void printstr(string* s) {
//	for (int i = 0; i < (*s).size(); i++) {
//		cout << (*s)[i];
//	}
//	cout << endl;
//}
//
//
//int main() {
//	string s1 = "hello";
//
//	//通过[]读取字符串
//	for (int i = 0; i < s1.size(); i++) {
//		cout << s1[i];
//	}
//	cout << endl;
//	//通过at()读取字符串
//	for (int i = 0; i < s1.size(); i++) {
//		cout << s1.at(i);
//	}
//	cout << endl;
//
//	//字符用''，字符串用""
//	s1[0] = 'x';
//	printstr(&s1);//xello
//	s1.at(1) = 'x';
//	printstr(&s1);//xxllo
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s1 = "abcde";
//	s1.insert(1, "111");
//	cout << s1 << endl;//s1 = a111bcde
//
//	s1.erase(1, 3);//删除从第1号位置开始的3个字符
//	cout << s1 << endl;//s1 = abcde
//
//	s1.insert(1, 3, '1');
//	cout << s1 << endl;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string s1 = "zhangsan@163.com";
//	string s2 = s1.substr(0, 8);
//	cout << s2 << endl;
//
//	int pos = s1.find("@");
//	cout << pos << endl;
//	string s3 = s1.substr(0, pos);
//	cout << s3 << endl;
//
//}
