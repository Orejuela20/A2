Creado por: Bennett Valencia Miguel
//se dice que son componentes de c++ utilizados para que se permita la entrada y salida
#include<iostream>
// se permite dar acceso al espacio de nombre donde se encuentra encerrada las librerias estandar
using namespace std;
//el cuerpo del programa que indica donde comienza y finaliza.
int main()

{      
	//utilizamos float para declarar variables x, s  en numeros decimales. 
      float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn; 
      ////para declarar variables en numeros enteros, que el i es el contador
      int i=0,l; 
     //se prodece a detallar que al momento que se ejecute se ingrese el valor
      cout<<"ingrese l:  ";cin>>l;
       // el do-while permite una instruccion o una instruccion compuesta   hasta que una expresion especificada sea false
    	do{ 
         cout<<"ingrese x:  ";cin>>x;
	i=i+1;
        //se utiliza el acumulador por que sirve para incrementar su valor de forma variable dentro de un ciclo	
	s=s+x;
	//utilizamos para ejecutar elementos hasta que la condicion finalize
	
	}while(i<l);
	 //Utilizamos en este momento las variables declaras como el iva y su descuento para poder calcular el total del saldo que se va a cancelar
	 vb=s;    
	viva=vb*piva/100;
	vdesc=vb*pdesc/100;
	vn=vb+viva-vdesc;
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;
	//Se da por finalizado el programa y se procede a ejecutar
	return 0;

	}

