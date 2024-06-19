#ifndef ISISTEMA_H
#define ISISTEMA_H

#include "Usuario.h"
#include "Departamento.h"

#include "../Datatypes/DtDepartamento.h"
#include "../Datatypes/DtDatosCasa.h"
#include "../Datatypes/DtDatosApartamento.h"

#include "../ICollection/interfaces/ICollection.h"
#include "../ICollection/interfaces/ICollectible.h"

#include <string>
using namespace std;

class Zona;
class ICollectible;
class IDictionary;

class ISistema {
  public:
    // Setters
    virtual void seleccionarUsuarioActual(string) = 0;
    virtual void seleccionarDepartamentoActual(char) = 0;

    virtual void deseleccionarUsuarioActual() = 0;
    virtual void deseleccionarDepartamentoActual() = 0;

    // Otros
    virtual ICollection* listarPropiedades() = 0;
    virtual bool verificarUsuario(string) = 0;
    virtual void guardarMensaje(DtMensaje) = 0;
    virtual void seleccionarChat(string) = 0;
    virtual void addChat(Usuario*) = 0;
    virtual void seleccionarPropiedad(int) = 0;
    virtual void darAlta() = 0;
    virtual void seleccionarPago(string, float) = 0;
    virtual void datosCasa(DtDatosCasa) = 0;
    virtual void datosApt(DtDatosApartamento) = 0;
    virtual void seleccionarEdificio(int) = 0;
    virtual ICollection* listarEdificios() = 0;
    virtual void seleccionarTipoPropiedad(string) = 0;
    virtual void seleccionarZona(int) = 0;
    virtual ICollection* listarZonas() = 0;
    virtual void seleccionarDepartamento(char) = 0;
    virtual ICollection* listarDepartamentos() = 0;
    virtual void cancelarInicio() = 0;
    virtual void iniciarSesion(string, string) = 0;
    virtual void registrarUsuario(string, string) = 0;
    virtual bool registrarContrasenia(string) = 0;
    virtual bool validarContrasenia(string) = 0;
    virtual void darDeAltaInmobiliaria(string, string, DtDireccion) = 0;

    // Destructor
    virtual ~ISistema();
};

#endif
