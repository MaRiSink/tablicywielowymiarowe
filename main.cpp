#include <iostream>
#include  <cstdlib>
#include <time.h>

using namespace std;

int main()
{

// другая версия. рандом должен быть в двойной петли

   /* int tab1[2][2] = {};
    int tab2 [2][2] = {};

    srand (time(NULL));

    int i = 1 + rand() % 10;

    int b = 0;

    for (int a = 0; a < 4; a++)
    {
         int i = rand() % 10;
         cout << i << endl;

         tab1 [0][b] = i;

         int j = rand() % 9;
         cout << j << endl;
         tab2 [0][b] = j;
          b++;
          cout << endl;
    }
 cout << tab1[0][0] + tab2 [0][0] << " " << tab1[0][1] + tab2[0][1] << endl;
  cout << tab1[1][0] + tab2 [1][0] << " " << tab1[1][2] + tab2[1][2] << endl;*/

//более простой вариант
  /* int tab1[2][2] = {};
    int tab2 [2][2] = {};

    srand (time(NULL));

    rand();

    int b = 0;

    for (int a = 0; a < 2; a++)
    {

        for (int c = 0; c < 2; c++)
        {
         int i = rand() % 10;
         cout << i << endl;
         tab1 [a][c] = i;


         int j = rand() % 9;
         cout << j << endl;
         tab2 [a][c] = j;
          cout << endl;

        }

    }
 cout << tab1[0][0] + tab2 [0][0] << " " << tab1[0][1] + tab2[0][1] << endl;
  cout << tab1[1][0] + tab2 [1][0] << " " << tab1[1][1] + tab2[1][1] << endl;

*/
    /* int tab1[2][2] = {};
    int tab2 [2][2] = {};

    srand (time(NULL));

    int i = 1 + rand() % 10;

    int b = 0;

    for (int a = 0; a < 4; a++)
    {
         int i = rand() % 10;
         cout << i << endl;

         tab1 [0][b] = i;

         int j = rand() % 9;
         cout << j << endl;
         tab2 [0][b] = j;
          b++;
          cout << endl;
    }
 cout << tab1[0][0] - tab2 [0][0] << "  " << tab1[0][1] - tab2[0][1] << endl;
  cout << tab1[1][0] - tab2 [1][0] << "  " << tab1[1][2] - tab2[1][2] << endl;
*/



  /* srand (time(NULL));

    rand();


  int tab1[3][2] = {};
  int b = 0;

   for (int a = 0; a < 6; a++)
    {
         int i = rand() % 10;
         cout << i;

         tab1[0][b] = i;

        if ( b % 2 != 0 )
         {
            cout << " " << endl;
         }
         else
         {
           cout << " ";
         }
         b++;

    }

    cout << endl;



    for (int s1 = 0; s1 < 6; s1++)
    {
        if ( s1 % 2 == 0)
        {
          cout << tab1 [0][s1] << ' ';
        }

    }

    cout << endl;

     for (int s2 = 0; s2 < 6; s2++)
    {

         if ( s2 % 2 != 0)
        {
        cout << tab1 [0][s2] << ' ';
        if ( s2 == 2 )
        {
            cout << endl;
        }
        }
    }
*/


  /*srand (time(NULL));

  rand();


  int tab[2][2] = {};
  int n = 0;

  for (int wierszy = 0; wierszy < 2; wierszy++)
  {
      for (int kolumny = 0; kolumny < 2; kolumny++)
      {
          tab[wierszy][kolumny] = rand() % 10;
      cout << tab[wierszy][kolumny] << ' ';
      }
      n++;
      if (n == 1)
      {
          cout << endl;
      }
  }
  cout << endl;

 cout << tab[0][0]* tab[0][3] - tab[0][1]*tab[0][2];
*/



  srand (time(NULL));

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

 cout << tab[0][0]* tab[0][3] - tab[0][1]*tab[0][2];

   return 0;
}
