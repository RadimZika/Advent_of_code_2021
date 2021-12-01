#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ifstream inFile("data/01_data.txt");
    int x = 0;

    if (!inFile) {
        cerr << "Unable to open file datafile.txt" << endl;
        exit(1);   // call system to stop
    }
    else {
        cout << "Soubor jsem krasne precetl" << endl;
    }

    vector<int> mujVect, sum;
    int pocet = 0;
    while(inFile >> x) {
        mujVect.push_back(x);
    }

    for(uint16_t i = 0; i < mujVect.size() - 2; ++i) {
        sum.push_back(mujVect[i] + mujVect[i+1] + mujVect[i+2]);
    }

    for(uint16_t i = 0; i < sum.size(); ++i) {
        if (sum[i+1] > sum[i])
            pocet++;
    }

    cout << "Pocet: "<< pocet << endl;
    return 0;
}
