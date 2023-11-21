#include "Lembrete.hpp"
#include "../Exceçoes/Exceções.hpp"
#include <string>
#include <iostream>

std::string Lembrete::getdata() const {

    return this->data; ///< Retorna a data
}

std::string Lembrete::gethorario() const {

    return this->horario; ///< Retorna o horario
}

void Lembrete::alterarMensagem(std::string nova_mensagem) {
    
    try {
        /// Verifica se a nova mensagem esta vazia, ou se a nova mensagem eh igual a mensagem atual
        if (!nova_mensagem.empty() || nova_mensagem != this->mensagem) {

            this->mensagem = nova_mensagem; ///< Atribui a nova mensagem
        } 
        else {

            throw std::invalid_argument("Mensagem invalida");
        }
    }
    catch (const std::exception& e) {

        std::cout << "A mensagem deve ser diferente da mensagem atual" << std::endl;

        handleExcecao(e);
    }
}

void ListaLembrete::adicionarLembrete(Lembrete* lembrete) {
    
    listadeLembretes.push_back(*lembrete); ///< Adicionando o lembrete na lista
}

void ListaLembrete::removerLembrete(Lembrete* lembrete) {

    listadeLembretes.remove(*lembrete); ///< Removendo o lembrete da lista
}