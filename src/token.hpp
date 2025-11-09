#pragma once

#include <string>
#include <any>

enum TokenType {
    NE, PAS, // ( or {, ) or }
    VIRGULE, PÉRIODE, POINT, SOUSTRAIRE, ADDITIONNER, DIVISER, MULTIPLIER, RESTER, POINT_VIRGULE, DEUX_POINTS, // comma, period(line break), dot(float), -, +, /, *, %, ;, :
    JE,   TU,   IL,   ELLE,  IEL,  ON, // types: char, string, integer, bool, float, null/nothing
    NOUS, VOUS, ILLS, ELLES, IELS, ONS,// array forms of types
    REFLEXIVE, APPELLER, ÊTRE, // reflexive prefix, initialization operator, assignment operator
    N_APOS, ÉGALER,  // negation operator, ==,
    PLUS_QUE, MOINS_QUE, // greater than, less than. >= and <= are created by PLUS-QUE OU ÉGALER
    NUMBER, FLOAT, STRING, // whole number, float, string literal
    SI, SINON, //if, else
    ET, OU, //and, or
    VRAI, FAUX, // true, false
    PENDANT, TOUT_EN, // for, while
    IMPRIMEZ, RETOURNER, // print function, return statement
    OBJET, PARENT, SOI, // class, parent/super, this/self
    END,
};

class Token {
    public:
        TokenType type;
        std::string lexeme;
        std::any literal = "";
        int line;
        
        Token(TokenType type, std::string lexeme, std::any literal, int line);
        Token(TokenType type, std::string lexeme, int line);

        std::string toString();
};
