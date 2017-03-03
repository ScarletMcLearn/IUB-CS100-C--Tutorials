#include <cstdlib>
#include <ctime>

int randy_ranger(int lower_lim, int upper_lim)
{
	srand(time(0));

	return (lower_lim + rand() % (upper_lim - lower_lim + 1) );
}
