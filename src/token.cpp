#include "token.hpp"
#include <string>
#include <any>

Token::Token(TokenType type, std::string lexeme, std::any literal, int line) {
    this->type = type;
    this->lexeme = lexeme;
    this->line = line;
    this->literal = literal;
}

Token::Token(TokenType type, std::string lexeme, int line) {
    this->type = type;
    this->lexeme = lexeme;
    this->line = line;
}

std::string Token::toString() {
    return type + " " + lexeme + " " + std::any_cast<std::string>(literal);
}
