#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    string word;
    string firstWord;
    int words = 0;
    int vowels = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Count characters
    cout << "\nNumber of characters: "
         << sentence.length() << endl;

    // Count words
    stringstream ss(sentence);

    while (ss >> word) {
        words++;

        if (words == 1) {
            firstWord = word;
        }
    }

    cout << "Number of words: "
         << words << endl;

    // Count vowels
    for (int i = 0; i < sentence.length(); i++) {
        char ch = tolower(sentence[i]);

        if (ch == 'a' || ch == 'e' ||
            ch == 'i' || ch == 'o' ||
            ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels: "
         << vowels << endl;

    // Convert to uppercase
    cout << "Uppercase sentence: ";

    for (int i = 0; i < sentence.length(); i++) {
        cout << (char)toupper(sentence[i]);
    }

    cout << endl;

    // Check first word palindrome
    string clean = "";

    for (int i = 0; i < firstWord.length(); i++) {
        if (isalnum(firstWord[i])) {
            clean += tolower(firstWord[i]);
        }
    }

    bool palindrome = true;

    for (int i = 0; i < clean.length() / 2; i++) {
        if (clean[i] != clean[clean.length() - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome && clean.length() > 0) {
        cout << "First word is a palindrome." << endl;
    }
    else {
        cout << "First word is not a palindrome." << endl;
    }

    return 0;
}