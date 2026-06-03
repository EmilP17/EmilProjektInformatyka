#include <iostream><cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){


        cout << "                                                      GRA STATKI" << endl << endl;
        srand(time (0));
        int statekX= rand()%10;
        int statekY= rand()%10;
        char plansza[10][10];


            for(int i=0; i<10; i++){
                for(int j=0; j<10; j++){
                     plansza[i][j] ='~';
                }
            }
                for(int i=0; i<10; i++){
                    for(int j=0; j<10; j++){
                        cout << plansza[i][j] << " ";
                    }
                    cout<< endl;
                }

        int x, y;

        cout << "Podaj wspolrzedne: " << endl;
        cout << "Podaj wiersz: ";
        cin >> x;
        cout << "Podaj kolumne: ";
        cin >> y;;


}
