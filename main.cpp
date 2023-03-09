#include <iostream>
using namespace std;
int main(){
    int yil;
    cout << "Yılı giriniz:";
    cin >> yil;
    if(yil%4==0){
        if(yil%100==0){
            if(yil%400==0){
                cout << yil << " artık yıldır.\n";
            }else{
                cout << yil << " artık yıl değildir.\n";
            }
        }else{
            cout << yil << " artık yıldır.\n";
        }
    }else{
        cout << yil << " artık yıl değildir.\n";
    }

    return 0;
}