#include <stdio.h>

typedef struct tanque
{
    int cap_leida;
    int cap_set;
    int delta_c;
};

typedef enum estado{
    espera = 0,
    llenar = 1,
};

tanque f_inicio(void);
estado f_espera(tanque);
estado f_llenar(tanque);