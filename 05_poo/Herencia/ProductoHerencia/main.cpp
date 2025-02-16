#include <iostream>
#include <string>

#include "Producto.h"

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.


int main() {
    const Producto prod("Laptop", 101, 750.00);
    prod.mostrarInformacionProducto();

    const ProductoInventario producto_inventario("Monitor", 102, 27000, 6);
    producto_inventario.mostrarInformacionProducto();

    return 0;
}
