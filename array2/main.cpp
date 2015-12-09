//
//  main.cpp
//  array2
//
//  Created by 魏新宇 on 15/12/9.
//  Copyright © 2015年 魏新宇. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a[3]={1,2,3};
    int b[4];
    int i;
    for(i=1;i<100;i++)
    {
        b[i]=i;
    }
    printf("%d   %d   %d\n",a[0],a[1],a[2]);
    printf("%x      %x\n",a,b);
    return 0;
}

