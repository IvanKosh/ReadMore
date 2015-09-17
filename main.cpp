/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 19:07
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream in(argv[1]);
    string line;
    int i;
    while (getline(in, line)) {
        if (line.length() <= 55) {
            cout << line << '\n';
        }
        else {
            for (i = 40; i--;) {
                if(line[i] == ' ') break;
            }
            if (i < 0) {
                cout << line.substr(0, 40) << "... <Read More>\n";
            }
            else {
                cout << line.substr(0, i) << "... <Read More>\n";
            }
        }
    }   
    return 0;
}