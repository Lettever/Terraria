#include "C:\headers\rstypes.h"
#include <stdio.h>
#ifndef accessories_h
#define accessories_h
const u64 base = 10000llu;

typedef struct
{
    string name;
    u64 value;
}modifier;
typedef struct
{
    string name;
    u64 value;	
}item;
typedef struct
{
	string file_name;
	u32 space;
}file;
union
{
    struct
    {
        modifier none, hard, jagged;
		modifier brisk, wild, guarding;
		modifier precise, spiked, fleeting;
		modifier rash, armored, angry;
		modifier hasty, interpid, arcane;
		modifier warding, lucky, menacing;
		modifier quick, violent;
    };
    modifier array[20];
}const accessory =
{
	.none = {.name = "None", .value = 1000llu}, .hard = {.name = "Hard", .value = 11025llu},
	.jagged = {.name = "Jagged", .value = 11025llu}, .brisk = {.name = "Brisk", .value = 11025llu},
	.wild = {.name = "Wild", .value = 11025llu}, .guarding = {.name = "Guardind", .value = 12100llu},
	.precise = {.name = "Precise", .value = 12100llu}, .spiked = {.name = "Spiked", .value = 12100llu},
	.fleeting = {.name = "Fleeting", .value = 12100llu}, .rash = {.name = "Rash", .value = 12100llu},
	.armored = {.name = "Armored", .value = 13225llu}, .angry = {.name = "Angry", .value = 13225llu},
	.hasty = {.name = "Hasty", .value = 13225llu}, .interpid = {.name = "Interpid", .value = 13225llu},
	.arcane = {.name = "Arcane", .value = 13225llu}, .warding = {.name = "Warding", .value = 14400llu},
	.lucky = {.name = "Lucky", .value = 14400llu}, .menacing = {.name = "Menacing", .value = 14400llu},
	.quick = {.name = "Quick", .value = 14400llu}, .violent = {.name = "Violent", .value = 14400llu}
};
//accessories
union
{
	struct
	{
		modifier none, broken, shoddy;
		modifier weak, damaged, keen;
		modifier ruthless, hurtful, zealous;
		modifier forceful, strong, unplesant;
		modifier demonic, superior, godly;
	};
	modifier array[15];
}const universal = 
{
	.none = {.name = "None", .value = 10000llu}, .broken = {.name = "Broken", .value = 3136llu},
	.shoddy = {.name = "Shoddy", .value = 5852llu}, .weak = {.name = "Weak", .value = 5852llu},
	.damaged = {.name = "Damaged", .value = 7225llu}, .keen = {.name = "Keen", .value = 11236llu},
	.ruthless = {.name = "Ruthless", .value = 11278llu}, .hurtful = {.name = "Hurtful", .value = 12100llu},
	.zealous = {.name = "Zealous", .value = 12100llu}, .forceful = {.name = "Forceful", .value = 13225llu},
	.strong = {.name = "Strong", .value = 13225llu}, .unplesant = {.name = "Unplesant", .value = 14581llu},
	.demonic = {.name = "Demonic", .value = 16002llu}, .superior = {.name = "Superior", .value = 16451llu},
	.godly = {.name = "Godly", .value = 21163llu}
};
//universal
union
{
	struct
	{
		modifier none, annoying, sluggish;
		modifier slow, lazy, nimble;
		modifier nasty, quick, agile;
		modifier murderous, deadly;
	};
	modifier array[11];
}const common = 
{
	.none = {.name = "None", .value = 10000llu}, .annoying = {.name = "Annoying", .value = 4624llu},
	.sluggish = {.name = "Sluggish", .value = 6400llu}, .slow = {.name = "Slow", .value = 7225llu},
	.lazy = {.name = "Lazy", .value = 8464llu}, .nimble = {.name = "Nimble", .value = 11025llu},
	.nasty = {.name = "Nasty", .value = 11687llu}, .quick = {.name = "Quick", .value = 12100llu},
	.agile = {.name = "Agile", .value = 13596llu}, .murderous = {.name = "Murderous", .value = 14454llu},
	.deadly = {.name = "Deadly", .value = 14641llu},
};
//common
union
{
	struct
	{
		modifier none, terrible, unhappy;
		modifier shameful, tiny, dull;
		modifier small, heavy, light;
		modifier bulky, pointy, large;
		modifier dangerous, sharp, massive;
		modifier savage, legendary;
	};
	modifier array[17];
}const melee =
{
	.none = {.name = "None", .value = 10000llu}, .terrible = {.name = "Terrible", .value = 3951llu},
	.unhappy = {.name = "Unhappy", .value = 5314llu}, .shameful = {.name = "Shameful", .value = 6273llu},
	.tiny = {.name = "Tiny", .value = 6724llu}, .dull = {.name = "Dull", .value = 7225llu},
	.small = {.name = "Small", .value = 8100llu}, .heavy = {.name = "Heavy", .value = 10712llu},
	.light = {.name = "Light", .value = 10712llu}, .bulky = {.name = "Bulky", .value = 11662llu},
	.pointy = {.name = "Pointy", .value = 12100llu}, .large = {.name = "Large", .value = 12544llu},
	.dangerous = {.name = "Dangerous", .value = 13147llu}, .sharp = {.name = "Sharp", .value = 13225llu},
	.massive = {.name = "Massive", .value = 13924llu}, .savage = {.name = "Savage", .value = 17716llu},
	.legendary = {.name = "Legendary", .value = 30985llu}
};
//melee
union
{
	struct
	{
		modifier none, awful, awkward;
		modifier lethargic, frenzying, powerful;
		modifier sighted, intimidating, rapid;
		modifier hasty, staunch, deadly;
		modifier unreal;
	};
	modifier array[13];
}const ranged =
{
	.none = {.name = "None", .value = 10000llu}, .awful = {.name = "Awful", .value = 4740llu},
	.awkward = {.name = "Awkward", .value = 5184llu}, .lethargic = {.name = "Lethargic", .value = 5852llu},
	.frenzying = {.name = "Frenzying", .value = 9555llu}, .powerful = {.name = "Powerful", .value = 11145llu},
	.sighted = {.name = "Sighted", .value = 13596llu}, .intimidating = {.name = "Intimidating", .value = 14581llu},
	.rapid = {.name = "Rapid", .value = 16002llu}, .hasty = {.name = "Hasty", .value = 16002llu},
	.staunch = {.name = "Staunch", .value = 16002llu}, .deadly = {.name = "Deadly", .value = 17538llu},
	.unreal = {.name = "Unreal", .value = 30985llu}
};
//ranged
union
{
	struct
	{
		modifier none, ignorant, deranged;
		modifier inept, intense, furious;
		modifier taboo, manic, adept;
		modifier celestial, mystic, masterful;
		modifier mythical;
	};
	modifier array[13];
}const magic_summoning =
{
	.none = {.name = "None", .value = 10000llu}, .ignorant = {.name = "Ignorant", .value = 5184llu},
	.deranged = {.name = "Deranged", .value = 6561llu}, .inept = {.name = "Inept", .value = 8100llu},
	.intense = {.name = "Intense", .value = 8742llu}, .furious = {.name = "Furious", .value = 11194llu},
	.taboo = {.name = "Taboo", .value = 11859llu}, .manic = {.name = "Manic", .value = 11859llu},
	.adept = {.name = "Adept", .value = 13225llu}, .celestial = {.name = "Celestial", .value = 14350llu},
	.mystic = {.name = "Mystic", .value = 16002llu}, .masterful = {.name = "Masterful", .value = 19283llu},
	.mythical = {.name = "Mythical", .value = 30985llu}
};
//magic_summoning
u64 accessory_options()
{
	u64 i;
	printf("Accessory:\n");
	for(i = 0; i < 20; i++)
		printf("\t%i: %s\n", i, accessory.array[i].name);
	return i;
}
u64 universal_options()
{
	u64 i;
	printf("Universal\n");
	for(i = 0; i < 15; i++)	
		printf("\t%i: %s\n", i, universal.array[i].name);
	return i;
}
u64 common_options()
{
	u64 i;
	printf("Common:\n");
	for(i = 0; i < 11; i++)	
		printf("\t%i: %s\n", i, common.array[i].name);
	return i;
}
u64 melee_options()
{
	u64 i;
	printf("Melee\n");
	for(i = 0; i < 17; i++)	
		printf("\t%i: %s\n", i, melee.array[i].name);
	return i;
}
u64 ranged_options()
{
	u64 i;
	printf("Ranged:\n");
	for(i = 0; i < 13; i++)	
		printf("\t%i: %s\n", i, ranged.array[i].name);
	return i;
}
u64 magic_summoning_options()
{
	u64 i;
	printf("Magic/Summoning:\n");
	for(i = 0; i < 13; i++)	
		printf("\t%i: %s\n", i, magic_summoning.array[i].name);
	return i;
}

u64 apply_modifiers(u64 base_money, u64 weapon_modifier, u64 happiness_modifier)
{
	base_money *= weapon_modifier;
    base_money /= 10000;
    base_money *= happiness_modifier;
    base_money /= 10000;
    return base_money;
}
u64 validade_option(string name, u64 min, u64 max)
{
	u64 result;
	do
	{
		printf("%s: ", name);
		scanf("%llu", &result);
		if(result < min || result > max)
			printf("ERROR: Number out of bounds\n");
	}while(result < min || result > max);
	return result;
}
string get_file_name()
{
	
}
u64 print_to_file(file file, item item, u64 (*func_ptr)(), u64 happiness_modifier)
{
	FILE* file_pointer = fopen(file.file_name, "a");
	u64 money = item.value;
	if(func_ptr != NULL)
	{
		u64 index = func_ptr();
		u64 array_index = validade_option("op", 0, index - 1);
		if(func_ptr == accessory_options)
			money = apply_modifiers(money, accessory.array[array_index].value, happiness_modifier);
		else if(func_ptr == universal_options)
			money = apply_modifiers(money, universal.array[array_index].value, happiness_modifier);
		else if(func_ptr == common_options)
			money = apply_modifiers(money, common.array[array_index].value, happiness_modifier);
		else if(func_ptr == melee_options)
			money = apply_modifiers(money, melee.array[array_index].value, happiness_modifier);
		else if(func_ptr == ranged_options)
			money = apply_modifiers(money, ranged.array[array_index].value, happiness_modifier);
		else if(func_ptr == magic_summoning_options)
			money = apply_modifiers(money, magic_summoning.array[array_index].value, happiness_modifier);
	}
	else
		money = apply_modifiers(money, base, happiness_modifier);
	fprintf(file_pointer, "|      %-*s|%02llup %02llug %02llus %02lluc|\n", file.space, item.name,
			money / 1000000 % 100,
			money / 10000 % 100,
			money / 100 % 100,
			money / 1 % 100);
	fclose(file_pointer);
	return money;
}
char get_option(item item)
{
	char option;
    do
    {
        printf("%s (y/n): ", item.name);
        scanf(" %c", &option);
        if(option != 'y' && option != 'n');
            printf("ERROR: Invalid option\n");
    }while(option != 'y' && option != 'n');
    return option;
}
#endif