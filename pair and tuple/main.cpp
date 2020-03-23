#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    int i = 0;
    pair <string , string > Pair[100];
    tuple <int , double> Tuple[100];
    while(i != 99){
        cout << "Please Enter Your Name & Department" << endl;
        cin >> Pair[i].first >> Pair[i].second ;
        cout << "Please Enter Your School Number & Body Temperature" << endl;
        cin >> std::get<0>(Tuple[i]) >> std::get<1>(Tuple[i]);
        double temp = std::get<1>(Tuple[i]);
        if(temp > 37.5 && temp <= 37.9)
            cout << Pair[i].first << " Should wait to confirm Body Temperature again" << endl;
        else if(temp > 38)
            cout << Pair[i].first << " Should Go To Hospital " << Pair[i].second << " Department Should Suspension Class" << endl;
        else
            cout << "Good Luck" << endl;
        ++i;
    }
    return 0;
}
