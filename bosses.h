#include "accessories.h"
#ifndef bosses_h
#define bosses_h
struct
{
	string name;
	item trophy, royal_gel, mask;
	item slimy_saddle, ninja_hood, ninja_shirt;
	item ninja_pants, slime_gun, slime_hook;
	item solidifier;
}const king_slime = 
{
	.name = "King Slime",
	.trophy = {.name = "Trophy", .value = 10000llu}, .royal_gel = {.name = "Royal Gel", .value = 20000llu},
	.mask = {.name = "Mask", .value = 7500llu}, .slimy_saddle = {.name = "Slimy Saddle", .value = 50000llu},
	.ninja_hood = {.name = "Ninja Hood", .value = 2000llu}, .ninja_shirt = {.name = "Ninja Shirt", .value = 1000llu}
	.ninja_pants = {.name = "Ninja Pants", .value = 1000llu}, slime_gun = {.name = "Slime Gun", .value = 3000llu},
	.slime_hook = {.name = "Slime Hook", .value = 4000llu}, .solidifier = {.name = "Solidifier", .value = 20000llu}
};
struct
{
	
}const EoC =
{
	
}
struct
{
	
}const EoW =
{
	
}
struct
{
	
}const BoC =
{
	
}
struct
{
	item bottled_honey, trophy, hive_pack;
	item bee_gun, bee_keeper, the_bees_knees;
	item bee_hat, bee_shirt, bee_pants;
	item hive_wand, honey_comb, nectar;
	item honeyed_goggles, beenades, bee_wax;
	item mask;
}const queen_bee =
{
	.bottled_honey = {.name = "Bottled Honey", .value = 8llu}, .trophy = {.name = "Trophy", .value = 10000llu},
	.hive_pack = {.name = "Hive Pack", .value = 20000llu}, .bee_gun = {.name = "Bee Gun", .value = 20000llu},
	.bee_keeper = {.name = "Bee Keeper", .value = 20000llu}, .the_bees_knees = {.name = "The Bee's Knees", .value = 20000llu},
	.bee_hat = {.name = "Bee Hat", .value = 5000llu}, .bee_shirt = {.name = "Bee Shirt", .value = 5000llu},
	.bee_pants = {.name = "Bee Pants", .value = 5000llu}, .hive_wand = {.name = "Hive Wand", .value = 5000llu},
	.honey_comb = {.name = "Honey Comb", .value = 20000llu}, .nectar = {.name = "Nectar", .value = 30000llu},
	.honeyed_goggles = {.name = "Honeyed Goggles", .value = 50000llu}, .beenades = {.name = "Beenades", .value = 500llu},
	.bee_wax = {.name = "Bee Wax", .value = 500llu}, .mask = {.name = "Mask", .value = 7500llu}
};
struct
{
	
}const skeletron =
{
	
}
struct
{
	
}const WoF =
{
	
}
typedef struct
{
	string file_name;
	string boss_name;
}file;
#endif