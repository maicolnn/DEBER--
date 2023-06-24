#include <iostream>
using namespace std;

int main() {
    // Ingreso del tiempo inicial
    int horaInicial, minutoInicial;
    cout << "Ingrese el tiempo inicial:" << endl;
    cout << "Hora (0-23): ";
    cin >> horaInicial;
    cout << "Minuto (0-59): ";
    cin >> minutoInicial;

    // Ingreso del periodo de tiempo
    int periodoHoras, periodoMinutos;
    cout << "Ingrese el tiempo de duración:" << endl;
    cout << "Horas: ";
    cin >> periodoHoras;
    cout << "Minutos: ";
    cin >> periodoMinutos;

    // Cálculo del tiempo final
    int horaFinal = (horaInicial + periodoHoras + (minutoInicial + periodoMinutos) / 60) % 24;
    int minutoFinal = (minutoInicial + periodoMinutos) % 60;

    // Mostrar resultado
    cout << "Tiempo final: " << horaFinal << ":" << minutoFinal << endl;

    return 0;
}
