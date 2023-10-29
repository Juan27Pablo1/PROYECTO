#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
#include <Scorpio.hpp>
using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Scorpio *scor = new Scorpio();
    Controlador *control = new Controlador();

    Dibujo *d1 = new Dibujo(1, 1, "scorpio");

    list<Dibujo *> dibujos;
    dibujos.push_back(d1);
    dibujos.push_back(scor);

    list<Actualizable *> actualizables;
    actualizables.push_back(control);
    actualizables.push_back(scor);
    bool ejecucion = true;
    while (ejecucion)
    {
        v.Actualizar(actualizables);
        v.Dibujar(dibujos);
    }
    return 0;
}