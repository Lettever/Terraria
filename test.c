#include "accessories.h"
#include <string.h>
string test()
{
	return "abc";
}
struct a
{
	string name;
	i32 i;
	f32 f;	
};
struct a new_a(string str, i32 it, f32 flo)
{
	return (struct a){.name = str, .i = it, .f = flo};
}
void print_a(struct a w)
{
	printf("%s\t%i\t%f\n", w.name, w.i, w.f);
}
int main()
{
	u64 i;
	i = accessory_options();
	i = universal_options();
	i = common_options();
	i = melee_options();
	i = ranged_options();
	i = magic_summoning_options();
	string a = test();
	printf("+------------------------------+\n");
	printf("|      %-24s|\n", a);
	printf("+------------------------------+\n");
	struct a idk_a;
	print_a(idk_a);
	idk_a = new_a("asd", 23, 43.2);
	print_a(idk_a);
}