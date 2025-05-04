/*
    myString 클래스 구현: 연산자 다중 정의
        파일명: myString(demon).cpp
            - main: myString: =, +, +=, ==, !=, <<, >>
*/

#include <iostream>
#include "myString.h"
using namespace std;

int main(void) {
    myString        str1;
    myString        str2("Hello World!!!");
    myString        str3(str2);

    // 표준 입출력
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << endl;

    // 문자열 복사(=): dest = src;
    myString    str4 = str3;
    cout << "str4: " << str4 << endl;

    // 문자열 결합(+): dest + src
    myString    str5 = str4 + " Hi~ Clickseo";
    cout << "str5: " << str5 << endl;

    // 문자열 결합(+=): dest += src
    str5 += " ^..^";
    cout << "str5: " << str5 << endl;
    cout << endl;

    // 문자열 비교(==, !=): left == right, left != right
    if (str1 == str2) {
        cout << "str1 == str2 >> true(일치)" << endl;
    }
    else {
        cout << "str1 == str2 >> false(불일치)" << endl;
    }

    if (str1 != str2) {
        cout << "str1 != str2 >> true(불일치)" << endl;
    }
    else {
        cout << "str1 != str2 >> false(일치)" << endl;
    }

    // cin >> str1;
    // cout << str1;

    return 0;
}
