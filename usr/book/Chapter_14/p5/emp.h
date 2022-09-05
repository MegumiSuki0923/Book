#ifndef __EMP_H__
#define __EMP_H__

#include <iostream>
#include <string>

class abstr_emp
{
private:
	std::string fname;
	std::string lname;
	std::string job;

public:
	abstr_emp();
	abstr_emp(const std::string &fn, const std::string &ln, const std::string &j) : fname(fn), lname(ln), job(j) {}
	virtual void ShowAll() const;
	virtual void SetAll();
	friend std::ostream &operator<<(std::ostream &os, const abstr_emp &e);
	virtual ~abstr_emp() = 0;
};

class employee : public abstr_emp
{
public:
	employee() : abstr_emp() {}
	employee(const std::string &fn, const std::string &ln, const std::string &j) : abstr_emp(fn, ln, j) {}
	virtual void ShowAll() const;
	virtual void SetAll();
};

class manager : virtual public abstr_emp
{
private:
	int inchargeof;

public:
	int InChargeOf() const { return inchargeof; }
	int &InChargeOf() { return inchargeof; }

public:
	manager() : abstr_emp(), inchargeof(0) {}
	manager(const std::string &fn, const std::string &ln, const std::string &j, int ico) : abstr_emp(fn, ln, j), inchargeof(ico) {}
};

#endif