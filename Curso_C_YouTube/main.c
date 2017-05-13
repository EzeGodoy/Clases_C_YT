CLASE 1

#include<stdio.h>  //Libreria. El .h significa que es un header, un archivo de cabezera.
                    //El stdio.h significa: standar input output header (cabezera estandar de entrada y salida de datos).

int main() //Es la funcion principal. Int viene de Integer=Entero. Main=principal
{
    printf("Hola Mundo\n"); //El slash n, es un salto de linea cada \n que se escriba da un enter. Slash \ es alt+92

    return 0;
}



CLASE 2

//Directivas del Prepocesador y Variables

#include<stdio.h> //Es la cabecera del programa. Esto es una Libreria

#define PI 3.1416 //Esto es una macro

int y = 5;

int main()
{
    int x = 10;
    float suma = 0;

    suma = PI + x;

    printf("La suma es :%.3f\n",suma); //El %f o %n van dentro de las comillas, luego la coma y al final la variable.
                                       //El .3 nos da los decimales. Float es para decimales
    return 0;
}



CLASE 3

#include<stdio.h>

int main()
{
    char a = 'e';             //tamaño= 1 byte  Rango: 0 a 255                         %c
    short b = -15;            //tamaño= 2 bytes Rango: -128 a 127                      %i
    int c = 1024;             //tamaño= 2 bytes Rango: -32768 a 32767                  %i
    unsigned int d = 128;     //tamaño= 2 bytes Rango: 0 a 65535                       %d
    long e = 123456;          //tamaño= 4 bytes Rango: -2147483648 a 2147483637        %li
    float f = 15.678;         //tamaño: 4 bytes Rango: 3.4*(10) a 3.4*(10)             %f
    double m = 123123.123123;  //tamaño: 8 bytes Rango: 1.7*(10) a 1.7*(10)            %lf

    printf("El elemento es: %c", a);
    printf("\nEl elemento es: %i", b);
    printf("\nEl elemento es: %i", c);
    printf("\nEl elemento es: %d", d);
    printf("\nEl elemento es: %li", e);
    printf("\nEl elemento es: %.2f", f);
    printf("\nEl elemento es: %lf\n\n", m);

    return 0;
}



CLASE 4

#include<stdio.h>

int main()
{

    int a =10;
    float b = 15.5;
    char c = 'e';

    printf(" %i\n %.1f\n %c\n",a,b,c);  //Para mostrar varios datos se debe primero escribir los %i %f %c sin comas y luego fuera de las comillas escribir la coma y
                                       //las variables todas con coma, salvo la ultima. Muy importante observar los espacios que se dejan. Si no se quieren espacios
                                       //se escribe todo junto %i\n%f\n%c\n.

    //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    int a;
    float b;
    char e;

    printf("Digite el valor de la variable a: ");
    scanf("%i",&a); //scanf lo que hace es tomar el valor escrito por el usuario en el printf y con lo que esta adentro del scanf lo guarda. Aca le decimos %i
                    //que es un entero y que lo almacene en la variable a con el puntero & ampersand (proviene de: and per se and, es decir, «y por sí mismo, y»)

    printf("Digite el valor de la variable b: ");
    scanf("%f",&b);

    printf("Digite el valor de la variable c: ");  //No me deja tipear en la variable C.
    scanf("%c",&e);

    printf("\n El valor es: %i",a);  //Aca imprimo lo que guardo
    printf("\n El valor es: %f",b);
    printf("\n El valor es: %c",e);

    //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    char x[50];

    printf("Digite su nombre: ");
    //scanf("%s",x) Sirviria solo si quiero guardar mi nombre o mi apellido, pero si quiero guardar caracteres separados no sirve
    gets(x);                        //No es necesario escribir nada solo la variable y ya la guarda
                                    //%s porque es un string, el ampersam ya no es necesario con varios caracteres
                                   //El scanf solo guarda un caracter hasta que encuentra un espacio, luego salta y no  guarda nada. Para eso se usa el gets

    printf("\nSu nombre es: %s\n\n",x);

    return 0;
}



CLASE 5

#include<stdio.h>


int main()
{

    int a;

    a=10;

    a+=10; // a = a + 10

    a-=5; // a = a - 5

    a*=2; // a = a * 2

    a/=2; // a = a / 2

    //Realizo todas las operaciones en orden. Desde arriba hacia abajo

    printf("El valor de a es: %i",a);

    //AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

    //Si hay mas variables por mas que esten declaradas juntas se deben porner su porciento y su valor. Ejemplo:

    int a,b,c;

    a=b=c=10;

    printf("El valor de a, b y c es: %i %i %i",a,b,c);

    return 0;
}



CLASE 6

#include<stdio.h>

int main()
{

    int n1,n2,suma=0,resta=0,mult=0,divi=0;

    printf("Digite el primer numero: ");
    scanf("%i",&n1);

    printf("Digite el segundo numero: ");
    scanf("%i",&n2);

    //printf("Digite dos numeros: ");
    //scanf("%i %i",&n1,&n2);               //Esta es otra forma de pedir los dos numeros. no importa aca si el usuario apreta espacio o enter en cuanto separe al primer
                                              //digito este lo guarda com n1 y al otro como n2

    suma=n1+n2;
    resta=n1-n2;
    mult=n1*n2;
    divi=n1/n2;

    printf("\nLa suma es: %i",suma);
    printf("\nLa resta es: %i",resta);
    printf("\nLa multiplicacion es: %i",mult);
    printf("\nLa division es: %i",divi);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Convertir Grados Celsius a Grados Fahrenheit (Propuesto)

int main()
{
    float celsius,fahrenheit;

    printf("Ingrese los grados Celsius a pasar: ");
    scanf("%f",&celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("\nLos grados Fahrenheit son: %.2f",fahrenheit);

    return 0;
}



CLASE 7

#include<stdio.h>
#include<math.h>  //Libreria de matematicas
#define PI 3.14

int main()
{
    float hipotenusa,cateto1,cateto2;

    printf("Digite los dos catetos: ");
    scanf("%f %f",&cateto1,&cateto2);

    //Hipotenusa: La raiz cuadrada de los catetos elevados al cuadrado sumandose nos va a dar el resultado de la hipotenusa

    hipotenusa= sqrt(pow(cateto1,2)+pow(cateto2,2));
    //sqrt Es para sacar la raiz cuadrada de algun numero ""Tiene que estar para que aparezca sqrt la libreria #include<math.h>""
    //pow Eleva cualquier variable a una potencia y la coma numero(,2) el valor de la potencia a elevar ""Aca se eleva al cuadrado por el ,2)

    printf("La hipotenusa del triangulo es: %.2f",hipotenusa);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Hacer un programa que calcule longitudes de Circuferencias

int main()
{

    float longitud,radio;

    printf("Ingrese el radio del circulo: ");
    scanf("%f",&radio);

    longitud=  PI * radio;

    printf("La longitud es: %.3f",longitud);

    return 0;
}



CLASE 8

#include<stdio.h>

//Programa que calcule areas de trapecios

int main()
{
    int baseMayor,baseMenor,area,altura;

    printf("Digite la base mayor: ");
    scanf("%i",&baseMayor);

    printf("Digite la base menor: ");
    scanf("%i",&baseMenor);

    printf("Digite la altura: ");
    scanf("%i",&altura);

    area=((baseMayor+baseMenor)*altura)/2;

    printf("\nEl area del trapecio es: %i\n",area);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Calcule la media aritmeica de 3 numeros cualquiera

int main()
{

    float n1,n2,n3,media_aritmetica;

    printf("Digite el primer numero: ");
    scanf("%f",&n1);

    printf("\nDigite el segundo numero: ");
    scanf("%f",&n2);

    printf("\nDigite el tercer numero: ");
    scanf("%f",&n3);

    media_aritmetica = (n1+n2+n3)/3;

    printf("\n\nLa media aritmetica es: %.3f\n\n",media_aritmetica);

    return 0;
}



CLASE 9

//Descuento del 15% sobre el total de la compra y desea saber cuanto pagara

#include<stdio.h>

int main()
{
    float totalCompra,descuento,precioFinal;

    printf("Digite el total de compra: ");
    scanf("%f",&totalCompra);

    descuento = totalCompra*0.15;

    precioFinal=totalCompra-descuento;

    printf("El total es: %.3f",precioFinal);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Dadas las horas de una persona y el valor por hora. Calcular su salario e imprimirlo

int main()
{
    int horasTrabajadas,valorHora,salario;

    printf("Ingrese las horas trabajadas: ");
    scanf("%i",&horasTrabajadas);

    printf("Ingrese el valor de las horas: ");
    scanf("%i",&valorHora);

    salario=valorHora*horasTrabajadas;

    printf("El salario es: %i",salario);

    return 0;
}



CLASE 10

#include<stdio.h>

//Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario anterior

int main()
{
    float salarioAnterior,salarioNuevo,aumento;

    printf("Digite su salario: ");
    scanf("%f",&salarioAnterior);

    aumento=salarioAnterior*0.25;

    salarioNuevo=salarioAnterior+aumento;

    printf("\n\nSu salario es: %.2f\n\n",salarioNuevo);

    return 0;
}



CLASE 11

#include <stdio.h>

/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos.
Dicha calificación se compone de los siguientes porcentajes:

• 55% del promedio de sus tres calificaciones parciales.
• 30% de la calificación del examen final.
• 15% de la calificación de un trabajo final.*/

int main()
{
    float calPar1,calPar2,calPar3,calFinal=0,calTrabajo,calExamen;
    float totalParciales=0,promExamen=0,promTrabajo=0,promParciales=0;

    printf("Digite la calificaciones de sus tres primeros parciales: ");
    scanf("%f %f %f",&calPar1,&calPar2,&calPar3);

    printf("Digite la calificacion de su examen final: ");
    scanf("%f",&calExamen);

    printf("Digite la calificacion de su Trabajo Practico: ");
    scanf("%f",&calTrabajo);

    promParciales=(calPar1+calPar2+calPar3)/3;

    totalParciales=promParciales*0.55;

    promExamen=calExamen*0.30;

    promTrabajo=calTrabajo*0.15;

    calFinal=promExamen+promTrabajo+totalParciales;

    printf("La calificacion del alumno es: %.f",calFinal);

    return 0;
}



CLASE 12

#include <stdio.h>

/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos.
Dicha calificación se compone de los siguientes porcentajes:

• 55% del promedio de sus tres calificaciones parciales.
• 30% de la calificación del examen final.
• 15% de la calificación de un trabajo final.*/

int main()
{
    float calPar1,calPar2,calPar3,calFinal=0,calTrabajo,calExamen;
    float totalParciales=0,promExamen=0,promTrabajo=0,promParciales=0;

    printf("Digite la calificaciones de sus tres primeros parciales: ");
    scanf("%f %f %f",&calPar1,&calPar2,&calPar3);

    printf("Digite la calificacion de su examen final: ");
    scanf("%f",&calExamen);

    printf("Digite la calificacion de su Trabajo Practico: ");
    scanf("%f",&calTrabajo);

    promParciales=(calPar1+calPar2+calPar3)/3;

    totalParciales=promParciales*0.55;

    promExamen=calExamen*0.30;

    promTrabajo=calTrabajo*0.15;

    calFinal=promExamen+promTrabajo+totalParciales;

    printf("La calificacion del alumno es: %.f",calFinal);

    return 0;
}



CLASE 13

#include <stdio.h>

//Prueba de divisibilidad

int main()
{
    int n1,n2;

    printf("Dijite dos numeros: ");
    scanf("%i%i",&n1,&n2);

    if(n1%n2==0)  //El modulo % aca lo que nos dice es si el residuo da cero significara que el primer numero es dvisible con el segundo
    {             //If es un condicional si la condicion se cumple entonces entra: Si n1=20 y n2=2 el residuo da 0 por lo que se cumple la condicion, por lo tanto entra al if
        printf("El numero %i es divisible entre %i",n1,n2);
    }
    return 0;
}



CLASE 14

#include <stdio.h>

int main()
{
    float examen;

    printf("Digite la nota del examen: ");
    scanf("%f",&examen);

    if(examen > 10.5) //En los condicionales no es obligatorio colocar las llaves {}
    {

        //printf("El alumno esta aprobado");
        puts("El alumno esta aprobado");//puts() solo imprime dentro de un condicional, es recomendable seguir usando print

    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Comprobar si un numero ingresado por el usuario es positivo o negativo

int main()
{
    int numero;

    printf("Ingrese un numero para ver si el numero es positivo o negativo: ");
    scanf("%i",&numero);

    if(numero > 0)
    {
        puts("El numnero es positivo");
    }

    if(numero < 0)
    {
        puts("El numero es negativo");
    }

    if(numero == 0)
    {
        puts("El numero 0 no es negativo ni positivo");
    }

    return 0;
}



CLASE 15

#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

//Visualizar la tariga de luz sugun el gasto de corriente electrica para un gasto menor de 1000kw/h
//La tariga es 1.2, entre 1000 y 1.850kw/h es 10 y mayor de 1.850kw/h 0.9

int main()
{
    float gasto, tasa;

    printf("Digite el total del gasto de energia: ");
    scanf("%f",&gasto);

    if(gasto < 1000)
    {
        tasa=TARIFA1;
    }

    if(gasto > 1000 && gasto<1850)
    {
        tasa=TARIFA2;
    }

    if(gasto > 1850)
    {
        tasa=TARIFA3;
    }

    printf("La tarifa a pagar es: %.2f",tasa);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Determinar si un numero es par o impar

#include <stdio.h>

int main()
{
    int numero;

    printf("Digite un numero: ");
    scanf("%i",&numero);

    if(numero%2==0)  //Modulo de 2 ==0 lo que buscaa que cualquier numero dividido por dos si su residuo da 0 es par
    {
        printf("El numero es par");
    }

    else    //Aca se podria poner %2 == 1 lo que buscaria que cualquier numero dividido por dos, si su residuo da 1 es impar
    {
        printf("El numero es impar");
    }
    return 0;
}



CLASE 16

#include <stdio.h>
#include<math.h>

int main()
{
    float nota;

    printf("Digite a nota del examne: ");
    scanf("%f",&nota);

    if(nota>10.5)
    {
        puts("El alumno esta aprobado");
    }

    else
    {
        puts("El alumno esta desaprobado");
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Calcular el mayor de dos numero leidos del teclado y visualizar en pantalla. Avisar si son iguales

int main()
{
    int n1,n2;

    printf("Digite 2 numero: ");
    scanf("%i%i",&n1,&n2);

    if(n1 > n2)
    {
        printf("El mayor es: %i",n1);
    }

    else if (n2 > n1)
    {
        printf("El mayor es: %i",n2);
    }

    else
    {
        printf("Ambos numeros son iguales");
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Ingrese un número y calcule e imprima su raíz cuadrada. Si el numero es negativo imprima el número y un mensaje que diga “tiene raíz imaginaria”

int main()
{
    int numero;
	float raiz_cuadrada;

	printf("Digite un numero: ");
	scanf("%i",&numero);

	if(numero>0)
    {
		raiz_cuadrada = sqrt(numero);//sqrt(variable) es para sacar raiz cuadrada y pow(variable,potencia_A_Elevar) es para elevar a una potencia
		printf("Su raiz cuadrada es: %.2f",raiz_cuadrada); //Tanto pow como sqrt necesitan de la libreria #include<math.h>
	}

	else
    {
		printf("\nEl numero tiene raiz imaginaria");
	}
    return 0;
}



CLASE 17

#include<stdio.h>
#include<string.h>

//Ingresar por teclado el nombre y signo del persona e imprima, el nombre solo si es la persona de signo aries
//caso contraio imprima no es de aries

int main()
{
    char nombre[30];
    char signo[30];

    printf("Digite su nombre: ");
    gets(nombre);

    printf("Digite su signo: ");
    gets(signo);

    if(strcmp(signo,"aries")==0)//Para poder comparar cadenas se utiliza STRCMP con la libreria #include<string.h> Esto compara dos char. Aca se esta comparando el char signo y un
                                //char fijo que es aries, pero se podria comparar otra variable. Se equipara a 0 si sopn iguales y si fuese 1 es que es distinto.
    {
        printf("\nEs signo aries, su nombre es: %s,",nombre);
    }

    else
    {
        printf("No es aries");
    }

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Ingresar por teclado el nombre, la edad y el sexo de cualquier persona e imprima, solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona

int main()
{
	char nombre[30],sexo[20];
	int edad;

	printf("Digite su nombre: ");
	gets(nombre);
	printf("\nDigite su edad: ");
	scanf("%i",&edad);
	fflush(stdin);
	printf("\nDigite su sexo: ");
	gets(sexo);

	if((strcmp(sexo,"masculino")==0)&&(edad>=18))
    {
		printf("\nCumple con los requisitos: %s",nombre);
	}

	else
    {
		printf("\nNo cumple con los requisitos");
	}
	return 0;
}



CLASE 18

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Hacer un programa que borre la pantalla al pulsar 1

int main()
{
    char tecla;

    printf("Programa de borrado de pantalla");
    printf("\n--------------------------------");
    printf("\n--------------------------------");
    printf("\n--------------------------------");
    printf("\nDigite el numero 1: ");
    scanf("%s",&tecla);

    if(tecla=='1')
    {
        system("cls");//System Clear Scrrem. Esta funcion lo que hace es limpiar la pantalla y necesita si o si la libreria #include<stdlib.h>
        printf("Ha funcionado, el limpiado de pantalla");
    }

    else
    {
        printf("\nNo ha funcionado el limpiado");
        printf("Por favor, digite el numero 1: ");
        scanf("%s",&tecla);
        fflush(stdin);//Lo que hace es limpiar el buffer asi borra la accion anterior y se puede almacenar la informacion nueva

        if(tecla=='1')
        {
            system("cls");
            printf("Borrado de pantalla");
        }

        else
        {
            printf("No ha funcionado");
        }
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Una distribuidora de motocicletas tiene una promocion de fin de año que consiste en lo siguiente. Las motos marca Honda tiene un descuento del 5%, las marcas
//Yamaha del 8% y las Susuki del 10%, las otras marcas 2%

int main()
{
    float precio;
    float descuento;
    char marca[30];
    float precioTotal;

    printf("Digite el nombre de la marca de su moto: ");
    gets(marca);

    printf("Digite el precio de su moto: ");
    scanf("%f",&precio);

    if(strcmp(marca,"honda")==0)
    {
        descuento=precio*0.05;
        precioTotal=precio-descuento;
        printf("Su precio total es de %.2f",precioTotal);
    }

    else if(strcmp(marca,"yamaha")==0)
    {
        descuento=precio*0.08;
        precioTotal=precio-descuento;
        printf("Su precio total es de %.2f",precioTotal);
    }

    else if(strcmp(marca,"susuki")==0) //Es importante colocar else if porque si coloca solo if va a saltar el ultimo else por mas que se entre en a algun if
    {
        descuento=precio*0.1;
        precioTotal=precio-descuento;
        printf("Su precio total es de %.2f",precioTotal);
    }

    else
    {
        descuento=precio*0.02;
        precioTotal=precio-descuento;
        printf("Su precio total es de %.2f",precioTotal);
    }
    return 0;
}



CLASE 19

#include<stdio.h>

switch(selector) Selector va a ser una variable de tipo int o char, nunca float o double
{
case etiqueta1 :
     sentencia1;
     break;

case etiqueta2:
     sentencia2;
     break;

case etiqueta3:
     sentencia3;
     break;

default:
     sentencias;
}


int main()
{
    int numero;

    printf("Digite un numero entre (1-3): ");
    scanf("%i",&numero);

    switch(numero) //En vez de usar numeros se puede usar letras, en este caso serian de caso char.
    {
        case 1:    //Si se usan letras debe coincidir lo que se escribio con un case, sino va al default
            printf("Es el numero 1");
            break;  //Si no esta el break aparte del caso 1 tambien ejecuta el caso 2

        case 2:
            printf("Es el numero 2");
            break;

        case 3:
            printf("Es el numero 3");
            break;

        default:
            printf("No a digitado un numero correcto"); //En default no es necesario un break ya que es lo ultimo a ejecutar
    }
    return 0;
}



CLASE 20

//Dada una nota de un examen mediante un código escribir el literal que le corresponde a la nota.
//A - Excelente
//B - Notable
//C - Aprobado
//D y F - Reprobado

#include<stdio.h>

int main()
{
	char nota;

	printf("Digite la calificacion (A-F): ");
	scanf("%c",&nota);

	switch(nota)
	{
		case 'A':
		    printf("Excelente");
		    break;

		case 'B':
		    printf("Notable");
		    break;

		case 'C':
		    printf("Aprobado");
		    break;

		case 'D':                               //Como no hay un break salta a F y muestra lo que vale D y F

		case 'F':
		    printf("Reprobado");
		    break;

		default:
		    printf("No es posible esa nota");
	}
	return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico
//1 - turismo, peaje = $500.
//2 - autobus, peaje = $3000.
//3 - motocicleta, peaje = $300.
//caso contrario - Vehiculo no autorizado.

#include<stdio.h>

int main()
{
	int tipo_vehiculo,peaje;

	printf("Digite el tipo del vehiculo: ");
	scanf("%i",&tipo_vehiculo);

	switch(tipo_vehiculo)
	{
		case 1:
		     peaje = 500;
             printf("Turismo $%i",peaje);
             break;

		case 2:
		    peaje = 3000;
            printf("Autobus $%i",peaje);
            break;

		case 3:
		    peaje = 300;
            printf("Motocicleta $%i",peaje);
            break;

		default:
		    printf("Vehiculo no autorizado");
	}
	return 0;
}



CLASE 21

//13. Cambiar un número entero con el mismo valor pero en romanos.

#include<stdio.h>

int main()
{
	int numero, unidades, decenas, centenas, millar;

	printf("Digite un numero: ");
	scanf("%i",&numero);

	unidades= numero%10 ;
	numero = numero / 10;
	decenas = numero%10;
	numero = numero/10;
	centenas = numero%10;
	numero = numero/10;
	millar = numero%10 ;
	numero = numero/10;

	switch(millar)
	{
		case 1:
		     printf("M");break;

		case 2:
		    printf("MM");break;

		case 3:
		    printf("MMM");break;
	}

	switch(centenas)
	{
		case 1:
		    printf("C");break;

		case 2:
		    printf("CC");break;

		case 3:
		    printf("CCC");break;

		case 4:
		    printf("CD");break;

		case 5:
		    printf("D");break;

		case 6:
		    printf("DC");break;

		case 7:
		    printf("DCC");break;

		case 8:
		    printf("DCCC");break;

		case 9:
		    printf("CM");break;
	}

	switch(decenas)
	{
		case 1:
		    printf("X");break;
		case 2:
		    printf("XX");break;

		case 3:
		    printf("XXX");break;

		case 4:
		    printf("XL");break;

		case 5:
		    printf("L");break;

		case 6:
		    printf("LX");break;

		case 7:
		    printf("LXX");break;

		case 8:
		    printf("LXXX");break;

		case 9:
		    printf("XC");break;
	}

	switch(unidades)
	{
		case 1:
		    printf("I");break;

		case 2:
		    printf("II");break;

		case 3:
		    printf("III");break;

		case 4:
		    printf("IV");break;

		case 5:
		    printf("V");break;

		case 6:
		    printf("VI");break;

		case 7:
		    printf("VII");break;

		case 8:
		    printf("VIII");break;

		case 9:
		    printf("IX");break;
	}
	return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dolares.

#include<stdio.h>

int main()
{
	float saldo_inicial=1000;
	int opcion;
	float  saldo;
	float retiro;
	float agregar;

	printf("\tBienvenido a su cajero Virtual");   //\t hace una tabulacion
	printf("\nDigite la opcion de su preferencia");
	printf("\n1. Ingresar dinero en cuenta");
	printf("\n2. Retirar dinero de la cuenta");
	printf("\n3. Ver dinero disponible en cuenta");
	printf("\n4. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);

	switch(opcion)
	{
		case 1:
			printf("\nDigite la cantidad que desea ingresar: ");
			scanf("%f",&agregar);
			saldo = saldo_inicial + agregar;
			printf("El saldo actual es: %.2f",saldo);break;

		case 2:
			printf("\nDigite la cantidad que desea retirar: ");
			scanf("%f",&retiro);

			if(retiro>saldo_inicial)
            {
				printf("La cantidad solicitada es mayor al saldo");
			}

			else
            {
				saldo = saldo_inicial - retiro;
				printf("El saldo actual es de: %.2f",saldo);
			}
			break;

		case 3:
		     printf("El dinero disponible en cuenta es: %.2f",saldo_inicial);
		     break;

		case 4:
		     break;

		default:
		    printf("Numero no disponible");
	}
	return 0;
}



CLASE 22

//Hace un menu que considere las siguientes opciones:
//caso 1: Cubo de un numero
//caso 2: Numero par o impar
//case 3: salir */

#include<stdio.h>
#include<math.h>

int main()
{
	int numero, n1,n2,opcion,cubo;

	printf("\tMENU");
	printf("\n1. Cubo de un numero");
	printf("\n2. Numero par o impar");
	printf("\n3. Salir");
	printf("\nOpcion: ");
	scanf("%i",&opcion);

	switch(opcion)
	{
		case 1:
			printf("\nDigite un numero: ");
			scanf("%i",&numero);
			cubo = pow(numero,3);
			printf("El cubo del numero es: %i",cubo);
		break;

		case 2:
			printf("\nDigite un numero: ");
			scanf("%i",&numero);

			if(numero % 2 == 0)
            {
				printf("El numero es par");
			}

			else
            {
				printf("El numero es impar");
			}
		break;

		case 3:
		    break;

		default:
		     printf("Opcion no valida");
	}
	return 0;
}



CLASE 23

//Expresion condicional: El operador ?

//Sintaxis:  Condicion ? Expresion1:Expresion2

#include<stdio.h>

int main()
{
    printf("Digite un numero: ");
    scanf("%i",&numero);

    (numero%2==0) ? printf("El numero es par") : printf("El numero es impar"); //Si en la condicion se cumple es el primero sino se cumple entonces es el segundo

    return 0;
}



CLASE 24

while(condicion)
{
    instrucciones;
}

//Mostrar los diez primeros numeros en pantalla-ascendente

#include<stdio.h>

int main()
{
    int i;
    i=1;

    while(i<=10)
    {
        printf("%i\n",i);
        i++;
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Mostrar los diez primeros numeros en pantalla-descendente

#include<stdio.h>

int main()
{
    int i;
    i=10;

    while(i>=0)
    {
        printf("%i\n",i);
        i--;
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Mostrar 5 astericos

#include<stdio.h>

int main()
{
    int i;
    i=1;

    while(i<=5)
    {
        printf("*");
        i++;   //Si no se coloca el i++, i va a valer siempre 1 por lo que el bucle se va a hacer infinitamente
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Suma de los n primeros numeros

#include<stdio.h>

int main()
{
    int suma=0;
    int contador;
    int numero;

    printf("Digite el tortal de numeros a sumar: ");
    scanf("%i",&numero);

    contador = 1;

    while(contador <= numero)
    {
        suma = suma + contador;
        contador++;
    }

    printf("El resultado es: %i",suma);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

#include<stdio.h>

int main()
{
    int numero;
    int multiplicacion=0;
    int i;
    int suma;

    printf("Digite un numero: ");
    scanf("%i",&numero);

    i=1;

    if(numero>10)
    {
        while(i<=10)
        {
            multiplicacion = multiplicacion * i;
            i++;
        }

        printf("La multiplicacion es: %i",multiplicacion);
    }

    else
    {
        while(i<=10)
        {
            suma = suma + i;
            i++;
        }
        printf("La suma es: %i",suma);
    }
    return 0;
}



CLASE 25

//Multiplos de 3 desde 1 hasta n

#include<stdio.h>

int main()
{
    int numero;
    int i;

    printf("Digite el total de numeros a comprobar: ");
    scanf("%i",&numero);

    i=1;

    while(i<=numero)
    {
        if(i%3==0)  //Para ver los numeros multiplos de 3
        {
            printf("%i\n",i);
        }
        i++;
    }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Multiplos de 5 desde 1 hasta n

#include<stdio.h>

int main()
{
    int i;
    int numero;

    printf("Digite la cantidad de numeros a comprobar: ");
    scanf("%i",&numero);

    i=1;

    while(i<=numero)
    {
        if(i%5==0)
        {
            printf("%i\n",i);
        }
        i++;
    }
    return 0;
}


/*Sumar 1-2+3-4+5-6..... Sucesion de numeros
Vemos que:

impares (+) Siempre van a ser positivos
pares (-)   Simepre van a ser negativos

suma_pares = -2 -4 -6 ...
suma_impares = 1 + 3 + 5...

suma = suma_pares + suma_impares

1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3
*/

#include<stdio.h>

int main()
{
	int i;
	int suma=0;
	int suma_pares=0;
	int suma_impares=0;
	int numeros;
	int negativo;

	printf("Digite el total de elementos de la serie: ");
	scanf("%i",&numeros);

	i = 1;

	while(i<=numeros)
        {
            if(i%2==0)
            {
                negativo = i * (-1); //de esta forma transformo en negativo al numero
                suma_pares = suma_pares + negativo;
            }

            else
            {
                suma_impares = suma_impares + i; //aca se deja positivo
            }

            i++; //para finalizar el bucle
        }

	suma = suma_pares + suma_impares;

	printf("\n La suma total es: %i",suma);

	return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

// 7. Suma de los 10 primeros numeros pares

#include<stdio.h>

int main()
{
	int i;
	int suma=0;

	for(i=0;i<=10;i+=2)
    { //  i = i + 2     i += 2
		suma += i;
	}

	printf("\n La suma es: %i",suma);

	return 0;
}



CLASE 26

#include<stdio.h>

for(inicializacion;condicion;incremento)
{
    instrucciones;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Mostrar los 10 primeros numeros en ascendentes

#include<stdio.h>

int main()
{
  int i;

  for(i=1;i<=10;i++)
  {
      printf("%i\n",i);
  }
    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Mostrar los 10 primeros numeros en ascendentes

#include<stdio.h>

int main()
{
    int i;

    for(i=1;i<=100;i++)
    {
        printf("%i\n Hola mundo cien veces\n",i);
    }
    return 0;
}


CLASE 27

//Suma de los 10 primero numeros pares

#include<stdio.h>

int main()
{
    int i;
    int suma=0;

    for(i=1;i<=10;i=i+2)//En vez de subir de 1 sube en 2
    {
        if(i%2==0)
        {
            suma = suma +i;
        }
    }

    printf("La suma de los pares es: %i",suma);

    return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Hacer un arbol con *

#include<stdio.h>

int main()
{
	int numfilas;
	int i;
	int j;

	printf("Digite el numero de filas: ");
	scanf("%i",&numfilas);

	for(i=0;i<numfilas;i++)
	{
		for(j=0;j<=i;j++)
        {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//9. Determinar si un Número es Primo o no.

#include<stdio.h>

int main()
{
	int i, numero, cont=0;//El conteo va a almacenar un valor por lo que es necesario inicializarlo

	printf("Digite un numero: ");
	scanf("%i",&numero);

	for(i=1;i<=numero;i++)
    {
		if(numero%i==0)//De esta forma divide todo los numeros i por el numero escrito y si da resto cero entra y aumenta el contador
        {
			cont++;
		}
	}

	if(cont>2)
    {
		printf("\n El numero es compuesto");//Todo número natural no primo, a excepción del 1, se denomina compuesto, es decir, tiene uno o más divisores distintos
                                            //a 1 y a sí mismo. También se utiliza el término divisible para referirse a estos números.
	}

	else
    {
        printf("\n El numero es primo");
	}
	return 0;
}


CLASE 28

//Factorial de un numero.

//El factorial de un entero positivo n, el factorial de n o n factorial se define en principio como el producto de todos los
//números enteros positivos desde 1 (es decir, los números naturales) hasta n.

#include<stdio.h>

int main()
{
	int i;
	int numero;
	int factorial = 1;//Al ser una multiplicacion interactiva se debe comenzar con 1 y no con 0 sino daria 0 todas las multiplicaciones

	printf("Digite el numero para hallar el factorial: ");
	scanf("%i",&numero);

	for(i=1;i<=numero;i++)
    {
		factorial = factorial * i; //factorial *=i es lo mismo
	}

	printf("\n El factorial del numero dado es: %i",factorial);

	return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Suma de factoriales

#include<stdio.h>

int main()
{
	int factorial = 1, suma = 0, i, n;

	printf("Digite la cantidad de factoriales a sumar: ");
	scanf("%i",&n);

	for(i=1;i<=n;i++)
    {
		factorial *= i;
		suma += factorial;
	}

	printf("La suma es: %i",suma);

	return 0;
}



Clase 29

//Serie Fibonacci

//Consta de una serie de números naturales que se suman de a 2, a partir de 0 y 1. Básicamente, la sucesión de Fibonacci se realiza sumando siempre los últimos 2 números
//(Todos los números presentes en la sucesión se llaman números de Fibonacci) de la siguiente manera: 0,1,1,2,3,5,8,13,21,34...

// 1+1 2+3 5+8 13...

#include<stdio.h>

int main()
{
	int numero;
	int i;
	int x=0;
	int y=1;
	int z=1;

	printf("Digite el numero de elementos: ");
	scanf("%i",&numero);

	printf("1 , ");//Este numero es para que comience en uno no se puede hacer en el bucle for

	for(i=1;i<numero;i++)
    {
		z = x + y;
		x = y;
		y = z;          //Logica de la serie fibonacci

		printf("%i , ",z);
	}

	return 0;
}

//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

//Hacer un programa que imprima la suma de todos los números pares que hay desde 1 hasta n, y diga cuantos números hay.

#include<stdio.h>

int main()
{
	int cont=0,i;
	int suma=0,n;

	printf("Digite la cantidad de elementos: ");
	scanf("%i",&n);

	for(i=1;i<=n;i++)
    {
		if(i%2==0)
		{
			suma = suma + i;
			cont++;
		}
	}

	printf("\n La suma es: %i",suma);
	printf("\n La cantidad de numeros es: %i",cont);

	return 0;
}







































































































































































































































































































