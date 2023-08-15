#include <iostream>

using namespace std;

int main() {

    int pelak = 0, i = 0 , a = 0;
    string day ;

    char p = 'P', f = 'F' , e = 'E';
    int police = p , fire = f , emergency = e ;

    cout << " Please Enter Vehicle registration number (in 7 digits)" << endl;
    cin >> pelak;

    if ( pelak < 1000000 || pelak > 10000000 ) {
        cout << " wrong !!  just 7 digits "<< endl;
        return 0;
    }

    a = ( pelak % 2 );

    int forthDigit = 0, fifthDigit;
    forthDigit = ((pelak / 1000)%10);
    fifthDigit = ((pelak / 100)%10);


    cout << "Day ? \n "
//            "    monday.\n"
//            "    tuesday.\n"
//            "    wednesday.\n"
//            "    thursday.\n"
//            "    friday.\n"
//            "    saturday.\n"
//            "    sunday. "
            << endl;
    cin >> day;


    if (day != "monday" && day != "tuesday" && day != "wednesday" && day != "thursday"
    && day != "friday" && day != "saturday" && day != "sunday"  ){
        cout << " incorrect day "<< endl;
        return 0;
    }




    if ( (((forthDigit*10)+fifthDigit) == police) || (((forthDigit*10)+fifthDigit) == fire) || (((forthDigit*10)+fifthDigit) == emergency) ){
        cout << "====  " << day << "  ====" << endl;
        cout << "   YES   " << endl;
        cout << "   SPECIAL Vehicle   " << endl;
        return 0;
    }

    if ( day == "monday" || day == "wednesday" || day == "saturday" ) {
        if (a == 0) {
            cout << "====  " << day << "  ====" << endl;
            cout << "   YES   " << endl;
        }
        else {
            cout << "====  " << day << "  ====" << endl;
            cout << "   NO   " << endl;
        }
    }

    if (day == "tuesday" || day == "thursday" || day == "sunday") {
            if (a != 0) {
                cout << "====  " << day << "  ====" << endl;
                cout << "   YES   " << endl;
            }
            else {
                cout << "====  " << day << "  ====" << endl;
                cout << "   NO   " << endl;
            }
    }

    if (day == "friday")  {
        cout <<  day << endl;
        cout << "   is a FREE day   " << endl;
        cout << "   YES   " << endl;
    }


    return 0;
}
