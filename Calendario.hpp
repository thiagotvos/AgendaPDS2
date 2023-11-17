#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <map>
#include "Tarefa.hpp"
#include "Lembrete.hpp"
#include "Lista.hpp"

class Calendario {

public:
    Calendario();  

    /// @brief Adiciona um Tarefa ao Calendario
    ///
    /// @param tarefa        A Tarefa a ser adicionada
    void adicionarTarefaCalendario(const Tarefa& tarefa);

    /// @brief Remove uma Tarefa do Calendario
    ///
    /// @param tarefa        A Tarefa a ser removida
    void removerTarefaCalendario(const Tarefa& tarefa);

    /// @brief Adiciona um Compromisso ao Calendario
    ///
    /// @param compromisso        O Compromisso a ser adicionado
    void adicionarCompromissoCalendario(const Compromisso& compromisso);

    /// @brief Remove um Compromisso do Calendario
    ///
    /// @param compromisso        O Compromisso a ser removido
    void removerCompromissoCalendario(const Compromisso& compromisso);

    /// @brief Adiciona um Lembrete ao Calendario
    ///
    /// @param compromisso        O lembrete a ser adicionado
    void adicionarLembreteCalendario(const Lembrete& lembrete);

    /// @brief Remove um lembrete do Calendario
    ///
    /// @param compromisso        O Lembrete a ser removido
    void removerLembreteCalendario(const Lembrete& lembrete);

    /// @brief Imprime o calendário da semana atual 
    void imprimirCalendario() const;
private:
    ListaTarefa listaTarefas;
    ListaCompromisso listaCompromissos;
    ListaLembrete listaLembretes;
    
    // Mapa para armazenar eventos por dia e horário
    std::map<std::string, std::map<std::string, std::vector<std::string>>> agenda;

};
