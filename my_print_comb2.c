/*
** EPITECH PROJECT, 2018
** task06
** File description:
** task06
*/

int police(int unite, int decimal, int centaine, int millie)
{
    if (millie <= decimal && centaine < unite) {
    visu(unite, decimal, centaine, millie);
    }
    else {
        return (0);
    }
}

int visu(int unite, int decimal, int centaine, int millie)
{
    my_putchar(millie);
    my_putchar(centaine);
    my_putchar(32);
    my_putchar(decimal);
    my_putchar(unite);
    if (millie != 57 || centaine != 56 || decimal != 57 || unite != 57) {
        my_putchar(44);
        my_putchar(32);
    }
    return (0);
}

int boubou(int unite, int decimal, int centaine, int millie)
{
    while (millie < 58) {
    unite ++;
    if (unite > 57){
        decimal ++;
        unite = 48;
    }
    if (decimal > 57){
        centaine ++;
        decimal = 48;
    }
    if (centaine > 57){
        millie ++;
        centaine = 48;
    }
        police(unite, decimal, centaine, millie);
    }
    return (0);
}
int my_print_comb2(void)
{
    int unite = 48;
    int decimal = 48; 
    int centaine = 48;
    int millie = 48;

    boubou(unite, decimal, centaine, millie);
}
