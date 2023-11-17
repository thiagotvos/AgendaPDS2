#include <iostream>
#include "Usuario.hpp"
#include <string>
#include <sstream>

std::string Usuario::getnome() const {
    return this->nome;
}
std::string Usuario::getemail() const {
    return this->email;
}

void Usuario::mudaremail(std::string texto) {
    std::istringstream iss(texto);
    std::string usuario, dominio;

    std::getline(iss, usuario, '@');
    std::getline(iss, dominio);

    if (usuario == "" || dominio == "") {
       // email invalido
    }
    if (dominio != "gmail.com" && dominio != "yahoo.com" && dominio != "outlook.com") {
        // dominio invalido
    }

    this->email = texto;
}