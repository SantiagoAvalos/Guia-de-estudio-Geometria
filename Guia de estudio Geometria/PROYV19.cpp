#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void horizontal(int x1,int x2,int y)
{
int x;
for(x=x1;x<=x2;x++)
{
gotoxy(x,y);printf("�");
}}
void horizontal2(int x1,int x2,int y)
{
int x;
for(x=x1;x<=x2;x++)
{
gotoxy(x,y);printf("*");
}}
void vertical(int y1,int y2,int x)
{
int y;
for(y=y1;y<=y2;y++)
{
gotoxy(x,y);printf("�");
}}
void vertical2(int y1,int y2,int x)
{
int y;
for(y=y1;y<=y2;y++)
{
gotoxy(x,y);printf("*");
}}
void marco()
{
horizontal(2,98,2);horizontal(2,98,28);
vertical(3,28,2);vertical(3,28,98);
horizontal(4,96,4);horizontal(4,96,26);
vertical(5,26,4);vertical(5,26,96);
}
void menu()
{
system("color 07");
marco();
gotoxy(46,6);printf("SEGUNDO PARCIAL");
gotoxy(48,7);printf("UNIDAD IV");
gotoxy(48,8);printf("TRIANGULOS");
gotoxy(5,10);printf("Elija alguno de los siguientos objetivos para comenzar a estudiar y practicar...");
gotoxy(5,12);printf("OBJETIVO 1.-DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(5,14);printf("OBJETIVO 2.-RECTAS Y PUNTOS NOTABLES DEL TRIANGULO.");
gotoxy(5,16);printf("OBJETIVO 3.-TEOREMA DE PITAGORAS Y SUS APLICACIONES.");
gotoxy(5,18);printf("OBJETIVO 4.-AREA,PERIMETRO Y SEMIPERIMETRO DE TRIANGULOS.");
gotoxy(5,25);printf("Elija 5 para salir...");
gotoxy(5,21);
}
void Obj1()
{
char a;
int cont1c=0,cont2i=0,x;
gotoxy(25,5);printf("DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(5,7);printf("El triangulo es una firgura plana cerrada,formada por 3 rectas que se cortan 2 a 2 entre");
gotoxy(5,8);printf("si.");
//inicia construccion de triangulo
gotoxy(46,9);printf("o");
gotoxy(45,8);printf("o");
gotoxy(53,15);printf("oo");
gotoxy(41,16);printf("o");
gotoxy(40,17);printf("o");
gotoxy(47,10);printf("*");
gotoxy(48,11);printf("*");
gotoxy(49,12);printf("*");
gotoxy(50,13);printf("*");
gotoxy(51,14);printf("*");
gotoxy(52,15);printf("*");
gotoxy(46,11);printf("*");
gotoxy(45,12);printf("*");
gotoxy(44,13);printf("*");
gotoxy(43,14);printf("*");
gotoxy(42,15);printf("*");
horizontal2(43,52,15);
gotoxy(47,11);printf("c");
gotoxy(50,14);printf("b");
gotoxy(44,14);printf("a");
gotoxy(40,15);printf("A");
gotoxy(52,16);printf("B");
gotoxy(47,9);printf("C");
gotoxy(46,16);printf("c'");
gotoxy(51,12);printf("a'");
gotoxy(43,12);printf("b'");
gotoxy(44,10);printf("c''");
gotoxy(42,16);printf("a''");
gotoxy(53,14);printf("b''");
//finaliza construccion de triangulo
gotoxy(16,9);printf("*");
gotoxy(6,10);printf("NOTACION:*** ABC (triangulo ABC).");
gotoxy(6,11);printf("Elementos de construccion:");
gotoxy(6,12);printf("Vertices:A,B,C");
gotoxy(12,13);printf("__ __ __ ");
gotoxy(6,14);printf("Lados:AB,BC,CA o c',a',b'");
gotoxy(57,10);printf("Elementos de Analisis:");
gotoxy(57,11);printf("Angulos interiores:<a,<b,<c(< = Angulo)");
gotoxy(57,12);printf("Angulos exteriores:<a'',<b'',<c''");
gotoxy(5,17);printf("Perimetro:");
gotoxy(7,18);printf("__ __ __");
gotoxy(5,19);printf("P=AB+BC+CA o P=c'+a'+b' (Perimetro igual a la suma de todos los lados del triangulo)");
gotoxy(5,20);printf("Semiperimetro:");
gotoxy(5,21);printf("p=P�2=a'+b'+c'�2 (Semiperimetro igual a perimetro entre 2)");
gotoxy(5,22);printf("Area:");
gotoxy(5,23);printf("A=(b*h)�2 (Area igual a base por altura entre 2)");
gotoxy(5,24);printf("O");
gotoxy(8,24);printf("____________________");
gotoxy(5,25);printf("A=V P(p-a')(p-b')(p-c')' (Formula de heron)");
gotoxy(53,25);printf("Presione cualquier tecla para continuar...");
getch();
clrscr();
system("color 0A");
marco();
gotoxy(25,5);printf("DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(35,6);printf("Clacificacion por sus Lados");
gotoxy(5,7);printf("Equilateros:son los que tienen sus tres lados iguales");
//triangulo equilatero
gotoxy(50,8);printf("*");
gotoxy(48,9);printf("****");
gotoxy(46,10);printf("********");
gotoxy(44,11);printf("************");
gotoxy(46,9);printf("4");
gotoxy(53,9);printf("4");
gotoxy(50,12);printf("4");
//Termina
gotoxy(5,13);printf("Isosceles:son los que tienen dos lados iguales");
//triangulo isosceles
gotoxy(50,14);printf("*");
gotoxy(49,15);printf("***");
gotoxy(48,16);printf("*****");
gotoxy(47,17);printf("*******");
gotoxy(47,15);printf("4");
gotoxy(53,15);printf("4");
gotoxy(50,18);printf("3");
//Termina
gotoxy(5,19);printf("Escaleos:son los que tienen sus tres lados desiguales");
//trianglo escaleno
gotoxy(50,20);printf("*");
gotoxy(49,21);printf("****");
gotoxy(48,22);printf("********");
gotoxy(47,23);printf("************");
gotoxy(47,21);printf("3");
gotoxy(53,24);printf("4");
gotoxy(55,21);printf("5");
gotoxy(53,25);printf("Presione cualquier tecla para continuar...");
getch();
clrscr();
system("color 0A");
marco();
gotoxy(25,5);printf("DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(35,6);printf("Clacificacion por sus Angulos");
gotoxy(5,7);printf("Acutangulos:son los que tienen sus tres angulos agudos(-90)");
//triangulo Acutangulo
gotoxy(50,8);printf("*");
gotoxy(48,9);printf("*  *");
gotoxy(46,10);printf("*      *");
gotoxy(44,11);printf("************");
gotoxy(49,9);printf("c");
gotoxy(52,10);printf("b");
gotoxy(47,10);printf("a");
//Termina
gotoxy(65,7);printf("o     o     o");
gotoxy(60,8);printf("<a=60,<b=60,<c=60");
gotoxy(5,12);printf("Rectangulos:Son los que tienen un angulo recto(90)");
//triangulo rectangulo
gotoxy(45,13);printf("*");
gotoxy(45,14);printf("*  *");
gotoxy(45,15);printf("*      *");
gotoxy(45,16);printf("************");
gotoxy(46,15);printf("a");
//Termina
gotoxy(65,14);printf("o");
gotoxy(60,15);printf("<a=90");
gotoxy(5,17);printf("Obtusangulo:Son los que tienen un angulo obtuso(-180 & +90)");
//triangulo obtusangulo
gotoxy(46,18);printf("*");
gotoxy(47,19);printf("*  *");
gotoxy(48,20);printf("*    *");
gotoxy(49,21);printf("*     *");
gotoxy(50,22);printf("********");
gotoxy(50,21);printf("a");
//Termina
gotoxy(65,18);printf(" o");
gotoxy(60,19);printf("<a=120");
gotoxy(53,25);printf("Presione cualquier tecla para continuar...");
getch();
//incio de pregutas
clrscr();
system("color 0B");
marco();
gotoxy(25,5);printf("DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(45,6);printf("EJERCICIOS");
gotoxy(5,7);printf("Instrucciones:Elija la letra de la respuesta que crea correcta.");
gotoxy(5,8);printf("1.-Cual de los siguiente elementos es un elemento de construccion?");
gotoxy(10,9);printf("A)Angulos          B)Perimetro          C)Vertices          D)Area");
gotoxy(72,8);scanf("%c",&a);
a=toupper(a);
if(a=='C')
{
system("color 0A");
gotoxy(80,8);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,8);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,11);
printf("");
}
system("color 0B");
gotoxy(5,11);printf("2.-Cual de los siguientes es un elemento de analisis?");
gotoxy(10,12);printf("A)Base          B)Lados          C)Vertices          D)Area");
gotoxy(59,11);scanf("%c",&a);
a=toupper(a);
if(a=='D')
{
system("color 0A");
gotoxy(80,11);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,11);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,13);
printf("");
}
system("color 0B");
gotoxy(5,13);printf("3.-Cual de los siguientes es un triangulo escaleno?");
gotoxy(40,14);printf("A)          B)          c);");
//equilatero
gotoxy(42,14);printf("*");
gotoxy(40,15);printf("****");
gotoxy(38,16);printf("********");
gotoxy(36,17);printf("************");
//isoceles
gotoxy(54,14);printf("*");
gotoxy(53,15);printf("***");
gotoxy(52,16);printf("*****");
gotoxy(51,17);printf("*******");
//escaleno
gotoxy(66,14);printf("*");
gotoxy(65,15);printf("****");
gotoxy(64,16);printf("********");
gotoxy(63,17);printf("************");
//terminan triangulos
gotoxy(57,13);scanf("%c",&a);
a=toupper(a);
if(a=='C')
{
system("color 0A");
gotoxy(80,13);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,13);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,18);
printf("");
}
system("color 0B");
gotoxy(5,18);printf("4.-Que nombre recibe el siguiente triangulo segun sus lados?");
//triangulo
gotoxy(50,19);printf("*");
gotoxy(48,20);printf("****");
gotoxy(46,21);printf("********");
gotoxy(44,22);printf("************");
//termina
gotoxy(10,23);printf("A)Equilatero          B)Isosceles          C)Escaleno          D)Acutangulo");
gotoxy(66,18);scanf("%c",&a);
a=toupper(a);
if(a=='A')
{
system("color 0A");
gotoxy(80,18);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,18);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,24);
printf("");
}
clrscr();
system("color 0B");
marco();
gotoxy(25,5);printf("DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(45,6);printf("EJERCICIOS");
gotoxy(5,7);printf("Instrucciones:Escriba V si el enunciado es verdadero o F si es falso.");
gotoxy(5,8);printf("5.-El triangulo isoceles es aque que tiene dos lados iguales y uno desigual.");
gotoxy(50,10);scanf("%c",&a);
a=toupper(a);
if(a=='V')
{
system("color 0A");
gotoxy(80,10);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,10);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,11);
printf("");
}
system("color 0B");
gotoxy(5,11);printf("6.-Los angulos de un triangulo acutangulo son mayores a 90 grados.");
gotoxy(50,13);scanf("%c",&a);
a=toupper(a);
if(a=='F')
{
system("color 0A");
gotoxy(80,13);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,13);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,14);
printf("");
}
system("color 0B");
gotoxy(5,14);printf("7.-Un triangulo rectangulo tiene angulos mayores a 90 grados");
gotoxy(50,16);scanf("%c",&a);
a=toupper(a);
if(a=='F')
{
system("color 0A");
gotoxy(80,16);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,16);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,17);
printf("");
}
system("color 0B");
gotoxy(5,17);printf("8.-Un triangulo rectangulo tiene un angulo de 90 ");
gotoxy(50,19);scanf("%c",&a);
a=toupper(a);
if(a=='V')
{
system("color 0A");
gotoxy(80,19);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,19);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,20);
printf("");
}
system("color 0B");
gotoxy(5,20);printf("9.-El triangulo obtusangulo es el unico con un angulo mayor a 90 grados");
gotoxy(50,22);scanf("%c",&a);
a=toupper(a);
if(a=='V')
{
system("color 0A");
gotoxy(80,22);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,22);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,23);
printf("");
}
clrscr();
system("color 0B");
marco();
gotoxy(25,5);printf("DEFINICION,NOTACION Y CLASIFICACION DE TRIANGULOS.");
gotoxy(45,6);printf("EJERCICIOS");
gotoxy(5,7);printf("Instrucciones:Escriba V si el enunciado es verdadero o F si es falso.");
gotoxy(5,8);printf("10.-El semiperimetro es la mitad del perimetro");
gotoxy(50,10);scanf("%c",&a);
a=toupper(a);
if(a=='V')
{
system("color 0A");
gotoxy(80,10);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(80,10);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,11);
printf("");
}
system("color 0B");
gotoxy(40,13);printf("Aciertos %i Errores %i",cont1c,cont2i);
for(x=0;x<=30000;x++)
{
gotoxy(40,14);
printf("");
}
gotoxy(40,14);
switch(cont1c)
{
case 10:
case 9:
system("color 0A");
printf("Felicidades,bien hecho!");
break;
case 8:
case 7:
case 6:
system("color 0E");
printf("Bien... Puedes mejorar");
break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:
system("color 0C");
printf("Nesecitas estudiar mas...");
break;
}
gotoxy(53,25);printf("Presione cualquier tecla para continuar...");
getch();
}
void Obj2()
{
int cont1c=0,cont2i=0,x,a,r=0;
gotoxy(30,5);printf("RECTAS Y PUNTOS NOTABLES DEL TRIANGULO.");
gotoxy(45,7);printf("CONCEPTOS");
gotoxy(5,8);printf("1.-INCENTRO:Es el punto de interseccion de las 'Bisectrises' de los angulos interiores del");
gotoxy(5,9);printf("triangulo.");
gotoxy(5,10);printf("1.1.-BISECTRIZ:Es una semirecta interior al triangulo que divide a el angulo en 2 partes");
gotoxy(5,11);printf("iguales.");
gotoxy(5,13);printf("2.-CIRCUNCENTRO:Punto de interseccion de las 'Mediatrices' de los lados del triangulo.");
gotoxy(5,14);printf("2.1.-MEDIATRIZ:Es la perpendicular que corta el punto medio de un segmento.");
gotoxy(5,16);printf("3.-ORTOCENTRO:Es el punto de interseccion de las tres alturas del triangulo.");
gotoxy(5,17);printf("3.1.-ALTURA:Es el segmento de recta trazado desde un vertice perpendicularmente al lado");
gotoxy(5,18);printf("opuesto.");
gotoxy(5,20);printf("4.-GRAVICENTRO:Es el punto de interseccion de las 'Medianas' de un triangulo.");
gotoxy(5,21);printf("4.1.-MEDIANA:Es el segmento trazado de un vertice al punto medio del lado opuesto.");
gotoxy(53,25);printf("Presione cualquier tecla para continuar...");
getch();
clrscr();
system("color 0B");
marco();
gotoxy(30,5);printf("RECTAS Y PUNTOS NOTABLES DEL TRIANGULO.");
gotoxy(45,6);printf("EJERCICIOS");
gotoxy(5,7);printf("Instrucciones:Inserte el numero del concepto al elemento que usted crea correcto.");
//MEDIANA
gotoxy(50,8);printf("1.-Es el segmento trazado de un vertice al");
gotoxy(50,9);printf("punto medio del lado opuesto.");
//BISECTRIZ
gotoxy(50,11);printf("2.-Es una semirecta interior al triangulo");
gotoxy(50,12);printf("que divide a el angulo en 2 partes.");
//GRAVICENTRO
gotoxy(50,14);printf("3.-Es el punto de interseccion de las");
gotoxy(50,15);printf("'Medianas' de un triangulo.");
//INCENTRO
gotoxy(50,17);printf("4.-Es el punto de interseccion de las ");
gotoxy(50,18);printf("'Bisectrises' de los angulos");
gotoxy(50,19);printf("interiores del triangulo.");
//CIRCUNCENTRO
gotoxy(50,21);printf("5.-Punto de interseccion de las");
gotoxy(50,22);printf("'Mediatrices' de los lados del triangulo.");
//Terminan conceptos
gotoxy(5,8);printf("( )GRAVICENTRO");
gotoxy(5,11);printf("( )INCENTRO");
gotoxy(5,14);printf("( )BISECTRIZ");
gotoxy(5,17);printf("( )CIRCUNCENTRO");
gotoxy(5,21);printf("( )MEDIANA");
gotoxy(6,8);scanf("%i",&a);
if(a==3)
{
system("color 0A");
gotoxy(5,25);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(5,25);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,30);
printf("");
}
system("color 0B");

gotoxy(6,11);scanf("%i",&a);
if(a==4)
{
system("color 0A");
gotoxy(5,25);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(5,25);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,30);
printf("");
}
system("color 0B");

gotoxy(6,14);scanf("%i",&a);
if(a==2)
{
system("color 0A");
gotoxy(5,25);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(5,25);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,30);
printf("");
}
system("color 0B");

gotoxy(6,17);scanf("%i",&a);
if(a==5)
{
system("color 0A");
gotoxy(5,25);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(5,25);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,30);
printf("");
}
system("color 0B");

gotoxy(6,21);scanf("%i",&a);
if(a==1)
{
system("color 0A");
gotoxy(5,25);printf("correcto");
cont1c=cont1c+1;
}
else
{
system("color 0C");
gotoxy(5,25);printf("incorrecto");
cont2i=cont2i+1;
}
for(x=0;x<=30000;x++)
{
gotoxy(5,30);
printf("");
}
system("color 0B");

gotoxy(40,24);printf("Aciertos %i Errores %i",cont1c,cont2i);
for(x=0;x<=30000;x++)
{
gotoxy(5,30);
printf("");
}
gotoxy(5,25);
r=cont1c/0.5;
switch(r)
{
case 10:
case 9:
system("color 0A");
printf("Felicidades,bien hecho!");
break;
case 8:
case 7:
case 6:
system("color 0E");
printf("Bien... Puedes mejorar");
break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:
system("color 0C");
printf("Nesecitas estudiar mas...");
break;
}
gotoxy(53,25);printf("Presione cualquier tecla para continuar...");
getch();
}
void main()
{
int op;
system("color 0E");
horizontal(2,78,2);
horizontal(2,78,22);
vertical(3,22,2);
vertical(3,22,78);
horizontal(4,76,4);
horizontal(4,76,20);
vertical(5,20,4);
vertical(5,20,76);
gotoxy(15,7);printf("Porfavor aumente el tama\xA4o de la ventana a 101x30");
gotoxy(15,8);printf("Para que el contenido se muestre correctamente!");
gotoxy(5,12);printf("Instrucciones:Click derecho en la barra de titulo/Click en Propiedades");
gotoxy(5,13);printf("/Click en dise\xA4o/Modificar tama\xA4o de la ventana:Ancho=101 y Alto=30/");
gotoxy(5,14);printf("Click en aceptar.");
gotoxy(5,19);printf("Presione cualquier tecla para continuar...");
getch();
clrscr();
system("color 0A");
marco();
gotoxy(40,5);printf("EJERCICIOS DE GEOMETRIA");
gotoxy(30,7);printf("Bienvenido a la guia de estudio de geometria.");
gotoxy(10,12);printf("En la cual podra aprender de manera didactica los objetivos vistos o por ver en el ");
gotoxy(35,13);printf("segundo parcial de Geometria.");
gotoxy(25,18);printf("A continuacion usted podra elegir un objetivo de la unidad 4");
gotoxy(35,19);printf("Que comprende el segundo parcial.");
gotoxy(32,24);printf("Presione cualquier tecla para continuar...");
getch();
do
{
do
{
clrscr();
menu();
printf("Objetivo a estudiar:");
scanf("%i",&op);
if(op<=0||op>5)
{
clrscr();
system("color 0C");
marco();
gotoxy(20,14);printf("Porfavor escriba el numero de alguno de los objetivos mostrados!");
gotoxy(30,15);printf("Presione cualquier tecla para continuar...");
getch();
}
}while(op<1||op>5);

switch(op)
{
case 1:
clrscr();
system("color 0A");
marco();
Obj1();
break;
case 2:
clrscr();
system("color 0A");
marco();
Obj2();
break;
case 3:
clrscr();
system("color 0A");
marco();

break;
case 4:
clrscr();
system("color 0A");
marco();

break;
}
getch();
}while(op!=5);
}