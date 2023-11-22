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
  UsuarioMenu(Usuario const &Usuario);
  Menu *next(unsigned option) override;
private:
  Usuario const &_Usuario;
};
