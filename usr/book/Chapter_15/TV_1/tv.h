#ifndef __TV_H__
#define __TV_H__

#include <iostream>

class Tv;

class Remote
{
private:
	int mode;

	enum{off, on};
	enum{MinVal, MaxVal = 20};
	enum{MinChan = 1, MaxChan = 100};
	enum{TV, DVD};

public:
	Remote(int m = TV) : mode(m) {}
	void onoff(Tv &t);
	bool volup(Tv &t);
	bool voldown(Tv &t);
	void chanup(Tv &t);
	void chandown(Tv &t);
	void set_channel(Tv &t, int c);
	void set_input(Tv &t);
};

class Tv
{
	private:
		enum{off, on};
		enum{MinVal, MaxVal = 20};
		enum{MinChan = 1, MaxChan = 100};
		enum{TV, DVD};

		int stage;
		int volume;
		int channel;
		int input;

	public:
		Tv(int s = off) : stage(s), volume(5), channel(2), input(TV) {}
		void onoff() {stage = (stage == off) ? on : off;}
		bool volup();
		bool voldown();
		void chanup();
		void chandown();
		void setinput() {input = (input == TV) ? DVD : TV;}
		void show_settings() const;

		//友元类方法
		friend void Remote::set_channel(Tv &t, int c);
};

inline void Remote::onoff(Tv &t) { t.onoff(); }
inline bool Remote::volup(Tv &t) { return t.volup(); }
inline bool Remote::voldown(Tv &t) { return t.voldown(); }
inline void Remote::chanup(Tv &t) { t.chanup(); }
inline void Remote::chandown(Tv &t) { t.chandown(); }
inline void Remote::set_channel(Tv &t, int c) { t.channel = c; }
inline void Remote::set_input(Tv &t) { t.setinput(); }

#endif
