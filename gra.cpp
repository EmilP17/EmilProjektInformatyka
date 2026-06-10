#include <iostream> <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){


        cout << "                                                      GRA STATKI" << endl << endl;
 srand(time(0));

    char plansza[10][10];

    // Wype³nienie planszy
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            plansza[i][j] = '~';
            cout << plansza[i][j] << " ";
        }
        cout <<endl;
    }

    // Statek 4-polowy
 int statek4X = rand()%10;
 int statek4Y = rand()%7;

for(int i=0; i<4; i++)
{
    plansza[statek4X][statek4Y+i] = 'X';
}

// Statek 3-polowy
 int statek3X = rand()%8;
 int statek3Y = rand()%10;

for(int i=0; i<3; i++)
{
    plansza[statek3X+i][statek3Y] = 'X';
}

// Statek 2-polowy
 int statek2X = rand()%10;
 int statek2Y = rand()%9;

for(int i=0; i<2; i++)
{
    plansza[statek2X][statek2Y+i] = 'X';
}

        int a, b;

        cout << "Podaj wspolrzedne: " << endl;
        cout << "Podaj wiersz: ";
        cin >> a;
        cout << "Podaj kolumne: ";
        cin >> b;
        if(a>) //dokoncz jesli jest wiecej i mniej niz mozna to ze zle dane
}



