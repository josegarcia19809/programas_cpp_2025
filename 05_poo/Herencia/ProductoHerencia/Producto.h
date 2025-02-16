//
// Created by Jose Garcia on 15/02/25.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class Producto {
private:
    string Nombre;
    int Codigo;
    double PrecioUnitario;

public:
    Producto();

    Producto(const string &Nombre, int Codigo, double PrecioUnitario);

    string getNombre() const;

    int getCodigo() const;

    double getPrecioUnitario() const;

    void setNombre(const string &Nombre);

    void setCodigo(int Codigo);

    void setPrecioUnitario(double PrecioUnitario);

    virtual void mostrarInformacionProducto() const;
};

class ProductoInventario : public Producto {
private:
    int CantidadEnStock;

public:
    ProductoInventario();

    ProductoInventario(const string &Nombre, int Codigo, double PrecioUnitario, int CantidadEnStock);

    int getCantidadStock() const;

    void setCantidadStock(int CantidadStock);

    void mostrarInformacionProducto() const override;
};


#endif //PRODUCTO_H
