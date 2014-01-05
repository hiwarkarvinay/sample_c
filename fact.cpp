/*
 * factc.cpp
 * Copyright (C) 2014 vinay <vinay@vinay-cherry>
 *
 * Distributed under terms of the MIT license.
 */

#include <cstdio>
#include<iostream>
#include<cstdlib>
int main()
{

    int no;
    long long fact=1;
    scanf("%d",&no);
    for (int i=2;i<=no;++i)
        fact=fact*i;
    printf("Factorial is : %lld\n",fact);

    return 0;
}




