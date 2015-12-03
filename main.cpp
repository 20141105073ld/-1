//
//  main.cpp
//  数组越界
//
//  Created by 20141105073 on 15/12/3.
//  Copyright © 2015年 20141105073. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[2];
    int b[3];
    a[0]=12;
    a[1]=15;
    a[2]=25;
    b[0]=2;
    b[1]=3;
    b[2]=4;
    printf("a[0]=%d a[1]=%d a[2]=%d b[0]=%d b[1]=%d b[2]=%d"\n,a[0],a[1],a[2],b[0],b[1],b[2]);
    printf("&a[0]=%x &a[1]=%x &a[2]=%x &b[0]=%x &b[1]=%x &b[2]=%x"\n,a[0],a[1],a[2],b[0],b[1],b[2]);
    return 0;
}
