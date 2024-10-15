#include <iostream>

int main() {
    int tam;
    std::cout << ">>Inicio: Prova P1\n\n";
    std::cout << "Defina o tamanho do vetor: ";
    std::cin >> tam;

    int valores[tam];
    int max_valor = 0;

    std::cout << "\nInforme os valores presentes no vetor: \n";
    for (int i = 0; i < tam; i++) {
        std::cout << i + 1 << ": ";
        std::cin >> valores[i];
        if (valores[i] > max_valor) {
            max_valor = valores[i];
        }
    }

    std::cout << "\nHistograma Horizontal\n\n";
    for (int i = 0; i < tam; i++) {
        std::cout << i + 1 << " | ";
        for (int j = 0; j < valores[i]; j++) {
            std::cout << "*  ";
        }
        std::cout << "\n";
    }

    std::cout << "  + ";
    for (int j = 0; j < max_valor; j++) {
        std::cout << "-  ";
    }
    std::cout << "\n";

    std::cout << " ";
    for (int j = 0; j <= max_valor; j++) {
        std::cout << j << "  ";
    }
    std::cout << "\n\n";

    std::cout << ">> Fim: Prova P1";

    return 0;
}
