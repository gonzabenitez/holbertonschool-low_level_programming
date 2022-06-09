# include <stdio.h>
# include "main.h"
/**
 * _islower - guess it
 *@i: Character value
 *
 * Return:  0 if Succeess
*/

int _islower(int i)
{
	if (i >='a' && i <= 'z')
		return (1);
	else 
		return (0);

}
