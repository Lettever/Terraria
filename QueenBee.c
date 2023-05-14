//This .c file will be used to operate a "database" that stores the money I get from Queen Bee

#include "accessories2.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

const string db_file = "Queen_bee.txt";
#define MAX_BUFFER 1024

#define QUEEN_BEE_POS 91
#define TOTAL_POS 146
#define AVERAGE_POS 201


void stop_at_char(char, string);
i64 string_to_i64(string, bool);

void print_money(i64);

i64 validate_i64(string, i64, i64);

union
{
    struct
    {
        i64 bee_gun, bee_keeper, bees_knees;
        i64 hive_wand, bee_hat, bee_shirt, bee_pants;
        i64 honey_comb, nectar, honeyed_goggles, beenades;
        i64 bee_wax, bottled_honey, queen_bee_mask, queen_bee_trophy;
        i64 hive_pack;
    };
    i64 array[15];
}const queen_bee =
{
    .bee_gun = 20000ll, .bee_keeper = 20000ll, .bees_knees = 20000ll,
    .hive_wand = 5000ll, .bee_hat = 5000ll, .bee_shirt = 5000ll, .bee_pants = 5000ll,
    .honey_comb = 20000ll, .nectar = 30000ll, .honeyed_goggles = 50000ll, .beenades = 500ll,
    .bee_wax = 500ll, .bottled_honey = 8ll, .queen_bee_mask = 7500ll, .queen_bee_trophy = 10000ll,
    .hive_pack = 20000ll
};

int main()
{
    string buffer = malloc(MAX_BUFFER);
    FILE* file_pointer = fopen(db_file, "r+");      //!use "r+" to write in any place
    i64 p, g, s, c, temp_money, quantity, modifiers_option;
    char item_option;
    
    fseek(file_pointer, QUEEN_BEE_POS, SEEK_SET);
    fgets(buffer, MAX_BUFFER, file_pointer);
    i64 current_queen_bee = string_to_i64(buffer, true);

    fseek(file_pointer, TOTAL_POS, SEEK_SET);
    fgets(buffer, MAX_BUFFER, file_pointer);
    i64 current_money = string_to_i64(buffer, false);

    fseek(file_pointer, AVERAGE_POS, SEEK_SET);
    fgets(buffer, MAX_BUFFER, file_pointer);
    i64 current_average = string_to_i64(buffer, false);
    i64 happiness_modifier = 12660ll;
    fseek(file_pointer, 0, SEEK_END);
    
    p = validate_i64("p", 0, 99);
    g = validate_i64("g", 0, 99);
    s = validate_i64("s", 0, 99);
    c = validate_i64("c", 0, 99);

    fprintf(file_pointer, "| Queen Bee %i:                   | %02ip %02ig %02is %02ic |\n", ++current_queen_bee, p, g, s, c);
    printf("Bee's Knees? (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        print_ranged_option(true);
        modifiers_option = validate_i64("op", 0 , 12);
        temp_money = apply_modifiers(queen_bee.bees_knees, ranged.array[modifiers_option], happiness_modifier);
        fprintf(file_pointer, "|     Bees Knees                  | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    else
    {
        printf("Bee Gun? (y/n): ");
        scanf(" %c", &item_option);
        if(item_option == 'y')
        {
            print_magic_summoning_option(true);
            modifiers_option = validate_i64("op", 0, 12);
            temp_money = apply_modifiers(queen_bee.bee_gun, magic_summoning.array[modifiers_option], happiness_modifier);
            fprintf(file_pointer, "|     Bee Gun                     | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                                   , temp_money / 10000 % 100
                                                                                                   , temp_money / 100 % 100
                                                                                                   , temp_money % 100);
            current_money += temp_money;
        }
        else
        {
            print_melee_option(true);
            modifiers_option = validate_i64("op", 0, 16);
            temp_money = apply_modifiers(queen_bee.bee_keeper, melee.array[modifiers_option], happiness_modifier);
            fprintf(file_pointer, "|     Bee Keeper                  | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                                   , temp_money / 10000 % 100
                                                                                                   , temp_money / 100 % 100
                                                                                                   , temp_money % 100);
            current_money += temp_money;   
        }
    }
    printf("Hive wand (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        temp_money = apply_modifiers(queen_bee.hive_wand, base, happiness_modifier);
        fprintf(file_pointer, "|     Hive Wand                   | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;    
    }
    printf("Beenades (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        quantity = validate_i64("amount", 10, 29);
        temp_money = quantity * apply_modifiers(queen_bee.beenades, base, happiness_modifier);
        fprintf(file_pointer, "|     %i Beenades                 | %02ip %02ig %02is %02ic |\n", quantity
                                                                                               , temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    printf("Bee Wax (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        quantity = validate_i64("amount", 10, 29);
        temp_money = quantity * apply_modifiers(queen_bee.bee_wax, base, happiness_modifier);
        fprintf(file_pointer, "|     %i Bee Wax                  | %02ip %02ig %02is %02ic |\n", quantity
                                                                                               , temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    printf("Bee Hat (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        temp_money = apply_modifiers(queen_bee.bee_hat, base, happiness_modifier);
        fprintf(file_pointer, "|     Bee Hat                     | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    else
    {
        printf("Bee Shirt (y/n): ");
        scanf(" %c", &item_option);
        if(item_option == 'y')
        {
            temp_money = apply_modifiers(queen_bee.bee_shirt, base, happiness_modifier);
            fprintf(file_pointer, "|     Bee Shirt                   | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                                   , temp_money / 10000 % 100
                                                                                                   , temp_money / 100 % 100
                                                                                                   , temp_money % 100);
            current_money += temp_money;
        }
        else
        {
            temp_money = apply_modifiers(queen_bee.bee_pants, base, happiness_modifier);
            fprintf(file_pointer, "|     Bee Pants                   | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                                   , temp_money / 10000 % 100
                                                                                                   , temp_money / 100 % 100
                                                                                                   , temp_money % 100);
            current_money += temp_money;
        }
    }
    printf("Honey Comb (y/n): ");    
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        print_accessories_option(true);
        modifiers_option = validate_i64("op", 0, 19);
        fprintf(file_pointer, "|     Honey Comb                  | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;    
    }
    printf("Nectar (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        temp_money = apply_modifiers(queen_bee.nectar, base, happiness_modifier);
        fprintf(file_pointer, "|     Nectar                      | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    printf("Honeyed goggles (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        temp_money = apply_modifiers(queen_bee.honeyed_goggles, base, happiness_modifier);
        fprintf(file_pointer, "|     Honeyed Goggles             | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    printf("Mask (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        temp_money = apply_modifiers(queen_bee.queen_bee_mask, base, happiness_modifier);
        fprintf(file_pointer, "|     Queen Bee Mask              | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    printf("hive pack (y/n): ");
    scanf(" %c", &item_option);
    if(item_option == 'y')
    {
        print_accessories_option(true);
        modifiers_option = validate_i64("op", 0, 19);
        temp_money = apply_modifiers(queen_bee.hive_pack, accessories.array[modifiers_option], happiness_modifier);
        fprintf(file_pointer, "|     Hive Pack                   | %02ip %02ig %02is %02ic |\n", temp_money / 1000000
                                                                                               , temp_money / 10000 % 100
                                                                                               , temp_money / 100 % 100
                                                                                               , temp_money % 100);
        current_money += temp_money;
    }
    fprintf(file_pointer, "+---------------------------------+-----------------+\n");
    
    fseek(file_pointer, QUEEN_BEE_POS, SEEK_SET);
    fprintf(file_pointer, "%i", current_queen_bee);

    fseek(file_pointer, TOTAL_POS, SEEK_SET);
    fprintf(file_pointer, "%02ip %02ig %02is %02ic", current_money / 1000000, current_money / 10000 % 100, current_money / 100 % 100, current_money % 100);
    
    current_average = current_money / current_queen_bee;
    fprintf(file_pointer, "%02ip %02ig %02is %02ic", current_average / 1000000, current_average / 10000 % 100, current_average / 100 % 100, current_average % 100);

    fclose(file_pointer);
    free(buffer);
    return 727;
}



void stop_at_char(char c, string str)
{
    for(u8 i = 0; str[i] != '\0'; i++)
        if(str[i] == c)
            str[i] = '\0';
}

bool char_in_string(char c, string str)
{
    for(i64 i = 0; str[i] != '\0'; i++)
        if(c == str[i])
            return true;
    return false;
}
i64 string_to_i64(string str, bool stop_at_letters)
{
    i64 result = 0, i = 0;
    if(stop_at_letters == true)
    {
        while(char_in_string(str[i], "0123456789") == true)
        {
            result *= 10;
            result += str[i] - '0';
            i++;
        }
    }
    else
    {
        while(str[i] != '\0')
        {
            if(char_in_string(str[i], "0123456789") == true)
            {
                result *= 10;
                result += str[i] - '0';
            }
            i++;
        }
    }
    return result;
}

void print_money(i64 money)
{
    printf("%02llip %02llig %02llis %02llis",
           money / 1000000 % 100,
           money / 10000 % 100,
           money / 100 % 100,
           money / 1 % 100);
}

i64 validate_i64(string name, i64 min, i64 max)
{
    i64 result;
    do
    {
        printf("%s: ", name);
        scanf("%lli", &result);
        if(min > result || result > max)
            printf("ERROR: Invalid number\n");
    }while(min > result || result > max);
    return result;
}