#ifndef Encryptor
#define Encryptor
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int findIndex(char array[26], char a) {
    for (int i = 0; i < 26; ++i) {
        if (a == array[i]) {
            return i; // Return the index position if the character is found
        }
    }
}

string encrypt(string sentence, char alphabet[], char first_array[], char middle_array[], char last_array[]){

    int index;
    for (int i = 1; i < sentence.size(); ++i) {

        
        int before = i - 1;
        int after = i + 1;

        //Cheks for 1st letter in a word
      
        if (!isalpha(sentence[before]) && isalpha(sentence[i])) {

            index = findIndex(first_array, sentence[i]);
            sentence[i] = alphabet[index];

        }

        //Checks for middle letter in a word
        else if (isalpha(sentence[before]) && isalpha(sentence[i]) && isalpha(sentence[after])) {

            index = findIndex(middle_array, sentence[i]);
            sentence[i] = alphabet[index];

        }

        //Checks for last letter in a word
        else if (isalpha(sentence[i]) && !isalpha(sentence[after])) {
            
            index = findIndex(last_array, sentence[i]);
            sentence[i] = alphabet[index];

        }
        


    }
    return sentence;

}





#endif 