#pragma once
#include <iostream>
#include <string>
using namespace std;

template<class T>
class MyArry {
public:
	MyArry(int capacity) {
		//cout << "有参构造被被调用" << endl;
		this->capacity = capacity;
		this->size = 0;
		this->pAddress = new T[this->capacity];
	}
	~MyArry() {
		//cout << "析构函数被调用" << endl;
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
	MyArry(const MyArry& arr) {
		//cout << "拷贝构造函数被调用" << endl;
		this->capacity = arr.capacity;
		this->size = arr.size;
		this->pAddress = new T[arr.capacity];
		//如果数组中有数据，将数据一并拷贝
		for (int i = 0; i < this->capacity; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
	}
	MyArry& operator=(const MyArry& arr) {
		//cout << "重载函数被调用" << endl;
		if (this->pAddress != NULL) {
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
		this->capacity = arr.capacity;
		this->size = arr.size;
		this->pAddress = new T[arr.capacity];
	
		for (int i = 0; i < this->capacity; i++) {
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}
	//尾插法插入数据
	void pushback(const T& value) {
		if (this->capacity == this->size) {
			return;
		}
		else {
			this->pAddress[this->size] = value;
			this->size++;
		}
	}
	//尾删法删除数据
	void popback() {
		if (this->size == 0) {
			return;
		}
		else {
			this->size--;
		}
	}
	//通过下标arr[]访问数组元素，引用的方式返回数据本身，能进行赋值操作，例：arr[] = 100;
	T& operator[](int index) {
		return this->pAddress[index];
	}
	//返回数组容量
	int getcapacity() {
		return this->capacity;
	}
	//返回数组大小
	int getsize() {
		return this->size;
	}
private:
	T* pAddress;//指针指向堆区开辟的真实数组
	int capacity;//数组容量
	int size;//数组大小
};