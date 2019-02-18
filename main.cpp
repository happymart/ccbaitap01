/* 
 * File:   main.cpp
 * Author: Administrator
 *
 * Created on February 18, 2019, 10:43 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    printf("Welcome \n");
    printf("Enter integer: ");
    cin >> n;
    if(n>0){
        printf("Positive ");
    }else if(n<0){
        printf("Negative ");
    }else{
        printf("Zero ");
    }
    if(n%2==0){
        printf("even number");
    }else{
        printf("odd number");
    }
    return 0;
}

