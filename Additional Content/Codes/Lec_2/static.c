#include <stdio.h> 
/* function declaration */
void next(void);

static int counter = 7; /* global variable */

int main() 
{

 while(counter<10) {
      next();
      counter++;   }
return 0;

}

void next( void ) 
{    
/* function definition */
   
	static int iteration = 13; /* local static variable */
	iteration ++;
	printf("iteration=%d and counter= %d\n", iteration, counter);
}

// code 2

#include <stdio.h>
 static int g = 5;
 void fn(){
 	static int i = 0;
 	printf("g = %d\t", g--);
 	printf("i = %d\n",i++);
 }
int main(){
  while(g >= 2)
  fn();
  return 0;
}