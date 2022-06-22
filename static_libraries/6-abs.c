# include <stdio.h>
# include "main.h"
/**
 * _abs - guess it
 *@i: Character value
 *
 * Return:  0 if Succeess
*/

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return ((-1 * i));
	}
	else
	{
		return (0);
	}
}
