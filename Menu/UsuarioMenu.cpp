#pragma once
#include "UsuarioMenu.hpp"
#include "LogiMenu.hpp"
#include "Menu.hpp"
#include "Usuario.hpp"
#include "Tarefa.hpp"
#include "Lembrete.hpp"
#include "Calendario.hpp"

#include <iostream>
#include <string>


UsuarioMenu::UsuarioMenu(Usuario const &Usuario) {
  opcoes.push_back("1 --> Lembretes");
  opcoes.push_back("2 --> Compromissos");
  opcoes.push_back("3 --> Tarefas");
}

Menu *UsuarioMenu::next(unsigned option) {
  switch (option) {
  case 1: {
    
    imprimirCalendario();
    //imprime o calendario da semana 

    std::cout << '\n' '\n' << "Aqui estão seus lembretes: " << std::endl;
    std::cout << '\n' << verLembretes() << std::endl;
    // imprime os lembretes atuais 
    
    ///...

    ///vai para o menu dos lembretes

    break;
  }
  case 2: {
    imprimirCalendario();
    //imprime o calendario da semana 

    std::cout << '\n' '\n' << "Aqui estão seus Compromissos: " << std::endl;
    std::cout <<'\n' << verCompromissos() << std::endl;
    /// imprime os Compromissos atuais 
    
    ///...

    ///vai para o menu dos lembretes   
    break;
  }
  case 3: {
    imprimirCalendario();
    //imprime o calendario da semana 

    std::cout << '\n' '\n' << "Aqui estão suas Tarefas: " << std::endl;
    std::cout << '\n' << verTarefas() << std::endl;
    /// imprime as Tarefas atuais 
    
    ///...

    ///vai para o menu das Tarefas   
    break;
  }
  }

  // TODO: próximo menu
  return nullptr;
}
