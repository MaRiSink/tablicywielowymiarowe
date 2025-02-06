#include <iostream>
#include  <cstdlib>
#include <time.h>


using namespace std;

int main()
{
    /* srand (time(NULL));

  rand();


  int tab[3][3] = {};
  int n = 0;

  for (int wierszy = 0; wierszy < 3; wierszy++)
  {
      for (int kolumny = 0; kolumny < 3; kolumny++)
      {
          tab[wierszy][kolumny] = rand() % 10;
      cout << tab[wierszy][kolumny] << ' ';
      }
      n++;
      if (n == 1 || n == 2)
      {
          cout << endl;
      }
  }

    cout << endl;
    int s = tab[0][0]* tab[1][1]*tab[2][2] + tab[0][1]*tab[1][2]*tab[2][0] + tab[0][2]*tab[1][0]*tab[2][1];
    int m = tab[0][1]* tab[1][0]*tab[2][2] + tab[0][0]*tab[1][2]*tab[2][1] + tab[0][2]*tab[1][1]*tab[2][0];

 cout << s - m;
*/






 srand (time(NULL));

  rand();


  int tab1 [3][2] = {};
  int tab2 [2][3] = {};
  int n = 0;

  for (int wierszy = 0; wierszy < 3; wierszy++)
  {
      for (int kolumny = 0; kolumny < 2; kolumny++)
      {
          tab1[wierszy][kolumny] = rand() % 10;
      cout << tab1[wierszy][kolumny] << ' ';
      }
      n++;
      if ( n == 1 || n ==2)
      {
          cout << endl;
      }
  }
  cout << endl << endl;

  for (int wierszy = 0; wierszy < 2; wierszy++)
  {
      for (int kolumny = 0; kolumny < 3; kolumny++)
      {
          tab2 [wierszy][kolumny] = rand() % 10;
      cout << tab2 [wierszy][kolumny] << ' ';
      }
      n++;
      if ( n == 4 )
      {
          cout << endl;
      }
  }
  cout << endl << endl;

  int lox = tab1[0][0]*tab2[0][0]+ tab1[0][1]*tab2[1][0] + tab1[0][2]*tab2[2][0];
  cout << lox << ' ';
  int lox1 = tab1[0][0]*tab2[0][1] + tab1[0][1]*tab2[1][1] + tab1[0][2]*tab2[2][1];
  cout << lox1 << endl;

  int nielox = tab1[1][0]*tab2[0][0] + tab1[1][1]*tab2[1][0] + tab1[1][2]*tab2[2][0];
  cout << nielox << ' ';
  int nielox1 = tab1[1][0]*tab2[0][1] + tab1[1][1]*tab2[1][1] + tab1[1][2]*tab2[2][1];
  cout << nielox1;


   return 0;
}
