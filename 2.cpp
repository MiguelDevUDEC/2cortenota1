//Gonzalez Pacheco Miguel - 6902510008
// Created by Miguel on 8/05/2025.
//

#include <iostream>
using namespace std;

int main() {

        string mes;
        int anio;

        cout << "Ingrese el nombre del mes: ";
        cin >> mes;

        cout << "Ingrese el anio: ";
        cin >> anio;

        int dias;

        if (mes == "enero" || mes == "marzo" || mes == "mayo" || mes == "julio" || mes == "agosto" || mes == "octubre" || mes == "diciembre") {
            dias = 31;
        } else if (mes == "abril" || mes == "junio" || mes == "septiembre" || mes == "noviembre") {
            dias = 30;
        } else if (mes == "febrero") {
            if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
        } else {
            cout << "Mes inválido." << endl;
            return 1;
        }

        cout << "El mes de " << mes << " del anio " << anio << " tiene " << dias << " dias." << endl;
        return 0;
}
