/*
    myString 클래스 구현: 연산자 다중 정의
        파일명: myString.h
            - 클래스: myString: [], =, +, +=, ==, !=, <<, >>
*/

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
    
    // 문자열 인덱싱(indexing): 문자 접근
    const char& operator[](size_t index) const;

    // 연산자 다중 정의: =, +, +=, ==, !=
    myString &operator=(const myString &rStr);		// 문자열 복사(=)
    myString operator+(const char *pStr) const;		// 문자열 결합(+)
    myString &operator+=(const char *pStr);		    // 문자열 결합(+=)
    bool operator==(const myString &rStr) const;    // 문자열 비교(==)
    bool operator!=(const myString &rStr) const;    // 문자열 비교(!=)

    // 일반 함수: 표준 입출력(<<, >>)
    friend ostream &operator<<(ostream &os, const myString &rStr);
    friend istream &operator>>(istream &is, myString& rStr);
private:
    int     size_ = 0;
    int     capacity_ = 0;
    char    *buffer_ = nullptr;
};

#endif
