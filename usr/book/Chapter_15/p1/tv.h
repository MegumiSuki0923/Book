#ifndef __TV_H__
#define __TV_H__

#include <iostream>

class Remote;
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
		void set_remote_mode(Remote &r);

		//友元类
		friend class Remote;
};

class Remote
{
	private:
		enum{Normal, InterActive};
		int mode;
		int remote_mode;

	public:
		Remote(int m = Tv::TV, int rm = Normal) : mode(m), remote_mode(rm){}
		void onoff(Tv &t) {t.onoff();}
		bool volup(Tv &t) {return t.volup();}
		bool voldown(Tv &t) {return t.voldown();}
		void chanup(Tv &t) {t.chanup();}
		void chandown(Tv &t) {t.chandown();}
		void set_channel(Tv &t, int c) {t.channel = c;}
		void set_input(Tv &t) {t.setinput();}
		int show_remote_mode() const {return remote_mode;}
		void set_remote_mode(){remote_mode = (remote_mode == Normal) ? InterActive : Normal;}

		friend class Tv;
};

#endif
