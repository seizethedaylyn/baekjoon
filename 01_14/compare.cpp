/*
시간 제한	메모리 제한	제출	정답	맞힌 사람	정답 비율
1 초	512 MB	422230	203862	167777	49.629%
문제
두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다.

출력
첫째 줄에 다음 세 가지 중 하나를 출력한다.

A가 B보다 큰 경우에는 '>'를 출력한다.
A가 B보다 작은 경우에는 '<'를 출력한다.
A와 B가 같은 경우에는 '=='를 출력한다.
*/

#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cin >> num1 >> num2;

    if(num1 > num2)
        cout << ">";
    else if(num1 < num2)
        cout << "<";
    else 
        cout << "==";
}