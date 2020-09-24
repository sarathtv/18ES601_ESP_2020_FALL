#include <stdio.h>
/* function declaration */
int main()
{
	{
		register int  weight;
		int *ptr=&weight ;
		/*it produces an error when the compilation occurs */
		/*we cannot get a memory location when dealing with CPU register*/
	}
return 0;
}
