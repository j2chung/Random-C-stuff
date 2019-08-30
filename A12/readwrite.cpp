#include <iostream>
#include <iomanip>   // for setprecision, setw
#include <fstream>   // for file I/O
#include <cstdlib>   // for exit()
#include <vector>
using namespace std;

void readData(vector<double>& data) {
    ifstream fin;
    fin.open("rawdata.txt");
    if (fin.fail()) {
        cout << "Input file failed to open.\n";
        exit(-1);
    }
    double nextNum;
    while (fin >> nextNum) {
        cout << "Read: " << nextNum << endl;
        data.push_back(nextNum);
    }
    fin.close();
}

void writeData(const vector<double>& data) {
    ofstream fout;
    fout.open("neat.txt");
    if (fout.fail()) {
        cout << "Output file failed to open.\n";
        exit(-1);
    }
    fout << fixed << setprecision(2);
    for (unsigned i = 0; i < data.size(); i++) {
        fout << setw(10) << right << data[i] << endl;
    }
    fout.close();
}

int main() {
    vector<double> data;
    readData(data);
    cout << "Vector data:\n";
    for (unsigned i = 0; i < data.size(); i++) {
        cout << data[i] << endl;
    }
    writeData(data);

    return 0;
}