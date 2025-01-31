#pragma once
#include "LoginMenu.hpp"
#include "Menu.hpp"
#include "Usuario.hpp"
#include "Tarefa.hpp"
#include "Lembrete.hpp"
#include "Calendario.hpp"

#include <string>

class UsuarioMenu : public Menu {
public:
/// @brief Constrói um menu do Usuário.  
UsuarioMenu(Usuario const &Usuario);

  /// @brief Constrói próximo menu 
  ///
  /// @return O próximo menu que o usuario escolheu.
  PrimeiroMenu *next(unsigned option) override;
private:
  Usuario const &_Usuario;
};
