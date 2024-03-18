
#include <iostream>
using namespace std;

int main() {
    int t;

    for (t = 1; t <= 6; t++)
    {
        cout << t << " Eko ramadhan" << endl;
    }

    string arr[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Masukan nickname: ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "nilai array: " << arr[i] << endl;
    }
    return 0;
}


