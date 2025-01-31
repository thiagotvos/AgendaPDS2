#pragma once

#include "Menu.hpp"
#include <string>

class MenuLogin : public PrimeiroMenu {
public:
  /// @brief Constrói um menu de login.
  MenuLogin();

  /// @brief Constrói próximo menu 
  ///
  /// @return O próximo menu que o usuario escolheu.
  PrimeiroMenu *next(unsigned opcao) override;
};
