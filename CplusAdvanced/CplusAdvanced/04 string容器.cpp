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

#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1;

	const char* str = "hello world";//常量指针
	string s2(str);
}