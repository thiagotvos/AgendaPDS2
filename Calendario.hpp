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

    // interação entre tarefas e calendario
    void adicionarTarefaCalendario(const Tarefa& tarefa);
    void removerTarefaCalendario(const std::string& nomeTarefa);

    // interação entre compromissos e calendario
    void adicionarCompromissoCalendario(const Compromisso& compromisso);
    void removerCompromissoCalendario(const std::string& descricaoCompromisso);

    //interação entre Lembretes e calendario
    void adicionarLembreteCalendario(const Lembrete& lembrete);
    void removerLembreteCalendario(const std::string& descricaoLembrete);

    // imprimir o calendário da semana atual 
    void imprimirCalendario() const;
private:
    ListaTarefa listaTarefas;
    ListaCompromisso listaCompromissos;
    ListaLembrete listaLembretes;
    
    // Mapa para armazenar eventos por dia e horário
    std::map<std::string, std::map<std::string, std::vector<std::string>>> agenda;

};
