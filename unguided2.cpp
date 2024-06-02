#include <iostream>
#include <string>
using namespace std;

// 2311102034_Rizal Dwi Anggoro_IF-11-A

bool vokal(char huruf) {
    huruf = tolower(huruf);
    return (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u');
}

int itungvokal(const string &kalimat) {
    int count = 0;
    for (char huruf : kalimat) {
        if (vokal(huruf)) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;
    cout << "Input Kalimat: ";
    getline(cin, sentence); 

    int vokal2 = itungvokal(sentence);
    cout << "Huruf Vokal Yang Ada Pada Kalimat " << sentence <<" : "<< vokal2 << endl;

    return 0;
}