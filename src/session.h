#ifndef SESSION_H
#define SESSION_H

#include "card.h"
#include <string>
#include <vector>

class Session {
 public:
  Session(std::string sessionName);
  void addCard(std::string cardName);
  void render(int startX, int startY, int width, int height);
  std::string nome;
  std::vector<Card *> cards;

 private:
};

#endif
