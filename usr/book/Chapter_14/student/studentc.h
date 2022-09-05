#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>
#include <valarray>
#include <string>

using namespace std;

class Student
{
	private:
		typedef valarray<double> ArrayDb;
		string name;
		ArrayDb scores;	//valarray<double> scores;
	public:
		Student() : name("Null student"), scores() {} //相当于创建一个数组，但是没有传入任何元素
		//将其它的数据类型转换为类对象
		explicit Student(const string &s) : name(s), scores() {}
		explicit Student(int n) : name("Nully"), scores(n) {} //创建一个包含n个元素的int数组
		Student(const string &s, int n) : name(s), scores(n) {}
		Student(const string &s, const ArrayDb &a) : name(s), scores(a) {}
		Student(const string &s, const double *pd, int n) : name(s), scores(pd, n) {}
		~Student() {}
		double Average() const;
		const string &Name() const;
		double &operator[](int n); //stu[0] = 100
		double operator[](int n) const; //上下两个函数作用不同 上为修改成员函数 下位取出成员函数

		friend istream &operator>>(istream &is, Student &stu);
		friend istream &getline(istream &is, Student &stu);
		friend ostream &operator<<(ostream &os, const Student &stu);
};

#endif
