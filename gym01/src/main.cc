#include "game.hpp"

int main() {
  auto deck = std::make_shared<Deck>();
  auto game = std::make_shared<Game>(deck);
  game->Start();
  puts("should report malfunction");
  bool error = true;

  if (error) {

  }

  Deck *deckx = new Deck();
  delete deckx;

  Deck *decky = new Deck();

  Deck *x = nullptr;
  x->Deal();
}
