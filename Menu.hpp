#pragma once
#include <string>
#include <vector>


class PrimeiroMenu {
public:
  /// @brief Destrutor para destruição de subclasses
  virtual ~PrimeiroMenu() = default;

  /// @return O próximo menu.
  virtual PrimeiroMenu *next(unsigned opcao) = 0;

  /// @brief Renderiza as opções do menu.
  virtual void renderizar() const;
  
private:
  std::string titulo = "Gerenciador de Tarefas e Compromissos ";
  std::string segundotitulo = "Escolha uma opção:";
  std::vector<std::string> opcoes = {"0 --> Sair"};
};
