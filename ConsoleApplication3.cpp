

#include <iostream>
#include "Nagłówek.h"
using namespace std;
int main()
{
    cout << pkolo(3) << endl;
    cout << pprostokat(5, 7) << endl;
    cout << ptrojkat(4, 10) << endl;
    cout << pszescian(5) << endl;
    cout << pwalec(3, 5) << endl;

  /*  for (int i = 1; i < 10; i++) {
        cout << "i= " << i << " = " << LiczbaPierwsza(i) << endl;
    }*/
    dec_to_bin(55);
}
