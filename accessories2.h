#include "C:\headers\rstypes.h"
const i64 base = 10000ll;
union
{
    struct
    {
        i64 none;
        i64 hard, jagged, brisk, wild, guarding, precise;
        i64 spiked, fleeting, rash, armored, angry, hasty;
        i64 interpid, arcane, warding, lucky, menacing, quick;
        i64 violent;
    };
    i64 array[20];
}const accessories =
{
    .none = 10000ll, 
    .hard = 11025ll, .jagged = 11025ll, .brisk = 11025ll, .wild = 11025ll, .guarding = 12100ll, .precise = 12100ll, 
    .spiked = 12100ll, .fleeting = 12100ll, .rash = 12100ll, .armored = 13225ll, .angry = 13225ll, .hasty = 13225ll,
    .interpid = 13225ll, .arcane = 13225ll, .warding = 14400ll, .lucky = 14400ll, .menacing = 14400ll, .quick = 14400ll,
    .violent = 14400ll
};
union
{
    struct
    {
        i64 none;
        i64 broken, shoddy, weak, damaged, keen, ruthless;
        i64 hurtful, zealous, forceful, strong, unplesant, demonic;
        i64 superior, godly;
    };
    i64 array[15];
}const universal =
{
    .none = 10000ll,
    .broken = 3136ll, .shoddy = 5852ll, .weak = 6400ll, .damaged = 7225ll, .keen = 11236ll, .ruthless = 11278ll,
    .hurtful = 12100ll, .zealous = 12100ll, .forceful = 13225ll, .strong = 13225ll, .unplesant = 14581ll, .demonic = 16002ll,
    .superior = 16451ll, .godly = 21163ll
};
union
{
    struct
    {
        i64 none;
        i64 annoying, sluggish, slow, lazy, nimble, nasty;
        i64 quick, agile, murderous, deadly;
    };
    i64 array[11];
}const common = 
{
    .none = 10000ll,
    .annoying = 4624ll, .sluggish = 6400ll, .slow = 7225ll, .lazy = 8464ll, .nimble = 11025ll, .nasty = 11687ll,
    .quick = 12100ll, .agile = 13596ll, .murderous = 14454ll, .deadly = 14641ll
};
union
{
    struct
    {
        i64 none;
        i64 terrible, unhappy, shameful, tiny, dull, small;
        i64 heavy, light, bulky, pointy, large, dangerous;
        i64 sharp, massive, savage, legendary;
    };
    i64 array[17];
}const melee =
{
    .none = 10000ll,
    .terrible = 3951ll, .unhappy = 5314ll, .shameful = 6273ll, .tiny = 6724ll, .dull = 7225ll, .small = 8100ll,
    .heavy = 10712ll, .light = 10712ll, .bulky = 11662ll, .pointy = 12100ll, .large = 12544ll, .dangerous = 13147ll,
    .sharp = 13225ll, .massive = 13924ll, .savage = 17716ll, .legendary = 30985ll
};
union
{
    struct
    {
        i64 none;
        i64 awful, awkward, lethargic, frenzying, powerful, sighted;
        i64 intimidating, rapid, hasty, staunch, deadly, unreal;
    };
    i64 array[13];
}const ranged =
{
    .none = 10000ll,
    .awful = 4740ll, .awkward = 5184ll, .lethargic = 5852ll, .frenzying = 9555ll, .powerful = 11145ll, .sighted = 13596ll,
    .intimidating = 14581ll, .rapid = 16002ll, .hasty = 16002ll, .staunch = 16002ll, .deadly = 17538ll, .unreal = 30985ll
};      
union
{
    struct
    {
        i64 none;
        i64 ignorant, deranged, inept, intense, furious, taboo;
        i64 manic, adept, celestial, mystic, masterful, mysthical;
    };
    i64 array[13];
}const magic_summoning = 
{
    .none = 10000ll,
    .ignorant = 5184ll, .deranged = 6561ll, .inept = 8100ll, .intense = 8742ll, .furious = 11194ll, .taboo = 11859ll,
    .manic = 11859ll, .adept = 13225ll, .celestial = 14350ll, .mystic = 16002ll, .masterful = 19283ll, .mysthical = 30985ll
};

i64 print_accessories_option()
{
    string names[] = 
    {
        "None", "Hard", "Jagged", "Brisk", "Wild", "Guarding", "Precise",
        "Spiked", "Fleeting", "Rash", "Armored", "Angry", "Hasty",
        "Interpid", "Arcane", "Warding", "Lucky", "Menacing", "Quick", "Violent"
    };
    printf("Accessories:\n");
    for(u8 i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        printf("\t%2u: %s\n", i, names[i]);
    return sizeof(names) / sizeof(names[0]);
}
i64 print_universal_option()
{
    string names[] =
    {
        "None", "Broken", "Shoddy", "Weak", "Damaged", "Keen", "Ruthless",
        "Hurtful", "Zealous", "Forceful", "Strong", "Unplesant", "Demonic",
        "Superior", "Godly"
    };
    printf("Universal:\n");
    for(i8 i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        printf("\t%2i: %s\n", i, names[i]);        
    return sizeof(names) / sizeof(names[0]);
}
i64 print_common_option()
{
    string names[] =
    {
        "None", "Annoying", "Sluggish", "Slow", "Lazy", "Nimble", "Nasty",
        "Quick", "Agile", "Murderous", "Deadly"
    };
    printf("Common:\n");
    for(i8 i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        printf("\t%2i: %s\n", i, names[i]);        
    return sizeof(names) / sizeof(names[0]);
}
i64 print_melee_option()
{
    string names[] =
    {
        "None", "Terrible", "Unhappy", "Shameful", "Tiny", "Dull", "Small",
        "Heavy", "Light", "Bulky", "Pointy", "Large", "Dangerous",
        "Sharp", "Massive", "Savage", "Legendary"
    };
    printf("Melee:\n");
    for(i8 i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        printf("\t%2i: %s\n", i, names[i]);        
    return sizeof(names) / sizeof(names[0]);
}
i64 print_ranged_option()
{
    string names[] =
    {
        "None", "Awful", "Awkward", "Lethargic", "Frenzying", "Powerful", "Sighted", 
        "Intimidating", "Rapid", "Hasty", "Staunch", "Deadly", "Unreal"
    };
    printf("Ranged:\n");
    for(i8 i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        printf("\t%2i: %s\n", i, names[i]);        
}
i64 print_magic_summoning_option()
{
    string names[] = 
    {
        "None", "Ignorant", "Deranged", "Inept", "Intense", "Furious", "Taboo",
        "Manic", "Adept", "Celestial", "Mystic", "Masterful", "Mythical"
    };
    printf("Magic_Summoning:\n");
    for(i8 i = 0; i < sizeof(names) / sizeof(names[0]); i++)
        printf("\t%2i: %s\n", i, names[i]);        
    return sizeof(names) / sizeof(names[0]);
}
i64 (*const print_modifiers_option[])() = {print_accessories_option, print_universal_option, print_common_option, print_melee_option, print_ranged_option, print_magic_summoning_option};
i64 apply_modifiers(i64 base_num, i64 modifier, i64 happiness)
{
    base_num *= modifier;
    base_num /= 10000;
    base_num *= happiness;
    base_num /= 10000;
    return base_num;
}
i64 print_stuff(string file_name, string item_name, i64 base_money, i64 (*func_ptr)(), i64 happiness_modifier)
{
    FILE* file_pointer = fopen(file_name, "a");
    if(func_ptr != NULL)
    {
        i64 index = func_ptr();
        i64 option = validate_i64("op", 0, index - 1);
        if(func_ptr == print_accessories_option)
            base_money = apply_modifiers(base_money, accessories.array[option] ,happiness_modifier);
        else if(func_ptr == print_universal_option)
            base_money = apply_modifiers(base_money, universal.array[option] ,happiness_modifier);
        else if(func_ptr == print_common_option)
            base_money = apply_modifiers(base_money, common.array[option] ,happiness_modifier);
        else if(func_ptr == print_melee_option)
            base_money = apply_modifiers(base_money, melee.array[option] ,happiness_modifier);
        else if(func_ptr == print_ranged_option)
            base_money = apply_modifiers(base_money, ranged.array[option] ,happiness_modifier);
        else if(func_ptr == print_magic_summoning_option)
            base_money = apply_modifiers(base_money, magic_summoning.array[option] ,happiness_modifier);
    }
    else
        base_money = apply_modifiers(base_money, base ,happiness_modifier);
    fprintf(file_pointer, "|     %28s| %02ip %02ig %02is %02ic |\n", item_name,
                                                    , base_money / 1000000 % 100
                                                    , base_money / 10000 % 100
                                                    , base_money / 100 % 100
                                                    , base_money / 1 % 100);
    fclose(file_pointer);
    return base_money;
}
char get_option(string item_name)
{
    char option;
    do
    {
        printf("%s (y/n): ");
        scanf(" %c", &option);
        if(option != 'y' && option != 'n');
            printf("ERROR: Invalid option\n");
    }while(option != 'y' && option != 'n');
    return option;
}

u64 string_to_u64(string str, bool stop_at_letters)
{
	
}