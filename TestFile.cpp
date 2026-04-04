#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int mainn(){
    string str = "sdjbvc jfj ods pfpodsljk vohvsi ogjb jvj afu";
    for (int i = 0; i < str.size(); i++) {
        toupper(str[i][str[i].size() - 1]);
    }
    for (int j = 0; j < str.size(); j++)
    {
        cout << str[i] << " ";
    }
}
