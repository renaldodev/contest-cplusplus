#include <iostream>
#include <cmath>
using namespace std;

int age;
string name;
float weight;
double height;
bool gender;

int main(int argc, char *argv[])
{
    cin >> name >> age >> gender >> weight >> height;
    cout << name << age << gender << weight << height << endl;
}