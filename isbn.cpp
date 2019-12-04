#include <iostream>
using namespace std;

int main() {
    long long isbn;

    do {
        cout << "請輸入isbn編號(若尾數為X，改輸入0): ";
        cin >> isbn;
    } while (isbn <= 1000000000);
    int first;
    first = isbn / 1000000000 *10;
    isbn = isbn % 1000000000;

    int second;
    second = isbn / 100000000 * 9;
    isbn = isbn % 100000000;

    int third;
    third = isbn / 10000000 * 8;
    isbn = isbn % 10000000;

    int fourth;
    fourth = isbn / 1000000 * 7;
    isbn = isbn % 1000000;

    int fifth;
    fifth = isbn / 100000 * 6;
    isbn = isbn % 100000;

    int sixth;
    sixth = isbn / 10000 * 5;
    isbn = isbn % 10000;

    int seventh;
    seventh = isbn / 1000 * 4;
    isbn = isbn % 1000;

    int eighth;
    eighth = isbn / 100 * 3;
    isbn = isbn % 100;

    int ninth;
    ninth = isbn / 10 * 2;

    int lastNumber = 0;
    lastNumber = isbn % 10;

    int lastCode;
    lastCode = (first + second + third +fourth + fifth + sixth + seventh+ eighth + ninth) % 11;
    
    if (lastNumber == lastCode) {
        cout << "correct";
    } else if (lastCode == 10) {
        cout << "correct";
    } else {
        cout << "wrong";
    }
}
