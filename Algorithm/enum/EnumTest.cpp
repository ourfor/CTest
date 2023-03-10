//
//  EnumTest.cpp
//  CTest
//
//  Created by 梁甜 on 2022/12/28.
//

#include "EnumTest.hpp"
#include <cstdio>

/// 1000ms = 1s 一般可以进行10^7次运算

/// @link https://www.nowcoder.com/practice/912b15e237ef44148e44018d7b8750b6?tpId=40&tqId=21346&rp=1&ru=/ta/kaoyan&qru=/ta/kaoyan&difficulty=&judgeStatus=&tags=/question-ranking

int mainEnumAllCase() {
    for(int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                if (a * 100 + b * 10 + c + b * 100 + c * 10 + c == 532) {
                    printf("%d %d %d \n", a, b, c);
                }
            }
        }
    }
    return 0;
}


/// @link https://www.nowcoder.com/practice/e0d06e79efa44785be5b2ec6e66ba898?tpId=40&rp=1&ru=%2Fta%2Fkaoyan&qru=%2Fta%2Fkaoyan&difficulty=&judgeStatus=&tags=&title=反序&sourceUrl=&gioEnter=menu

int mainReverseNumber() {
    for (int i = 1000; i < 1112; i++) {
        int result = 0;
        int num = i;
        while (num) {
            result *= 10;
            result += (num % 10);
            num /= 10;
        }
        if (result == i * 9) printf("%d\n", i);
    }
    return 0;
}


/// @link https://www.nowcoder.com/practice/1b79865e2f534db0adba84dca10d6bae?tpId=40&rp=1&ru=%2Fta%2Fkaoyan&qru=%2Fta%2Fkaoyan&difficulty=&judgeStatus=&tags=&title=平方&sourceUrl=&gioEnter=menu

int mainReverseEqual() {
    for (int i = 1; i < 256; i++) {
        int num = i * i;
        int ans = 0;
        while (num) {
            ans *= 10;
            ans += (num % 10);
            num /= 10;
        }
        if (i * i == ans) printf("%d\n", i);
    }
    return 0;
}


/// @link 输出高度为h, 上底边为h, 每行多一个*的梯形
int mainPrintRectangle() {
    int h;
    while (scanf("%d", &h) != EOF) {
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < h - i; j++) {
                printf(" ");
            }
            
            for (int j = 0; j < h + i; j++) {
                printf("*");
            }
            
            printf("/n");
        }
    }
    return 0;
}

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) ||
        (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int mainTodayOfThisYearDate() {
    int months[13] = {
        0,
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };
    int year, month, day;
    while (scanf("%d %d %d", &year, &month, &day) != EOF) {
        months[2] = isLeapYear(year) ? 29 : 28;
        int date = 0;
        for (int i = 1; i < month; i++) {
            date += months[i];
        }
        
        date += day;
        printf("%d\n", date);
    }
    return 0;
}
