#include <stdio.h>
int n;
float uno,dos,operacion;
main (){
	do{
	printf ("Cual operacion desea realizar?\n 1.Suma  2.Resta  3.Multiplicacion 4.Division\n");
	scanf ("%i",&n);
	if (n>4){
		printf ("La opcion que usted ha escogido es invalida, intentelo de nuevo\n");
	}
	}while (n>4);
	printf ("Ingrese las variables\n");
	printf ("Variable 1:\n");
	scanf ("%f",&uno);
	printf ("Variable 2:\n");
	scanf ("%f",&dos);

		switch (n){
		case 1:
			operacion=uno+dos;
			break;
		case 2:
			operacion=uno-dos;
				break;
		case 3:
			operacion=uno*dos;
				break;
		case 4:
			operacion=uno/dos;
				break;
	
	}
	printf ("El resultado de su operacion es: %f\n",operacion);
	return 0;
}
