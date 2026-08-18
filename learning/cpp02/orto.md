# Orthodox Canonical Form 

- Cuatro funciones que una clase debe implementar para garantizar que sus objetos se creen, copien, asignen y destruyan de manera segura. 

### Ejemplo de los tres:

``` c++
class Punto {
    int x;
public:
    Punto() { x = 0; }                          // 1. Constructor por defecto
    Punto(const Punto& p) { x = p.x; }           // 2. Constructor de copia
    Punto& operator=(const Punto& p) {           // 3. Operador de asignación
        x = p.x;
        return *this;
    }
    ~Punto() { }                                 // 4. Destructor (no hace nada aquí)
};
```

``` c++
Punto a;        // usa (1)
Punto b(a);     // usa (2)
b = a;          // usa (3)
// al final del programa se llama (4) automáticamente para a y b

```

#### Basically

- Son 2 que inicializan, 1 que modifica, y 1 que limpia.
- Forma estandar de estructurar una clase en C++ cuando la clase maneja memoria dinamica.
- Las 4 funciones: constructor por defecto, constructor de copia, operador =, destructor.
- Cuando se usa: cuando la clase tiene punteros/memoria dinamica.
