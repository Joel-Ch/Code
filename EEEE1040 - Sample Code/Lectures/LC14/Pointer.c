#include <stdio.h>
#include <stdlib.h>


void main(void)
{
int  a=1, *b, c ;		/* Define variable types, initialise a to 1 */

b = &a;			/* b contains the address of a */

c = *b + 1;			/* c contains what ? */

printf("%i", c);

return;
}
