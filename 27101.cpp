#include <iostream>
using namespace std;

int main() {
    float money;
    cout << "請輸入金額:";
    cin >> money;

    int quotient;

    if (money >= 2000) {
        quotient = money / 2000;
        cout << quotient << "張2000元鈔票\n";
        money = money - quotient * 2000;
    }

    if (money >= 1000) {
        quotient = money / 1000;
        cout << quotient << "張1000元鈔票\n";
        money = money - quotient * 1000;
    }

    if (money >= 500) {
        quotient = money / 500;
        cout << quotient << "張500元鈔票\n";
        money = money - quotient * 500;
    }

    if (money >= 200) {
        quotient = money / 200;
        cout << quotient << "張200元鈔票\n";
        money = money - quotient * 200;
    }

    if (money >= 100) {
        quotient = money / 100;
        cout << quotient << "張100元鈔票\n";
        money = money - quotient * 100;
    }

    if (money >= 50) {
        quotient = money / 50;
        cout << quotient << "個50元硬幣\n";
        money = money - quotient * 50;
    }

    if (money >= 10) {
        quotient = money / 10;
        cout << quotient << "個10元硬幣\n";
        money = money - quotient * 10;
    }

    if (money >= 5) {
        quotient = money / 5;
        cout << quotient << "個5元硬幣\n";
        money = money - quotient * 5;
    }

    if (money >= 1) {
        quotient = money;            
        cout << quotient << "個1元硬幣\n";
        money = money - quotient * 1;
    }

    if (money >= 0.5) {
        quotient = money * 10 / 5;
        cout << quotient << "個5毛硬幣\n";
        money = money - quotient * 0.5;
    }

    if (money >= 0.1) {
        quotient = money * 10;
        cout << quotient << "個1毛硬幣\n";
    }      
}
// 650275杜心妍
