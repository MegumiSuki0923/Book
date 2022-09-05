#include "tv.h"

using std::cout;
using std::endl;

bool Tv::volup()
{
	if(volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown()
{
	if(volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if(channel < MaxChan)
		channel++;
	else
		channel = MinChan;
}

void Tv::chandown()
{
	if(channel > MinChan)
		channel--;
	else
		channel = MaxChan;
}

void Tv::show_settings() const
{
	cout << "TV's stage is " << ((stage == on) ? "on" : "off") << endl;
	if(stage == on)
	{
		cout << "Volume is " << volume << endl;
		cout << "Channel is " << channel << endl;
		cout << "Input is " << ((input == TV) ? "TV" : "DVD") << endl;
	}
}

void Tv::set_remote_mode(Remote &r)
{
	if(stage == on)
		r.set_remote_mode();
}
