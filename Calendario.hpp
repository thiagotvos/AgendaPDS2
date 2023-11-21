#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Tarefa/Tarefa.hpp"
#include "Lembrete/Lembrete.hpp"

class Calendario {
public:
    Calendario();  

    /// @brief Imprime o calendario da semana atual 
    void imprimirCalendario() const;

private:
    std::map<std::string, std::map<std::string, std::vector<std::string>>> agenda; ///< Mapa para armazenar eventos por dia e horario
};