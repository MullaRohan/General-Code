#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, k;
    getline(cin, s);

    for (char c : s)
    {
        if (c == '/')
        {
            k += '/';
            k += ' ';
        }
        else
            k += c;
    }
    stringstream ss(k);
    string word;
    while (ss >> word)
    {
        if (word == "/")
        {
            cout << " ";
        }
        else if (word == ".-")
        {
            cout << "a";
        }
        else if (word == "-...")
        {
            cout << "b";
        }
        else if (word == "-.-.")
        {
            cout << "c";
        }
        else if (word == "-..")
        {
            cout << "d";
        }
        else if (word == ".")
        {
            cout << "e";
        }
        else if (word == "..-.")
        {
            cout << "f";
        }
        else if (word == "--.")
        {
            cout << "g";
        }
        else if (word == "....")
        {
            cout << "h";
        }
        else if (word == "..")
        {
            cout << "i";
        }
        else if (word == ".---")
        {
            cout << "j";
        }
        else if (word == "-.-")
        {
            cout << "k";
        }
        else if (word == ".-..")
        {
            cout << "l";
        }
        else if (word == "--")
        {
            cout << "m";
        }
        else if (word == "-.")
        {
            cout << "n";
        }
        else if (word == "---")
        {
            cout << "o";
        }
        else if (word == ".--.")
        {
            cout << "p";
        }
        else if (word == "--.-")
        {
            cout << "q";
        }
        else if (word == ".-.")
        {
            cout << "r";
        }
        else if (word == "...")
        {
            cout << "s";
        }
        else if (word == "-")
        {
            cout << "t";
        }
        else if (word == "..-")
        {
            cout << "u";
        }
        else if (word == "...-")
        {
            cout << "v";
        }
        else if (word == ".--")
        {
            cout << "w";
        }
        else if (word == "-..-")
        {
            cout << "x";
        }
        else if (word == "-.--")
        {
            cout << "y";
        }
        else if (word == "--..")
        {
            cout << "z";
        }
        else if (word == ".-.-.-")
        {
            cout << ".";
        }
        else if (word == "--..--")
        {
            cout << ",";
        }
        else if (word == "..--..")
        {
            cout << "?";
        }
        else if (word == ".----")
        {
            cout << "1";
        }
        else if (word == "..---")
        {
            cout << "2";
        }
        else if (word == "...--")
        {
            cout << "3";
        }
        else if (word == "....-")
        {
            cout << "4";
        }
        else if (word == ".....")
        {
            cout << "5";
        }
        else if (word == "-....")
        {
            cout << "6";
        }
        else if (word == "--...")
        {
            cout << "7";
        }
        else if (word == "---..")
        {
            cout << "8";
        }
        else if (word == "----.")
        {
            cout << "9";
        }
        else if (word == "-----")
        {
            cout << "0";
        }
    }
    return 0;
}