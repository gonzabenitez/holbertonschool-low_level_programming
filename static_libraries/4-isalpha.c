# include <stdio.h>
# include "main.h"
/**
 * _isalpha - guess it
 *@i: Character value
 *
 * Return:  0 if Succeess
*/

int _isalpha(int i)
{
	if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);

}
