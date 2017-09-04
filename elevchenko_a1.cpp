#include <iostream>

/*Max template from slides*/
template < typename T >
T Max ( T a, T b ) {
    return a > b ? a : b;
}

class MyType {
    int value;
public:
    MyType(): value(0) { }

    /*Redefining '>' operator*/
    bool operator > (MyType& myType)
    {
        return value > myType.value;
    }

    /*Setter of value for MyType*/
    void setValue(int value) {
        this->value = value;
    }

    /*Printer of value for MyType*/
    void printValue(){
        std::cout << value << std::endl;
    }
};

int main() {
    /*Integer type of Max template*/
    std::cout << "Integer max: " << Max(2,4) << std::endl;

    /*Double type of Max template*/
    std::cout << "Double max: " << Max(2.1, 2.12) << std::endl;

    /*Char type of Max template*/
    std::cout << "Char max: " << Max('a', 'b') << std::endl;

    /*Making new variables of MyType class*/
    MyType firstMyType;
    MyType secondMyType;

    /*And they definitely do need some values*/
    firstMyType.setValue(1);
    secondMyType.setValue(2);

    /*MyType type of Max template*/
    MyType maxMyType = Max(firstMyType, secondMyType);

    maxMyType.printValue();

    return 0;
}

