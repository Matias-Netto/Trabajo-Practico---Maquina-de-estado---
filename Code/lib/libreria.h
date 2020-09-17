#include <stdlib.h>
#include <stdio.h>

enum
{
    espera = 1,
    llenar = 2
};

int f_inicio (void)
{
    int cap_set, delta_c;
    printf("ingrese capacidad maxima:\t");
    scanf("%d",&cap_set);
    printf("\nIngrese delta de la capacidad maxima:\t");
    scanf("%d",&delta_c);
    return cap_set+delta_c;
}
int f_lectura (void)
{
    int cap_leida;
    printf("\nCapacidad leida:\t");
    scanf("%d",&cap_leida);
    return cap_leida;
}

int f_switch (int cap_leida)
{
    int limite, e;
    limite=f_inicio();
    if (limite<cap_leida)
    {
        e = espera;
    }
    else
    {
        e = llenar;
    }
    return e;
}

void f_espera (void)
{
    printf("Estado de espera\n");
}

void f_llenar (void)
{
    printf("Estado de carga\n");
}
