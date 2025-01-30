#include <iostream>
#include  <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    /*
    int tab1[2][2] = {};
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
  cout << tab1[1][0] + tab2 [1][0] << " " << tab1[1][2] + tab2[1][2] << endl;
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


  srand (time(NULL));

    int i = 1 + rand() % 10;


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

    int m = 0;

    for (int l = 0; l < 6; l++)
    {
        if ( m % 2 = 0)
        {
          cout << tab1 [0][m];
        }
        else

        cout << tab1 [0][m];
        if ( m == 2 )
        {
            cout << " " << endl;
        }
        else
        {
            cout << " ";
        }

        m++;


    }



   return 0;
}
