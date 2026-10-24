#include <iostream>
#include <queue>

int main()
{
    std::queue<int> fila;

    // 3. Adicionar elementos (push / enqueue)
    fila.push(1);
    fila.push(2);
    fila.push(3);
    fila.push(4);
    fila.push(5);
    fila.push(6);

    std::cout << "primeiro da fila: " << fila.front() << '\n';
    std::cout << "quantidade de elementos: " << fila.size() << '\n';

    std::cout << "repeticao com fila: " << '\n';
    while (!fila.empty())
    {
        std::cout << "elemento: " << fila.front() << '\n';
        fila.pop();
    }

}