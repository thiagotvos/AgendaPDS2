#include "Usuario.hpp"
#include "Exceções.hpp"
#include <iostream>
#include <string>
#include <sstream>

std::string Usuario::getnome() const {

    return this->nome; ///< Retorna o nome
}
std::string Usuario::getemail() const {
    
    return this->email; ///< Retorna o email
}

void Usuario::mudaremail(std::string novo_email) {
    try {
        std::istringstream iss(novo_email);
        std::string usuario, dominio;

        /// Quebra o novo email em partes, para fazer as verificacoes necessarias
        std::getline(iss, usuario, '@');
        std::getline(iss, dominio);

        /// Verifica se o usuario ou dominio estao preenchidos
        if (usuario == "" || dominio == "") {
        
            throw std::invalid_argument("Email incompleto"); 
        }

        /// Verifica se o dominio esta preenchido corretamente
        if (dominio != "gmail.com" && dominio != "yahoo.com" && dominio != "outlook.com") {

            throw std::invalid_argument("Dominio do email invalido");
        }

        this->email = novo_email; ///< Atribui o novo email
    }
    catch (const std::exception& e) {
        std::cout << "Email deve estar no formato: usuario@dominio.com" << std::endl
        << "Dominios aceitos:" << std::endl
        << "    - 'gmail.com'" << std::endl
        << "    - 'yahoo.com'" << std::endl
        << "    - 'outlook.com'" << std::endl;

        handleExcecao(e);
    }
}