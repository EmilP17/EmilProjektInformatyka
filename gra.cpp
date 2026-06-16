#include <iostream> <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
        #define rozowy "\033[38;2;219;92;139m"

        cout  << rozowy << "                                                      GRA STATKI" << endl << endl;
 srand(time(0));

    char plansza[10][10];


    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            plansza[i][j] = '~';

        }
        cout <<endl;
    }


 int statek4X = rand()%10;
 int statek4Y = rand()%7;

for(int i=0; i<4; i++)
{
    plansza[statek4X][statek4Y+i] = 'X';
}


 int statek3X = rand()%8;
 int statek3Y = rand()%10;

for(int i=0; i<3; i++)
{
    plansza[statek3X+i][statek3Y] = 'X';
}


 int statek2X = rand()%10;
 int statek2Y = rand()%9;
 int wszystkieStatki=9;
 int trafienia=0;

for(int i=0; i<2; i++)
{
    plansza[statek2X][statek2Y+i] = 'X';
}

int a,b;


while(trafienia < wszystkieStatki)
{
    cout << endl;

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(plansza[i][j] == 'X')
                cout << "~ ";
            else
                cout << plansza[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;
    cout << "Podaj wspolrzedne:" << endl;

    cout << "Podaj wiersz: ";
    cin >> a;
    a--;
    cout << "Podaj kolumne: ";
    cin >> b;

    if(a < 0 || a > 9 || b < 0 || b > 9)
    {
        cout << "Bledne dane!" << endl;
    }
    else
    {
        if(plansza[a][b] == 'X')
        {
            cout << "TRAFIONY!" << endl;

            plansza[a][b] = 'T';
            trafienia++;
        }

    cout << "Trafienia: "
         << trafienia
         << "/"
         << wszystkieStatki
         << endl;}



}
}
