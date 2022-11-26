 
 //Creado por:Bennett Valencia Miguel 
 //permite la entrada y salida de datos en la libreria.
 #include<iostream> 
//llamada espacio de nombre para utilizar cin, cout y no estar utlizando siempre el std.
 using namespace std;
//el cuerpo del programa que indica donde comienza y finaliza. 
 int main() 
 { 
         //utilizamos float para declarar variables x, s  en numeros decimales.
         float x=0,s=0;
	//para declarar variables en numeros enteros, que el i es el contador. 
         int i=0,l; 
	 //muestra en pantalla al usuario un mensaje para que ingrese un valor de ly utilizamos entre comillas q permite que vea el usuario
         cout<<"ingrese el valor de l:  "; 
	// guardamos con el cin el valor ingresado por el usuario.
         cin>>l; 
	 //utilizamos para hacer repeticiones, hasta que cumpla la condicion.
         do{ 
         //muestra el mensaje al usuario que ingrese valor de x
         cout<<"ingrese el valor de x:  "; 
	 //guardamos el variable x
         cin>>x;
	//utilizamos el contador general para poder finalizar el programa. 
         i=i+1; 
	 //utilizamos el acumulador general del variable s para finalizar.
         s=s+x; 
          //utilizamos para ejecutar elementos hasta que la condicion finalize
         }while(i<l);
	//muestra el mensaje  en pantalla al usuario del resultado 
         cout<<"la suma de los numeros fue:  "<<s<<endl; 
	 //finaliza la ejecucion y devuelve el control a la funcion de llamada. 
         return 0;  

 }
