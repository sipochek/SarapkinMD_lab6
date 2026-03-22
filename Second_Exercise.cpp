#include <string>
#include <iostream>
using namespace std;

bool is_hex_char(char c) {
    return (c >= '0' && c <= '9') ||(c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}

void search_hex(string s) {
    setlocale(LC_ALL, "");
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            if (i + 6 <= s.size()) {
                bool cont = true;
                for (int j = 1; j <= 6; j++) {
                    if (!is_hex_char(s[i + j])) {
                        cont = false;
                        break;

                    }
                }
                if (cont) {
                    cout << s.substr(i, 7) << endl;
                    continue;
            }
            }
            if (i + 4 <= s.size()) {
                bool cont = true;
                for (int j = 1; j <= 3; j++) {
                    if (!is_hex_char(s[i + j])) {
                        cont = false;
                        break;
                    }
                }
                if (cont) {
                    cout << s.substr(i, 4) << endl;
                }
            }
        }
    }
}
int main()
{
    setlocale(LC_ALL, "");
    string s = "Палитра цветов: короткие - красный #F00, синий #00F, зеленый #0F0;\
        длинные - темно-красный #8B0000, золотой #FFD700, лавандовый #E6E6FA;\
        еще короткие - белый #FFF, черный #000.";
    search_hex(s);
    return 0;
}

