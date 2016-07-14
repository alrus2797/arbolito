#include "parser.h"

Parser::Parser(string t)
{
    this->texto = t;
}

vector<string> Parser::parsear() {
    vector <string> vec ;
    string temp = "";
    for (string::iterator it = this->texto.begin(); it != this->texto.end(); ++it){

        if (*it != ' '){
            //cout << *it<<"/ \n ";
            temp += (*it);
            //cout << "TEmp: "<< temp;
            if(*it == this->texto.back()) vec.push_back(temp);
        }
        else{
            //cout << temp ;
            vec.push_back(temp);
            temp = "";

        }
    }

    return vec;
}
