#include <iostream>
#include "RandomNum.hpp"
#include <string>
#include "Encryption.hpp"
#include "Decryption.hpp"
using namespace std;

char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


char first_array[26] = {'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25','26'};

char middle_array[26] = {'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25','26'};

char last_array[26] = {'1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24','25','26'};




int main()
{
    vector <int>random = randomgen();
    vector <int>random1 = randomgen1();
    vector <int>random2 = randomgen2();
    int position;
    string encryptsentence;
    string decryptsentence;

    //shuffling arrays

    for (int i = 0; i < 26; ++i) {
        position = random[i];
        if (position != i) {
            first_array[position] = alphabet[i];
        }
    }

    for (int i = 0; i < 26; ++i) {
        position = random1[i];
        middle_array[position] = alphabet[i];
    }

    for (int i = 0; i < 26; ++i) {
        position = random2[i];
        last_array[position] = alphabet[i];
    }

    // test arrays
    for (int i = 0; i < 26; ++i) {
        cout << first_array[i];

    }
    cout << endl;
    for (int i = 0; i < 26; ++i) {
        cout << middle_array[i];

    }
    cout << endl;

    for (int i = 0; i < 26; ++i) {
        cout << last_array[i];

    }
    cout << endl;

    // encryption

    string sentence;
    cout << "Give a sentence: ";
    getline(cin, sentence);

    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    encryptsentence = encrypt(sentence, alphabet, first_array, middle_array, last_array);

    
    cout << "Encrypted Sentence: " << encryptsentence << endl;


    // decryption

    decryptsentence = decrypt(encryptsentence, alphabet, first_array, middle_array, last_array);
        
    
    cout << "Decrypted Sentence: " << decryptsentence;
    
}