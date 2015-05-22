//
//  main.cpp
//  Accelerated c++
//
//  Created by 方浩然 on 15/5/16.
//  Copyright (c) 2015年 方浩然. All rights reserved.
//
#include<iostream>
#include<string>

int main()
{
    std::cout<<std::endl;
    std::string name;
    std::cout<<"Please input your first name:";
    std::cin>>name;
    const std::string greeting = "hello, " + name + "!";
    const std::string spaces(greeting.size() , ' ');
    const std::string second = '*' + spaces + '*';
    const std::string first(second.size(),'*');
    
    std::cout<< first <<std::endl;
    std::cout<< second <<std::endl;
    std::cout<<"*" + greeting + "*"<<std::endl;
    std::cout<< second <<std::endl;
    std::cout<< first <<std::endl;
    return 0;
    
}