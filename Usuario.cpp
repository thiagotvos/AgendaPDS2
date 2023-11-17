#include <iostream>
#include "Usuario.hpp"
#include <string>
#include <sstream>

std::string Usuario::getnome() const {

    // Retorna o nome
    return this->nome;
}
std::string Usuario::getemail() const {
    
    // Retorna o email
    return this->email;
}

void Usuario::mudaremail(std::string novo_email) {
    std::istringstream iss(novo_email);
    std::string usuario, dominio;

    // Quebra o novo email em partes, para fazer as verificacoes necessarias
    std::getline(iss, usuario, '@');
    std::getline(iss, dominio);

    // Verifica se o usuario ou dominio estao preenchidos
    if (usuario == "" || dominio == "") {
       // email invalido
    }

    // Verifica se o dominio esta preenchido corretamente
    if (dominio != "gmail.com" && dominio != "yahoo.com" && dominio != "outlook.com") {
        // dominio invalido
    }

    // Atribui o novo email
    this->email = novo_email;
}