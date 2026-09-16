// CGT-215-Lab-05-Straub6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
using namespace std;

char translateChar(char c, const vector<char>&code) 
{
    //Capital letter A-Z
    if (c >= 65 && c <= 90)
    {
        return code[c-65];
    }
    //lower case letter a-z
    else if (c >= 97 && c <= 122)
    {
        char upperCaseLetter = c - 32;
        char upperCaseCode = code[upperCaseLetter - 65];
        return upperCaseCode + 32;
    }
    //not a letter
    else 
    {
        return c;
    }
}

int main()
{
    std::cout << "Input text to cypher: This is a test! It's made up of special characters, *space*, and some other weirdness\n";
    //array for cypher
    vector <char>code = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };
    string text;
    //Allows for the text input
    getline(cin, text);
    //allows to for the cypher text to be stored
    string result = "";
    //sorts through the array to match the letter associated
    for (size_t i = 0; i < text.length(); i++) 
    {
        result += translateChar(text[i], code);
    }
    cout<<"Encoded Message: "<< result<<endl;
}