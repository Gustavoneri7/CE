int main ()
{
� �
� char soma, sub, multi, div, caractere;
� float num1, num2, resul;
� 
� cout <<"Digite o primeiro n�mero: "<< endl;
� cin >> num1;
� 
� cout <<"Digite o segundo n�mero: "<< endl;
� cin >> num2;
� 
� cout <<"Digite o caractere da opera��o:/n Soma(+)/n Subtra��o(-)/n Multiplica��o(*)/n Divis�o(/)/n "<< endl;
� cin >> caractere;
� 

� switch(caractere) {
� 
� case '+':
� 	resul = num1 + num2;
� break;
� case '-':
� 	resul = num1 - num2;
� 	break;
� case '*':
� 	resul = num1*num2;
� 	break;
� case '/':
� � if (num2 != 0 ) {	
� � resul = num1/num2;
} � else {
� � cout <<"Divis�o inv�lida (denominador = 0)"<<endl;
}

� � break;
� �default:
� �	cout <<"Operador errado"<< endl;
� �}
� �	
� �	cout <<"Resultado: "<< num1 << " "<< caractere << " "<< num2 << " = "<< resul << endl;
� �	
� �	
� � return 0;

}
