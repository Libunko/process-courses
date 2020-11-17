#include <stdio.h>

/* ctrl-z pause process, fg/bg continue process */
/* cpulimit to control cpu rate: cpulimut -l rate -p pid */

int main(int argc, const char *argv)
{
	int i = 0;
	while (1)
	{
		printf("i = %d\n", i++);
	}

	return 0;
}
