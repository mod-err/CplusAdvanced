//

//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<numeric>
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
//	v.resize(10);
//
//	fill(v.begin(), v.end(), 100);
//
//	for_each(v.begin(), v.end(), Myprint());
//}

#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

class Myprint {
public:
	void operator()(int val) {
		cout << val << " ";
	}
};

int main() {
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	vector<int> vTarget;
	vTarget.resize(min(v1.size(), v2.size()));
	vector<int>::iterator it_end = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

	for_each(v1.begin(), v1.end(), Myprint());
	cout << endl;
	for_each(v2.begin(), v2.end(), Myprint());
	cout << endl;
	for_each(vTarget.begin(), vTarget.end(), Myprint());
	cout << endl;
	for_each(vTarget.begin(), it_end, Myprint());
}
