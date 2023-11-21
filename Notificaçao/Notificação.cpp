#include <string>
#include <iostream>
#include <ctime>
#include "Notificação.hpp"
#include "../Tarefa/Tarefa.hpp"
#include "../Lembrete/Lembrete.hpp"

using namespace std;

Notificacao::Notificacao(const int AntecedenciaMinutos,const int AntecedenciaHoras) {
    _AntecedenciaMinutos = AntecedenciaMinutos;
    _AntecedenciaHoras = AntecedenciaHoras;
    _estado = true;
}

void Notificacao::notificar(Compromisso* compromisso) {
    time_t timer;
    struct tm *horarioLocal;
    time(&timer); // Obtem informações de data e hora
    horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

    int hora = horarioLocal->tm_hour;
    int min  = horarioLocal->tm_min;

    if (_estado && compromisso->hora - _AntecedenciaHoras == hora && compromisso->minutos - _AntecedenciaMinutos == min) {
        cout << compromisso->descricao << " Daqui a: " << AntecedenciaHoras << "h e " << AntecedenciaMinutos << "min" << endl;
    }
}

void Notificacao::notificar(Lembrete* lembrete) {
    time_t timer;
    struct tm *horarioLocal;
    time(&timer); // Obtem informações de data e hora
    horarioLocal = localtime(&timer); // Converte a hora atual para a hora local

    int hora = horarioLocal->tm_hour;
    int min  = horarioLocal->tm_min;

    if (_estado && lembrete->hora - _AntecedenciaHoras == hora && lembrete->minutos - _AntecedenciaMinutos == min) {
        cout << lembrete->mensagem << " Daqui a: " << AntecedenciaHoras << "h e " << AntecedenciaMinutos << "min" << endl;
    }
}

void Notificacao::desativarNotificacao() {
    estado = false;
}
