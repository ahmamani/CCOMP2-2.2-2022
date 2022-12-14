#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");

    double sum = 0, cont = 0;
    while(!source.eof()) {
        int x;
        source >> x;
        cont++;
        sum += x;
    }
    
    source.close();

    destination << sum / cont;

    return 0;
}
