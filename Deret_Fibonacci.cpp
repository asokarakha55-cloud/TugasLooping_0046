#include <iostream>

using namespace std;

// menambahkan variabel global
int n;
int pilihan;

// menambahkan fungsi

bool isprime(int num);
bool isFibonacci(int num);
void inputNumber();
void displayresult(int type);
void showmenu();

int main()
{
    bool running = true;

    while (running)
    {
        showmenu();
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputnumber();
            displayresult(1);
            break;
        case 2:
            inputnumber();
            displayresult(2);
            break;
        case 0:
            cout << "Keluar dari program, Terima kasih!" << endl;
            running = false;
            break;
        default:
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
            break;
        }
        cout << endl; // Menambahkan baris kosong untuk pemisah antar iterasi
    }
    return 0;
}

// Definisi fungsi

bool isprime(int num)
{
    if (num < 0)
        return false;
    int a = 0, b = 1;
    while (a < num)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == num);
}

void inputnumber()
{
    cout << "Masukkan angka: ";
    cin >> n;
}

void displayresult(int type)
{
    if (type == 1)
    {
        if (isprime(n))
            cout << n << "adalah bilangan prima." << endl;
        else
            cout << n << "BUKAN bilangan prima." << endl;
    }
    else
    {
        if (isFibonacci(n))
            cout << n << "termasuk dalam deret fibonacci." << endl;
        else
            cout << n << "BUKAN bagian dari deret fibonacci." << endl;
    }
}

void showmenu()
{
}