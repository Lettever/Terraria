#include "accessories.h"
int main()
{
    printf("%s\t%llu\n", accessories.none.name, accessories.none.value);
    printf("%s\t%llu", accessories.array[0].name, accessories.array[0].value);
}