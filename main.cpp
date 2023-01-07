#include <iostream>
using namespace std;
int main() {
  while (true) {
    cout << "Введіть номер місяця або 0 для завершення роботи програми;\n";
    int n;
    cin >> n;
    if (n < 0 or n > 12) {
      cout << "Такого місяця не існує, спробуйте ціле число від 1 до 12.\n";
    } else if (n == 1) {
      cout << "Січень (january)\n";
    } else if (n == 2) {
      cout << "Лютий (february)\n";
    } else if (n == 3) {
      cout << "Березень (march)\n";
    } else if (n == 4) {
      cout << "Квітень (april)\n";
    } else if (n == 5) {
      cout << "Травень (may)\n";
    } else if (n == 6) {
      cout << "Червень (june)\n";
    } else if (n == 7) {
      cout << "Липень (july)\n";
    } else if (n == 8) {
      cout << "Серпень (august)\n";
    } else if (n == 9) {
      cout << "Вересень (september)\n";
    } else if (n == 10) {
      cout << "Жовтень (october)\n";
    } else if (n == 11) {
      cout << "Листопад (november)\n";
    } else if (n == 12) {
      cout << "Грудень (december)\n";
    } else if (n == 0) {
      cout << "Бувайте здорові! Не забудьте розім'яти очі";
      break;
    }
  }
}