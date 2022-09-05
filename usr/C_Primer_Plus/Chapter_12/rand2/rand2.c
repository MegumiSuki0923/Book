static unsigned int next = 1;

unsigned int rand1(void)
{
	next = next * 1103515245 + 12345;
	return (next/65535)%32768;
}

void srand1(unsigned int seed)
{
	next = seed;
}
