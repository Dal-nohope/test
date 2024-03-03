#pragma once

class Crectangle
{
private:
    int width,height;
public:
    void setWidth(int _width);
    int getWidth() const;
    void setHeight(int _height);
    int getHeight() const;
    int area();
}
#include "rectangle.h"

void Crectangle::setHeight(int _height){
    height=_height;
}
void Crectangle::setWidth(int _width) {
    width=_width;
}
int Crectangle::getHeight() const{
    return height;
}
int Crectangle::getWidth() const{
    return width;
}
int Crectangle::area(){
    return width*height;
}

#include <iostream>
#include "rectangle.h"
using namespace std;

int main(){
    Crectangle rect;
    rect.setHeight(3);
    rect.setWidth(4);
    cout<<"Dien tich:"<<rect.area<<endl;
}