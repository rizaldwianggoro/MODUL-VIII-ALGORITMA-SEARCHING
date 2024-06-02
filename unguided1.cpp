#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 2311102034_Rizal Dwi Anggoro_IF-11-A

bool binarySearch(const vector<char>& sortedChars, char target) {
    int left = 0;
    int right = sortedChars.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (sortedChars[mid] == target) {
            return true;
        } else if (sortedChars[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {

    string kalimat = "sudah diinput dari sononya";
    char huruf;

    cout << "Kalimatnya : Sudah diinput dari sononya " << endl;
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    vector<char> chars;
    for (char c : kalimat) {
        // Abaikan spasi
        if (c != ' ') {
            chars.push_back(c);
        }
    }

    sort(chars.begin(), chars.end());

    cout << "Huruf-huruf setelah diurutkan: ";
    for (char c : chars) {
        cout << c << " ";
    }
    cout << endl;

    bool found = binarySearch(chars, huruf);

    if (found) {
        cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
