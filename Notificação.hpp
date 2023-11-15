#pragma once
#include <string>
#include "Tarefa.hpp"
#include "Lembrete.hpp"
#include <ctime>
#include <chrono>

class Notificacao {
public:
    Notificacao(int AntecedenciaMinutos, int AntecedenciaHoras);
    
    int getAntecedenciaMinutos() const;
    int getAntecedenciaHoras() const;

    void setAntecedenciaMinutos(int NovaAntecedencia);
    // redefine a antecedência desejada em minutos

    void setAntecedenciaHoras(int NovaAntecedencia);
    // redefine a antecedência desejada em horas

    void notificarTarefa(Tarefa* tarefa);
    // compara com o horário real e notifica tarefa (com certo tempo de antecedência ou no horário programado)

    void notificarCompromisso(Compromisso* compromisso);
    // compara com o horário real e notifica Compromisso (com certo tempo de antecedência ou no horário programado)

    void notificarLembrete(Lembrete* lembrete);
    // compara com o horário real e notifica Lembrete (com certo tempo de antecedência ou no horário programado)

private:
    int AntecedenciaMinutos;
    // de 0 a 59 min 
    int AntecedenciaHoras;
    // de 1 a 23 horas
};
