/*
** EPITECH PROJECT, 2018
** tasck05
** File description:
** tasck05
*/

int my_print_decimal (centaine, decimal)
{
    char unite = decimal + 1;

    while (unite <10) {
        my_putchar (centaine + 48);
        my_putchar (decimal + 48);
        my_putchar (unite + 48);
        if (centaine < 7) {
            my_putchar (44);
            my_putchar (32);
        }
        unite ++;
    }
}
	
int my_print_centaine (centaine)
{
    char decimal = centaine + 1;

    while (decimal < 9){
    my_print_decimal (centaine, decimal);
    decimal ++;
    }
}

int my_print_comb (void)
{
    char centaine = 0;

    while (centaine < 8) {
        my_print_centaine (centaine);
        centaine ++;
    }
}
