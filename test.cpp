#include <iostream>
#include <map>
#include <string>

using namespace std;

// Fungsi untuk mengembalikan nilai dari warna gelang
int colorValue(const string &color) {
    map<string, int> colorMap = {
        {"black", 0}, {"brown", 1}, {"red", 2},   {"orange", 3},
        {"yellow", 4}, {"green", 5}, {"blue", 6},  {"violet", 7},
        {"gray", 8},   {"white", 9}
    };
    return colorMap[color];
}

// Fungsi untuk mengembalikan faktor pengali dari warna gelang
double multiplierValue(const string &color) {
    map<string, double> multiplierMap = {
        {"black", 1},         {"brown", 10},       {"red", 100},
        {"orange", 1000},     {"yellow", 10000},   {"green", 100000},
        {"blue", 1000000},    {"violet", 10000000},{"gray", 100000000},
        {"white", 1000000000},{"gold", 0.1},       {"silver", 0.01}
    };
    return multiplierMap[color];
}

// Fungsi untuk mengembalikan nilai toleransi dari warna gelang
double toleranceValue(const string &color) {
    map<string, double> toleranceMap = {
        {"brown", 1},   {"red", 2},     {"green", 0.5}, {"blue", 0.25},
        {"violet", 0.1},{"gray", 0.05}, {"gold", 5},    {"silver", 10}
    };
    return toleranceMap[color];
}

int main() {
    string band1, band2, band3, band4;

    // Input dari pengguna
    cout << "Masukkan warna gelang pertama: ";
    cin >> band1;
    cout << "Masukkan warna gelang kedua: ";
    cin >> band2;
    cout << "Masukkan warna gelang ketiga (pengali): ";
    cin >> band3;
    cout << "Masukkan warna gelang keempat (toleransi): ";
    cin >> band4;

    // Hitung nilai resistansi
    int value = colorValue(band1) * 10 + colorValue(band2);
    double resistance = value * multiplierValue(band3);
    double tolerance = toleranceValue(band4);

    // Tampilkan hasil
    cout << "Nilai resistor: " << resistance << " ohm" << endl;
    cout << "Toleransi: ±" << tolerance << "%" << endl;

    return 0;
}
