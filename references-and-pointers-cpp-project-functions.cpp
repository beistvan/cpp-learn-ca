#include <regex>

std::string bleep(std::string word, std::string &text) {
  std::string asterisks(word.length(), '*');
  text = std::regex_replace(text, std::regex(word), asterisks);
  return text;
}
