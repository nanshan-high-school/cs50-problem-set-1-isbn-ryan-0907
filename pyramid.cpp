#include <iostream>
using namespace std;

int main() {
    int hight;
    do {
    cout << "金字塔高度為:";
    cin >> hight;
    } while (hight > 8 || hight < 0);
    for (int i = 0; i <= hight; i++){
        for (int j = 0; j < hight; j++){
            if (i + j < hight){
                cout << " ";
            } else {
                cout << "#";
            }
        }
        cout << "\n";
    }
}
