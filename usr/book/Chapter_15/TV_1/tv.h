#ifndef __TV_H__
#define __TV_H__

#include <iostream>

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

class Remote
{
	private:
		int mode;

	public:
		Remote(int m = Tv::TV) : mode(m) {}
		void onoff(Tv &t) {t.onoff();}
		bool volup(Tv &t) {return t.volup();}
		bool voldown(Tv &t) {return t.voldown();}
		void chanup(Tv &t) {t.chanup();}
		void chandown(Tv &t) {t.chandown();}
		void set_channel(Tv &t, int c) {t.channel = c;}
		void set_input(Tv &t) {t.setinput();}
};

#endif
