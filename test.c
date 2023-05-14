#include "accessories.h"
#include <string.h>
string test()
{
	return "abc";
}
int main()
{
	u8 i;
	i = accessory_options();
	i = universal_options();
	i = common_options();
	i = melee_options();
	i = ranged_options();
	i = magic_summoning_options();
	string a = test();
	printf("+------------------------------+\n");
	printf("|      %-24s|\n", a);
	printf("+------------------------------+");
}