#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Tarefa.hpp"
#include "Lembrete.hpp"

class Calendario {
public:
    Calendario();  

    /// @brief Imprime o calendário da semana atual 
    void imprimirCalendario() const;
private:
    
    /// @brief Mapa para armazenar eventos por dia e horário
    std::map<std::string, std::map<std::string, std::vector<std::string>>> agenda;
};
