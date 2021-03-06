#if 0
// VT 77. COD. 001
#include <iostream>
#include <utility>

int main()
{
    setlocale(LC_ALL, "es_ES.UTF-8");
    int x{ 2 };
    int y{ 4 };
    std::cout << "Antes swap: x = " << x << ", y = " << y << '\n';
    std::swap(x, y); // intercambia los valores de x e y
    std::cout << "Después swap:  x = " << x << ", y = " << y << '\n';

    return 0;
}




// VT 77. COD. 002
#include <iostream>
#include <iterator>
#include <utility>

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };
	constexpr int longitud{ static_cast<int>(std::size(array)) };

	// Recorrer cada elemento del array
	// (excepto el último, que ya estará ordenado para cuando lleguemos allí)
	for (int comienzoIndice{ 0 }; comienzoIndice < longitud - 1; ++comienzoIndice)
	{
		// menorIndice es el índice del elemento más pequeño que encontramos en esta iteración
		// Empezar asumiendo que el elemento más pequeño es el primer elemento de esta iteración
		int menorIndice{ comienzoIndice };

		// Luego buscamos por un elemento más pequeño en el resto del array
		for (int actualIndice{ comienzoIndice + 1 }; actualIndice < longitud; ++actualIndice)
		{
			// Si encontramos un elemento que es más pequeño que el anterior más pequeño encontrado
			if (array[actualIndice] < array[menorIndice])
				// Luego le hacemos seguimiento
				menorIndice = actualIndice;
		}

		// menorIndice es ahora el elemento más pequeño en la matriz restante
		// intercambiar nuestro elemento de inicio con nuestro elemento más pequeño (esto lo ordena en el lugar correcto)
		std::swap(array[comienzoIndice], array[menorIndice]);
	}

	// Ahora que toda la matriz está ordenada, imprima nuestra matriz ordenada como prueba de que funciona
	for (int index{ 0 }; index < longitud; ++index)
		std::cout << array[index] << ' ';

	std::cout << '\n';

	return 0;
}
#endif


#include <algorithm> // para std::sort
#include <iostream>
#include <iterator> // para std::size

int main()
{
	int array[]{ 30, 50, 20, 10, 40 };

	std::sort(std::begin(array), std::end(array));

	for (int i{ 0 }; i < static_cast<int>(std::size(array)); ++i)
		std::cout << array[i] << ' ';

	std::cout << '\n';

	return 0;
}






