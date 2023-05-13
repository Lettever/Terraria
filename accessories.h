#include "C:\headers\rstypes.h"

const u64 base = 10000llu;

typedef struct
{
    string name;
    u64 value;
}modifier;

union
{
    struct
    {
        modifier none;
        modifier hard, jagged, brisk, wild, guarding, precise;
        modifier spiked, fleeting, rash, armored, angry, hasty;
        modifier interpid, arcane, warding, lucky, menacing, quick;
        modifier violent;
    };
    modifier array[20];
}const accessories =
{
    .none = {.name = "None", .value = 10000ll}
};

/*union
const accessories =
{
    .none = 10000ll, 
    .hard = 11025ll, .jagged = 11025ll, .brisk = 11025ll, .wild = 11025ll, .guarding = 12100ll, .precise = 12100ll, 
    .spiked = 12100ll, .fleeting = 12100ll, .rash = 12100ll, .armored = 13225ll, .angry = 13225ll, .hasty = 13225ll,
    .interpid = 13225ll, .arcane = 13225ll, .warding = 14400ll, .lucky = 14400ll, .menacing = 14400ll, .quick = 14400ll,
    .violent = 14400ll
};*/

