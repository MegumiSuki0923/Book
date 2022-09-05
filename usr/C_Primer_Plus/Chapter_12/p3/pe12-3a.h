#define ME	0
#define US	1

void set_mode(int *mode);
void get_info(int mode, double *distance, double *fuel);
void show_info(int mode, double distance, double fuel);
