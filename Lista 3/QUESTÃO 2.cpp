#include <iostream>

using namespace std;

int main()
{
int a,g,ag;

cout <<"Digite o valor do �lcool: "<< endl;
cin >> a;

cout <<"Digite o valor da gasolina: " <<endl;
cin >> g;

ag = a/g;

if (ag < 0.7){
cout <<"Abaste�a com �lcool";
}
else {
cout <<"Abaste�a com gasolina";
}




return 0;
}
