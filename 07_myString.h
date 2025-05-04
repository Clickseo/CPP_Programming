#include <iostream>
using namespace std;

// #pragma once
#ifndef __MYSTRING_H__
#define __MYSTRING_H__

class myString {
public:
    // 생성자와 소멸자
    myString(void);
    myString(const char *pStr);
    myString(const myString &rStr);
    ~myString(void);

    // 연산자 다중 정의: =, +, +=, ==, !=
    myString &operator=(const myString &rStr);    // 문자열 복사(=)
    myString operator+(const char *pStr) const;    // 문자열 결합(+)
    myString &operator+=(const char *pStr);        // 문자열 결합(+=)
    bool operator==(const myString &rStr) const;    // 문자열 비교(==)
    bool operator!=(const myString &rStr) const;    // 문자열 비교(!=)

    // 일반 함수: 표준 입출력(<<)
    friend ostream  &operator<<(ostream &os, const myString &rStr);
private:
    int     size_ = 0;
    int     capacity_ = 0;
    char    *buffer_ = nullptr;
};

#endif
