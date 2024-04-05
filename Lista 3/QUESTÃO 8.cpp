int main ()
{
   
  char soma, sub, multi, div, caractere;
  float num1, num2, resul;
  
  cout <<"Digite o primeiro número: "<< endl;
  cin >> num1;
  
  cout <<"Digite o segundo número: "<< endl;
  cin >> num2;
  
  cout <<"Digite o caractere da operação:/n Soma(+)/n Subtração(-)/n Multiplicação(*)/n Divisão(/)/n "<< endl;
  cin >> caractere;
  

  switch(caractere) {
  
  case '+':
  	resul = num1 + num2;
  break;
  case '-':
  	resul = num1 - num2;
  	break;
  case '*':
  	resul = num1*num2;
  	break;
  case '/':
    if (num2 != 0 ) {	
    resul = num1/num2;
}   else {
    cout <<"Divisão inválida (denominador = 0)"<<endl;
}

    break;
   default:
   	cout <<"Operador errado"<< endl;
   }
   	
   	cout <<"Resultado: "<< num1 << " "<< caractere << " "<< num2 << " = "<< resul << endl;
   	
   	
    return 0;

}
