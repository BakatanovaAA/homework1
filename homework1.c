#include<stdio.h>
#include<locale.h>

void house()

{
    printf("          /\\     \n");
    printf("         /  \\    \n");
    printf("        /____\\   \n");
    printf("       |      |  \n");
    printf("       |[]  []|  \n");
    printf("  _    |______|    _\n");
    printf(" | |___|      |___| |\n");
    printf(" |                  |\n");
    printf(" |   __        __   |\n");
    printf(" |  |  |      |  |  |\n");
    printf(" |  |__|      |__|  |\n");
    printf(" |__________________|\n");
}
int main()
{
    setlocale(LC_ALL, "Rus");
    house();
    return 0;
}
