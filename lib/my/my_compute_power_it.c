/*
** EPITECH PROJECT, 2022
** my
** File description:
** compute
*/

double my_compute_power_it(double nb, int p)
{
    double k = 1;
    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    } else {
        double const b = nb;
        for (int a = 0; a < p; a++) {
            k = k * b;
        }
        return (k);
    }
}
