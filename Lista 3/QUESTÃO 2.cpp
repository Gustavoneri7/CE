#include <iostream>

using namespace std;

int main()
{
float a,g,ag;

cout <<"Digite o valor do álcool: "<< endl;
cin >> a;

cout <<"Digite o valor da gasolina: " <<endl;
cin >> g;

ag = a/g;

if (ag < 0.7){
cout <<"Abasteça com álcool";
}
else {
cout <<"Abasteça com gasolina";
}




return 0;
}
