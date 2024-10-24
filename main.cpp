#include <iostream>
using namespace std;

// Funkcija za pronalazak najveceg broja u zadanom polju
int algoritam_najveci (int polje[], int indeks, int n)
{
    int najveci;
    if(indeks >= n - 2)
    {
        if(polje[indeks] > polje[indeks + 1])
          return polje[indeks];
        else
          return polje[indeks + 1];
    }
    najveci = algoritam_najveci(polje, indeks + 1, n);
    if(polje[indeks] > najveci)
       return polje[indeks];
    else
       return najveci;
}

// Funkcija za pronalazak najmanjeg broja u zadanom polju
int algoritam_najmanji(int polje[], int indeks, int n)
{
    int najmanji;
    if(indeks >= n - 2)
    {
        if(polje[indeks] < polje[indeks + 1])
          return polje[indeks];
        else
          return polje[indeks + 1];
    }

    najmanji = algoritam_najmanji(polje, indeks + 1, n);
    if(polje[indeks] < najmanji)
       return polje[indeks];
    else
       return najmanji;
}

int main()
{
    int i;
    cout << "Unesite koliko brojeva zelite unijeti: ";
    cin >> i;
    int polje[i];
    for (int brojac=0; brojac<i; brojac++)
    {
        cout << "Unesite broj: ";
        cin >> polje[brojac];
    }
    int n = sizeof(polje) / sizeof(polje[0]);
    int najveci, najmanji;

    najveci = algoritam_najveci(polje, 0, n);
    najmanji = algoritam_najmanji(polje, 0, n);

    cout << "Najveci broj: " << najveci << endl;
    cout << "Najmanji broj: " << najmanji << endl;

    return 0;
}

