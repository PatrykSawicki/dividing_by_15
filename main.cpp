#include <iostream>
#include <string>

using namespace std;

int main()
{
    string NN;
    int suma{};
    while((cin >> NN))
    {
        if(NN == "0") break;
        string::iterator it_last(NN.end()-1);
        for(auto n : NN) suma+=(n-48); //-48 aby uzyskac wartosc zamiast liczby znaku ascii
        if((suma % 3 == 0) && (*it_last == '5' || *it_last == '0' ) ) cout << "TAK" << endl;
        else cout << "NIE" << endl;
        suma = 0;
    }
    return 0;
}
