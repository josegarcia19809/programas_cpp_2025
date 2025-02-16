//
// Created by Jose Garcia on 15/02/25.
//
#include "Producto.h"

Producto::Producto(): Nombre("Default"), Codigo(10), PrecioUnitario(1.00) {}

Producto::Producto(const string &Nombre, int Codigo, double PrecioUnitario)
    : Nombre(Nombre), Codigo(Codigo), PrecioUnitario(PrecioUnitario) {}

string Producto::getNombre() const { return Nombre; }
int Producto::getCodigo() const { return Codigo; }
double Producto::getPrecioUnitario() const { return PrecioUnitario; }

void Producto::setNombre(const string &nombre) { Nombre = nombre; }
void Producto::setCodigo(int codigo) { Codigo = codigo; }
void Producto::setPrecioUnitario(double precioUnitario) { PrecioUnitario = precioUnitario; }

void Producto::mostrarInformacionProducto() const {
    cout << "-----------------------------------------------------" << endl;
    cout << "Mostrando informacion de producto:" << endl;
    cout << "Nombre: " << Nombre << endl;
    cout << "Codigo: " << Codigo << endl;
    cout << "Precio Unitario: " << PrecioUnitario << endl;
}

ProductoInventario::ProductoInventario(): Producto(), CantidadEnStock(0) {}

ProductoInventario::ProductoInventario(const string &Nombre, int Codigo, double PrecioUnitario,
                                       int CantidadEnStock): Producto(Nombre, Codigo, PrecioUnitario),
                                                             CantidadEnStock(CantidadEnStock) {}

int ProductoInventario::getCantidadStock() const {
    return CantidadEnStock;
}

void ProductoInventario::setCantidadStock(int cantidadStock) { CantidadEnStock = cantidadStock; }

void ProductoInventario::mostrarInformacionProducto() const {
    Producto::mostrarInformacionProducto();
    cout << "Cantidad en Stock: " << CantidadEnStock << endl;
}
