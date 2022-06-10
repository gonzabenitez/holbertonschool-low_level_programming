# include <stdio.h>
# include "main.h"
/**
 * _isupper- guess it
 *@i: Character value
 *
 * Return:  0 if Succeess
*/

int _isupper(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);

}
