#include <iostream>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>

const int NUM_BITS = 16;
const int MAX_INT = (1 << NUM_BITS) - 1; // 2^16 - 1 = 65535

// Función para generar un cromosoma aleatorio de 16 bits
std::bitset<NUM_BITS> generarCromosoma() {
    int valor = rand() % (MAX_INT + 1); // entero entre 0 y 65535
    return std::bitset<NUM_BITS>(valor);
}

// Función para decodificar un cromosoma a valor real en [0,1]
double decodificar(const std::bitset<NUM_BITS>& cromosoma) {
    int valor_entero = static_cast<int>(cromosoma.to_ulong());
    return static_cast<double>(valor_entero) / MAX_INT;
}

// Función de evaluación: f(x) = x * sin(10πx) + 1
double evaluarFuncion(double x) {
    return x * sin(10 * M_PI * x) + 1;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Semilla aleatoria

    // 1. Generar cromosoma
    std::bitset<NUM_BITS> cromosoma = generarCromosoma();

    // 2. Decodificar a real
    double x = decodificar(cromosoma);

    // 3. Evaluar función
    double fx = evaluarFuncion(x);

    // 4. Mostrar resultados
    std::cout << "Cromosoma binario: " << cromosoma << std::endl;
    std::cout << "Valor x (real): " << x << std::endl;
    std::cout << "f(x) = " << fx << std::endl;

    return 0;
}
