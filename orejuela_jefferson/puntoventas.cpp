//programa punto de ventas 
//nombre:Orejuela Jefferson
//asignatura:Tics B
//docente:Ing.Stalin Francis
 
#include<iostream>//pone a su disposicion los objetos cin, cout, clog y cerr en el ambito estandar (std)
using namespace std;//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
int main()//el cuerpo del programa que indica donde comienza y finaliza.

{      

	float x,s=0,vb,piva=12,viva,pdesc=10,vdesc,vn;
	int i=0,l;
	cout<<"ingrese l:  ";cin>>l;
	do{
	
	cout<<"ingrese x:  ";cin>>x;
	i=i+1;
	s=s+x;
	
	}while(i<l);
	vb=s;
	viva=vb*piva/100;
	vdesc=vb*pdesc/100;
	vn=vb+viva-vdesc;
	cout<<"el valor a pagar es de:  "<<vn<<endl<<endl;
	return 0;

}
