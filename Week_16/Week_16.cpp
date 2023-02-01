

#include <iostream>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std;
#include <iostream>


char* str = new char[256] {"3 for wind and 4 for earthб 5 for fire. six for rain "};
//void replacement( ) {
//	char* word = new char[256];
//	char* p = nullptr;
//	char* choice = new char[125];
//    int t = strlen(str) + 1;
//    char a;
//    cin >> a; 
//	while (p = strchr(str, a))
//	{
//        strncpy_s(word, 256, str, strlen(str) - strlen(p));
//        if (choice)
//            strcat_s(choice, 255, word);
//        else {
//            choice = new char[t];
//            strcpy_s(choice, t, word);
//        }
//        strcat_s(choice, t, "\t");
//        str += strlen(word) + 1;
//    }
//    if (choice) strcat_s(choice, t, str);
//    
//   puts(choice);
//    delete[]word;
//    delete[]choice;
//	}
//void strchar(char* str) {
//    char* fil = new char[125];
//   
//    if (strchr(str, '.')) {
//
//        int find = 0;
//        str[find] = toupper(str[find]);
//        while (find < 256) {
//            if (find + 2 > strlen(str) - 1)
//            find = ('.', find); // ищем от 0 до ближайщей точки//
//            str[find] = toupper(str[find + 2]);
//        }
//
//
//    }
//
//    else
//    cout << "Нет предложений  ";
//}
void f3() {
   
    int alpha = 0, digit = 0, other = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) alpha++;
        else if (isdigit(str[i])) digit++;
        else other++;
    }
    cout << alpha << endl << digit << endl << other;
}

int main()
{
    
  

};

   

