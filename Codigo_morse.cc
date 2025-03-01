#include <iostream> 

using namespace std;

char MorseToLetter(string word){ //Funcion con la lista del abecedario en morse
    if (word == ".-") return 'A';
    if (word == "-...") return 'B';
    if (word == "-.-.") return 'C';
    if (word == "-..") return 'D';
    if (word == ".") return 'E';
    if (word == "..-.") return 'F';
    if (word == "--.") return 'G';
    if (word == "....") return 'H';
    if (word == "..") return 'I';
    if (word == ".---") return 'J';
    if (word == "-.-") return 'K';
    if (word == ".-..") return 'L';
    if (word == "--") return 'M';
    if (word == "-.") return 'N';
    if (word == "---") return 'O';
    if (word == ".--.") return 'P';
    if (word == "--.-") return 'Q';
    if (word == ".-.") return 'R';
    if (word == "...") return 'S';
    if (word == "-") return 'T';
    if (word == "..-") return 'U';
    if (word == "...-") return 'V';
    if (word == ".--") return 'W';
    if (word == "-..-") return 'X';
    if (word == "-.--") return 'Y';
    if (word == "--..") return 'Z';

    return '?'; // Carácter desconocido
}

void MorseTranslate(string &word){ //funcion que traduce una palabra en morse 

    string result; //cadena donde almacenaremos el resultado
    string letter; //Cadena donde guardaremos los caracteres en morse

 for(unsigned int i = 0; i < word.size(); i++){ //For que recorre toda la cadena original escrita en morse
    if(word.at(i) != ' ') {

      if(i + 1 < word.size() && word.at(i + 1) == ' ' && i + 2 < word.size() && word.at(i + 2) == ' '){
        letter.push_back(word.at(i));
        result.push_back(MorseToLetter(letter)); //Almacenamos en result el caracter que nos retorne la funcion
        result.push_back(' '); //Si se encuentra con un doble espacio valido, agrega un espacio
        letter.clear(); //Limpiamos la cadena
      }
       else if(i + 1 < word.size() && word.at(i + 1) == ' ') { //Si se encuentra con solo un espacio significa un cambio de letra
        letter.push_back(word.at(i));
        result.push_back(MorseToLetter(letter)); //Almacenamos en result el caracter que nos retorne la funcion
        letter.clear(); //Limpiamos la cadena
      }else{
      letter.push_back(word.at(i));
      if(i + 1 == word.size()){ //Si llegamos al final de la cadena, traducimos el último caracter
        result.push_back(MorseToLetter(letter));
    }
      }}
    }
    word = result;
}

int main(){
    string MorseWord; 

    cout << "Ingrese la palabra en morse:" << endl;
    getline(cin, MorseWord); //Ingresamos la cadena
    MorseTranslate(MorseWord);
    cout << "Traduccion: " << MorseWord<< endl;
}