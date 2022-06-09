# include <stdio.h>
# include "main.h"
/**
 * jack_bauer - guess it
 *
 * Return: Always 0 (Succeess)
*/

void jack_bauer(void)
{
	int ha, hb, ma, mb;

	for (ha = '0'  ; ha <= '2' ; ha++)
	{
		for (hb = '0' ; hb <= '9' ; hb++)
		{	
			if (ha == '2' && hb >= '4')
			       break;	
			for (ma = '0' ; ma < '6' ; ma++)
			{
				for (mb = '0' ; mb <= '9' ; mb++)
				{
				_putchar(ha);
				_putchar(hb);
				_putchar(':');
				_putchar(ma);
				_putchar(mb);
				_putchar('\n');
				}
			}
		 
		}
	}

}
