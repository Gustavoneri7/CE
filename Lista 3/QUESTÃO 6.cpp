#include <iostream>

using namespace std;

int main ()
{
� �
� �int l1,l2,l3,h;
� �
� �cout <<"Digite o lado 1: "<< endl;
� �cin >> l1;
� �
� �cout <<"Digite o lado 2: "<< endl;
� �cin >> l2;
� �
� �cout <<"Digite o lado 3:"<< endl;
� �cin >>l3;
� �
� �if (l1 == l2 && l2 == l3 && l1 == l3) {
� � � cout <<"Tri�ngulo equil�tero"<< endl;
� }
� � � else if (l1 != l2 && l3 != l2 && l1 != l3) {
� � � cout <<"Tri�ngulo escaleno"<< endl;
� }
� � � else {
� � � 	cout <<"Tri�ngulo is�scele"<< endl;
	 �}
� � � 
� � � 
� � return 0;
	
}
