#include <iostream>
using namespace std;

// Prototipo de la función recursiva
void MoverDiscos(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        cout << "Mover disco 1 de " << origen << " a " << destino << endl;
    } else {
        MoverDiscos(n - 1, origen, auxiliar, destino);
        cout << "Mover disco " << n << " de " << origen << " a " << destino << endl;
        MoverDiscos(n - 1, auxiliar, destino, origen);
    }
}

int main() {
    int n;
    cout << "Ingrese el número de discos: ";
    cin >> n;
    
    MoverDiscos(n, 'A', 'C', 'B'); // A: origen, C: destino, B: auxiliar
    return 0;
}
