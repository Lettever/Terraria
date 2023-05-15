#include <stdio.h>
#include "C:\headers\rstypes.h"
typedef struct
{
	i32 i;
	f32 f;
}idk;
struct
{
	string temp;
	idk array[5];
}abc;
void print_stuff()
{
	printf("%s\n", abc.temp);
	i32 i;
	for(i = 0; i < 5; i++)
		printf("%i\t%f\n", abc.array[i].i, abc.array[i].f);
}
int main()
{
	abc.temp = "zxw";
	abc.array[0] = (idk){.i = 10, .f = 3.14f};
	print_stuff();	
}
