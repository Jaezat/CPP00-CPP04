# CPP


## Concepts

- Atributes = variable inside a class.
    - Outside of a class a variable is a variable.

- Method/Member function = funcion dentro de una clase
    - Outside of a class if just function.

- Difference between private and public:
    - Publico: Se puede acceder desde cualquier parte del codigo fuera de la clase. Como una estructura en C:

```
class Cat {
public:
    std::string name;
    void meow() { std::cout << "Miau" << std::endl; }
};

int main() {
    Cat c;
    c.name = "Tom";   // ✅ funciona, es público
    c.meow();         // ✅ funciona
} ```

    - Privado: se puede acceder desde dentro de una misma clase. 
        - Piensa en un control remoto de TV. Los cables y circuitos de adentro → privados. No los tocas directamente, ni deberías. Los botones de afuera → públicos. Con ellos controlas el TV.

```
class TV {
private:
    int volumen;  // no lo tocas directo

public:
    void subirVolumen() {  // este es el "botón"
        volumen++;
    }
};``` 


- Contructor
    - Funcion especial que se ejecuta automaticamente cada vez que creo un objeto de esa clase. Objetivo de la funcion: dejar el objeto listo para usarse: normalmente lo que hace es iniciar varaibles miembros. 
    Por ejemplo:

```
class Contact {
private:
    std::string firstName;
    int phoneNumber;

public:
    Contact()   // constructor
    {
        firstName = "Desconocido";
        phoneNumber = 0;
    }
};

int main() {
    Contact c;   // ← aquí se ejecuta el constructor automáticamente
    // c.firstName ya es "Desconocido", c.phoneNumber ya es 0
}```

    