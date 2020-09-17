#include "libreria.h"

int main()

{
    int estado, e;
    estado = f_switch(e);
    f_lectura();
    switch (estado)
    {
        case espera:
            f_espera();
            break;
        case llenar:
            f_llenar();
            break;
    }
     system ("PAUSE");
    return 0;
}