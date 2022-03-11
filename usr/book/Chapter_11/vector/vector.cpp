#include "vector.h"
#include <cmath>

namespace VECTOR
{
	const double Rad_to_reg = 45.0 / atan(1.0);

	void Vector::set_mag()
	{
		mag = sqrt(x * x + y * y);
	}

	void Vector::set_ang()
	{
		if(x == 0.0 && y == 0.0)
			ang = 0.0;
		else
			ang = atan2(y, x);	//ang是一个弧度值
	}

	void Vector::set_x()
	{
		x = mag * cos(ang);
	}

	void Vector::set_y()
	{
		y = mag * sin(ang);
	}

	Vector::Vector()
	{
		x = y = mag = ang = 0.0;
		mode = RECT;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if(form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if(form == POL)
		{
			mag = n1;
			ang = n2 / Rad_to_reg;
			set_x();
			set_y();
		}
		else
		{
			cout << "Error" << endl;
			x = y = mag = ang = 0.0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode = form;
                if(form == RECT)
                {
                        x = n1;
                        y = n2;
                        set_mag();
                        set_ang();
                }
                else if(form == POL)
                {
                        mag = n1;
                        ang = n2 / Rad_to_reg;
                        set_x();
                        set_y();
                }
                else
                {
                        cout << "Error" << endl;
                        x = y = mag = ang = 0.0;
                        mode = RECT;
                }
	}

	void Vector::polar_mode()
	{
		mode = POL;
	}
	void Vector::rect_mode()
	{
		mode = RECT;
	}

	Vector Vector::operator+(const Vector &b) const
	{
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector &b) const
	{
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n) const
	{
		return Vector(n*x, n*y);
	}
	Vector operator*(double n, const Vector &a)
	{
		return a*n;
	}
	ostream &operator<<(ostream &os, const Vector &v)
	{
		if(v.mode == Vector::RECT)
			os << "x = " << v.x << " y = " << v.y << endl;
		else if(v.mode == Vector::POL)
			os << "mag = " << v.mag << " ang = " << v.mag << endl;
		else
			os << "Invaild mode" << endl;

		return os;
	}
}
