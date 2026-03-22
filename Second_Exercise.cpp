#include <string>
#include <iostream>
using namespace std;
void search_hex(string s) {
    setlocale(LC_ALL, "");
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            if (i + 6 <= s.size()) {
                string color = s.substr(i, 7);
                cout << color << "\n";
            }
            else if (i + 4 <= s.size()) {
                string color = s.substr(i, 4);
                cout << color << "\n";
            }
        }
    }
}
int main()
{
    setlocale(LC_ALL, "");
    string s = "Программист сидел глубокой ночью за монитором, \
погружённый в мир #0A0A0A тёмной темы редактора кода. Его взгляд скользил по строкам, где #FF6B6B ярко-красным выделялись ошибки, \
а #4ECDC4 нежно-бирюзовым светились комментарии. #fff";
    search_hex(s);
    return 0;
}

