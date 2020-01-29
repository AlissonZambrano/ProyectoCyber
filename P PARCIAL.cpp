#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#include<fstream> //para abrir archivos,lectura y escritura de archivos :3
#include<iomanip>
#include<cstring>

void comprast();
void sumini();
void aequi();
void rve();
void rin();
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }

void color(int X){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), X);
}

using namespace std;
int main()
{

char user[20], pass[20],o,ops;
int e=2,a=0,op;


PRESENTACION:
system("mode con: lines=16");
system("mode con: cols=77");
system("color f3");  
int Z=255,x=219;
int i;



gotoxy(0,0);printf("  ========================================================================");
gotoxy(0,1);printf("||");
gotoxy(0,2);printf("||");
gotoxy(0,3);printf("||");
gotoxy(0,4);printf("||");
gotoxy(0,5);printf("||");
gotoxy(0,6);printf("||");
gotoxy(0,7);printf("||");
gotoxy(0,8);printf("||");
gotoxy(0,9);printf("||");
gotoxy(0,10);printf("||");
gotoxy(0,11);printf("||");
gotoxy(0,12);printf("||");
gotoxy(0,13);printf("||");
gotoxy(0,14);printf("||");
gotoxy(0,15);printf("  ========================================================================");

gotoxy(74,1);printf("||");
gotoxy(74,2);printf("||");
gotoxy(74,3);printf("||");
gotoxy(74,4);printf("||");
gotoxy(74,5);printf("||");
gotoxy(74,6);printf("||");
gotoxy(74,7);printf("||");
gotoxy(74,8);printf("||");
gotoxy(74,9);printf("||");
gotoxy(74,10);printf("||");
gotoxy(74,11);printf("||");
gotoxy(74,12);printf("||");
gotoxy(74,13);printf("||");
gotoxy(74,14);printf("||");

gotoxy(30,2);printf("PROYECTO PARCIAL");
gotoxy(29,3);printf("******************");
gotoxy(4,5);printf("NOMBRES DE LOS CREADORES:");
gotoxy(4,6);printf("*CASTRO MORA ALEXANDER*");
gotoxy(4,7);printf("*ZAMBRANO ALISSON*");
gotoxy(4,9);printf("UNIVERSIDAD DE GUAYAQUIL");
gotoxy(4,10);printf("CARRERA: ING. EN SOFTWARE");



cout<<"\n\t\t\t\tCargando...\n"<<endl;
     cout<<"\t\t    ";
for(i=1;i<16;i++)
     {
           Sleep(400)
           
           ;
           cout<<char(x);
           cout<<char(Z);
     }
    
cout<<" 100%\n\n\n"<<endl;


clave:
system("cls"); 
system("color 07");
system("mode con: lines=16");
system("mode con: cols=77");

gotoxy(1,1);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);
printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);printf("*");Sleep(15);

gotoxy(75,2);printf("*");Sleep(15);
gotoxy(75,3);printf("*");Sleep(15);
gotoxy(75,4);printf("*");Sleep(15);
gotoxy(75,5);printf("*");Sleep(15);
gotoxy(75,6);printf("*");Sleep(15);
gotoxy(75,7);printf("*");Sleep(15);
gotoxy(75,8);printf("*");Sleep(15);
gotoxy(75,9);printf("*");Sleep(15);
gotoxy(75,10);printf("*");Sleep(15);
gotoxy(75,11);printf("*");Sleep(15);
gotoxy(75,12);printf("*");Sleep(15);
gotoxy(75,13);printf("*");Sleep(15);
gotoxy(75,14);printf("*");Sleep(15);

gotoxy(75,15);printf("*");Sleep(15);gotoxy(74,15);printf("*");Sleep(15);gotoxy(73,15);printf("*");Sleep(15);gotoxy(72,15);printf("*");Sleep(15);gotoxy(71,15);printf("*");Sleep(15);gotoxy(70,15);printf("*");Sleep(15);
gotoxy(69,15);printf("*");Sleep(15);gotoxy(68,15);printf("*");Sleep(15);gotoxy(67,15);printf("*");Sleep(15);gotoxy(66,15);printf("*");Sleep(15);gotoxy(65,15);printf("*");Sleep(15);gotoxy(64,15);printf("*");Sleep(15);gotoxy(63,15);printf("*");Sleep(15);gotoxy(62,15);printf("*");Sleep(15);gotoxy(61,15);printf("*");Sleep(15);gotoxy(60,15);printf("*");Sleep(15);
gotoxy(59,15);printf("*");Sleep(15);gotoxy(58,15);printf("*");Sleep(15);gotoxy(57,15);printf("*");Sleep(15);gotoxy(56,15);printf("*");Sleep(15);gotoxy(55,15);printf("*");Sleep(15);gotoxy(54,15);printf("*");Sleep(15);gotoxy(53,15);printf("*");Sleep(15);gotoxy(52,15);printf("*");Sleep(15);gotoxy(51,15);printf("*");Sleep(15);gotoxy(50,15);printf("*");Sleep(15);
gotoxy(49,15);printf("*");Sleep(15);gotoxy(48,15);printf("*");Sleep(15);gotoxy(47,15);printf("*");Sleep(15);gotoxy(46,15);printf("*");Sleep(15);gotoxy(45,15);printf("*");Sleep(15);gotoxy(44,15);printf("*");Sleep(15);gotoxy(43,15);printf("*");Sleep(15);gotoxy(42,15);printf("*");Sleep(15);gotoxy(41,15);printf("*");Sleep(15);gotoxy(40,15);printf("*");Sleep(15);
gotoxy(39,15);printf("*");Sleep(15);gotoxy(38,15);printf("*");Sleep(15);gotoxy(37,15);printf("*");Sleep(15);gotoxy(36,15);printf("*");Sleep(15);gotoxy(35,15);printf("*");Sleep(15);gotoxy(34,15);printf("*");Sleep(15);gotoxy(33,15);printf("*");Sleep(15);gotoxy(32,15);printf("*");Sleep(15);gotoxy(31,15);printf("*");Sleep(15);gotoxy(30,15);printf("*");Sleep(15);
gotoxy(29,15);printf("*");Sleep(15);gotoxy(28,15);printf("*");Sleep(15);gotoxy(27,15);printf("*");Sleep(15);gotoxy(26,15);printf("*");Sleep(15);gotoxy(25,15);printf("*");Sleep(15);gotoxy(24,15);printf("*");Sleep(15);gotoxy(23,15);printf("*");Sleep(15);gotoxy(22,15);printf("*");Sleep(15);gotoxy(21,15);printf("*");Sleep(15);gotoxy(20,15);printf("*");Sleep(15);
gotoxy(19,15);printf("*");Sleep(15);gotoxy(18,15);printf("*");Sleep(15);gotoxy(17,15);printf("*");Sleep(15);gotoxy(16,15);printf("*");Sleep(15);gotoxy(15,15);printf("*");Sleep(15);gotoxy(14,15);printf("*");Sleep(15);gotoxy(13,15);printf("*");Sleep(15);gotoxy(12,15);printf("*");Sleep(15);gotoxy(11,15);printf("*");Sleep(15);gotoxy(10,15);printf("*");Sleep(15);
gotoxy(9,15);printf("*");Sleep(15);gotoxy(8,15);printf("*");Sleep(15);gotoxy(7,15);printf("*");Sleep(15);gotoxy(6,15);printf("*");Sleep(15);gotoxy(5,15);printf("*");Sleep(15);gotoxy(4,15);printf("*");Sleep(15);gotoxy(3,15);printf("*");Sleep(15);gotoxy(2,15);printf("*");Sleep(15);gotoxy(1,15);printf("*");Sleep(15);

gotoxy(1,14);printf("*");Sleep(15);
gotoxy(1,13);printf("*");Sleep(15);
gotoxy(1,12);printf("*");Sleep(15);
gotoxy(1,11);printf("*");Sleep(15);
gotoxy(1,10);printf("*");Sleep(15);
gotoxy(1,9);printf("*");Sleep(15);
gotoxy(1,8);printf("*");Sleep(15);
gotoxy(1,7);printf("*");Sleep(15);
gotoxy(1,6);printf("*");Sleep(15);
gotoxy(1,5);printf("*");Sleep(15);
gotoxy(1,4);printf("*");Sleep(15);
gotoxy(1,3);printf("*");Sleep(15);
gotoxy(1,2);printf("*");Sleep(15);


gotoxy(31,3);printf("S");Sleep(70);printf("0");Sleep(70);printf("F");Sleep(70);printf("T");Sleep(70);printf("W");Sleep(70);printf("A");Sleep(70);printf("R");Sleep(70);printf("E");Sleep(70);printf(" ");Sleep(70);printf("Z");Sleep(70);printf("A");Sleep(70);printf("M");Sleep(70);printf("C");Sleep(70);printf("A");Sleep(70);printf("S");Sleep(70);
gotoxy(30,4);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);printf("-");Sleep(15);

gotoxy(12,7);printf("Ingrese Usuario:  ");
gotoxy(12,10);printf("Ingrese contrase%ca: ",164);
//getch();

Movimiento:
for (e==2; e<12; e++)
{

system("cls"); 
//system("color f0");

gotoxy(1,1);printf("***************************************************************************");
gotoxy(75,2);printf("*");
gotoxy(75,3);printf("*");
gotoxy(75,4);printf("*");
gotoxy(75,5);printf("*");
gotoxy(75,6);printf("*");
gotoxy(75,7);printf("*");
gotoxy(75,8);printf("*");
gotoxy(75,9);printf("*");
gotoxy(75,10);printf("*");
gotoxy(75,11);printf("*");
gotoxy(75,12);printf("*");
gotoxy(75,13);printf("*");
gotoxy(75,14);printf("*");
gotoxy(1,15);printf("***************************************************************************");
gotoxy(1,14);printf("*");
gotoxy(1,13);printf("*");
gotoxy(1,12);printf("*");
gotoxy(1,11);printf("*");
gotoxy(1,10);printf("*");
gotoxy(1,9);printf("*");
gotoxy(1,8);printf("*");
gotoxy(1,7);printf("*");
gotoxy(1,6);printf("*");
gotoxy(1,5);printf("*");
gotoxy(1,4);printf("*");
gotoxy(1,3);printf("*");
gotoxy(1,2);printf("*");

gotoxy(31,3);printf("S0FTWARE ZAMCAS");
gotoxy(30,4);printf("-----------------");

gotoxy(e,7);printf("Ingrese Usuario:  ");
gotoxy(e,10);printf("Ingrese contrase%ca: ",164);
Sleep(70);
}
gotoxy(33,7);scanf("%s",user);
gotoxy(33,10);

for(int i=0; i<10; i++)
{
//system("color f0");
o=getch();
if(o!=char(13)){ pass[i]=o;printf("*");}
else break;
}

printf("\n\r %s",pass);

if (strcmp(user,"zamcas")==0 &&  strcmp(pass,"1234")==0)
  {
   goto menu;
   //system("cls"); 
   }
else
  {
   a++;
     if (a>=3)
      {
       exit(0);
       }
      goto clave;
    }

menu:
system("cls");
system("mode con: lines=23");
system("mode con: cols=83");
color(2);	
printf("                          ______________________________              \n");
printf("                  _______*                              *_______      \n");
printf("                  *      *      SISTEMA DE CYBER Y      *      *      \n");
printf("                   *     *          PAPELERIA           *     *       \n");
printf("                   *     *______________________________*     *       \n");
printf("                  *_________*                        *_________*      \n");
printf("      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
color(6);
printf("      ---------------------------------------------------------------------\n");
printf("              <<<<<<<<<<            BIENVENIDO            >>>>>>>>>>");
printf("\n      ---------------------------------------------------------------------\n");

color(7);
gotoxy(6,13);printf("(1) COMPRAS");
gotoxy(6,14);printf("(2) VENTAS");
gotoxy(6,15);printf("(3) REPORTES");
gotoxy(6,16);printf("(4) SALIR");

color(9);
gotoxy(33,11);printf("                                                                    ");
gotoxy(33,12);printf("||      ||    ||||||||||");
gotoxy(33,13);printf("||      ||    ||      ||");
gotoxy(33,14);printf("||      ||    ||        ");
gotoxy(33,15);printf("||      ||    ||   |||||");
gotoxy(33,16);printf("||      ||    ||      ||");
gotoxy(33,17);printf("||||||||||    ||||||||||");
printf(" \n ");
color(12);
gotoxy(33,19);printf("PROYECTO DE PROGRAMACION ");   
printf(" \n "); 
color(6);
gotoxy(6,21);printf("Ingrese el numero de la opcion : ");
color(7);
scanf("%i",&op);



if(op==1)
{
    goto COMPRAS;
}

else if(op==2)
{
goto VENTAS;   
}
else if(op==3)
{
goto REPORTE;
}
         
else if(op==4)
{
exit(0);
}

else
    {
    goto menu;
    }

COMPRAS:
system("mode con: lines=40");
system("mode con: cols=90");
system("cls");
color(6);
comprast();
Pre:
color(2);
printf("\nDESEA REGRESAR AL MENU S(si) N(Cualquier caracter):");
color(7);
	scanf("%s",&ops);

if (ops=='S' || ops=='s')
   {
   goto menu;
   }

else
   {
   goto Pre;
   }
getch();

VENTAS:
system("cls");
system("mode con: lines=23");
system("mode con: cols=83");
color(2);	
printf("                          ______________________________              \n");
printf("                  _______*                              *_______      \n");
printf("                  *      *      SISTEMA DE CYBER Y      *      *      \n");
printf("                   *     *          PAPELERIA           *     *       \n");
printf("                   *     *______________________________*     *       \n");
printf("                  *_________*                        *_________*      \n");
printf("      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
color(6);
printf("      ---------------------------------------------------------------------\n");
printf("              <<<<<<<<<<              VENTAS             >>>>>>>>>>");
printf("\n      ---------------------------------------------------------------------\n");

color(7);
gotoxy(6,13);printf("(1) VENTA DE SUMINISTROS");
gotoxy(6,14);printf("(2) ALQUILER DE EQUIPOS");
gotoxy(6,15);printf("(3) REGRESAR");


color(3);
gotoxy(33,11);printf("                                                                    ");
gotoxy(33,12);printf("||      ||    ||||||||||");
gotoxy(33,13);printf("||      ||    ||      ||");
gotoxy(33,14);printf("||      ||    ||        ");
gotoxy(33,15);printf("||      ||    ||   |||||");
gotoxy(33,16);printf("||      ||    ||      ||");
gotoxy(33,17);printf("||||||||||    ||||||||||");
printf(" \n ");
color(12);
gotoxy(33,19);printf("PROYECTO DE PROGRAMACION ");   
printf(" \n "); 
color(6);
gotoxy(6,21);printf("Ingrese el numero de la opcion : ");
color(7);
scanf("%i",&op);

if(op==1)
{
    goto SUMI;
}

else if(op==2)
{
goto EQUI;   
}

else if(op==3)
{
goto menu;
}

else
    {
    goto VENTAS;
    }
getch();


SUMI:
system("mode con: lines=65");
system("mode con: cols=90");
system("cls");
color(6);
sumini();
Pre2:
color(2);
printf("\nDESEA REGRESAR AL MENU S(si) N(Cualquier caracter):");
color(7);
    scanf("%s",&ops);

if (ops=='S' || ops=='s')
   {
   goto VENTAS;
   }

else
   {
   goto Pre2;
   }
getch();
	
	
EQUI:
system("mode con: lines=30");
system("mode con: cols=55");
system("cls");
color(6);
aequi();
Pre3:
color(2);
printf("\n\nDESEA REGRESAR AL MENU S(si) N(Cualquier caracter):");
color(7);
scanf("%s",&ops);

if (ops=='S' || ops=='s')
   {
   goto VENTAS;
   }

else
   {
   goto Pre3;
   }
getch();



REPORTE:
system("cls");
system("mode con: lines=23");
system("mode con: cols=83");
color(2);	
printf("                          ______________________________              \n");
printf("                  _______*                              *_______      \n");
printf("                  *      *      SISTEMA DE CYBER Y      *      *      \n");
printf("                   *     *          PAPELERIA           *     *       \n");
printf("                   *     *______________________________*     *       \n");
printf("                  *_________*                        *_________*      \n");
printf("      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
color(6);
printf("      ---------------------------------------------------------------------\n");
printf("              <<<<<<<<<<            REPORTES             >>>>>>>>>>");
printf("\n      ---------------------------------------------------------------------\n");

color(7);
gotoxy(6,13);printf("(1) REPORTE DE VENTA");
gotoxy(6,14);printf("(2) REPORTE DE INVENTARIO");
gotoxy(6,15);printf("(3) REGRESAR");


color(5);
gotoxy(33,11);printf("                                                                    ");
gotoxy(33,12);printf("||      ||    ||||||||||");
gotoxy(33,13);printf("||      ||    ||      ||");
gotoxy(33,14);printf("||      ||    ||        ");
gotoxy(33,15);printf("||      ||    ||   |||||");
gotoxy(33,16);printf("||      ||    ||      ||");
gotoxy(33,17);printf("||||||||||    ||||||||||");
printf(" \n ");
color(12);
gotoxy(33,19);printf("PROYECTO DE PROGRAMACION ");   
printf(" \n "); 
color(6);
gotoxy(6,21);printf("Ingrese el numero de la opcion : ");
color(7);
scanf("%i",&op);

if(op==1)
{
    goto RV;
}

else if(op==2)
{
goto RI;   
}

else if(op==3)
{
goto menu;
}

else
    {
    goto REPORTE;
    }
getch();


RV:
system("mode con: lines=40");
system("mode con: cols=55");
system("cls");
color(6);
rve();
Pre4:
color(2);
printf("\n\nDESEA REGRESAR AL MENU S(si) N(Cualquier caracter):");
color(7);
scanf("%s",&ops);

if (ops=='S' || ops=='s')
   {
   goto REPORTE;
   }

else
   {
   goto Pre4;
   }
getch();
	
RI:
system("mode con: lines=60");
system("mode con: cols=90");
system("cls");
color(6);
rin();
Pre5:
color(2);
printf("\n\nDESEA REGRESAR AL MENU S(si) N(Cualquier caracter):");
color(7);
scanf("%s",&ops);

if (ops=='S' || ops=='s')
   {
   goto REPORTE;
   }

else
   {
   goto Pre5;
   }
getch();


}

void comprast(){  
	ifstream archivo_entra("modcompra.txt");
	char car;
	while(archivo_entra.get(car))
	cout<<car;
	archivo_entra.close();
}

void sumini(){  
	ifstream archivo_sum("modventasumi.txt");
	char car1;
	while(archivo_sum.get(car1))
	cout<<car1;
	archivo_sum.close();
}

void aequi(){  
	ifstream archivo_ae("modventasequipo.txt");
	char car2;
	while(archivo_ae.get(car2))
	cout<<car2;
	archivo_ae.close();
}

void rve(){  
	ifstream archivo_re("modreporteventa.txt");
	char car3;
	while(archivo_re.get(car3))
	cout<<car3;
	archivo_re.close();
}

void rin(){  
	ifstream archivo_ri("modreporteinventario.txt");
	char car4;
	while(archivo_ri.get(car4))
	cout<<car4;
	archivo_ri.close();
}


/*
//Funcion para el codigo del producto
void codigodelproducto(){  
	ifstream archivo_codigo("codigodelproducto.txt");
	char car1;
	while(archivo_codigo.get(car1))
	cout<<car1;
	archivo_codigo.close();
	cout<<"fin de programa"<<endl;
}

//Funcion de productos
void productos(){  
	ifstream archivo_prod("producto.txt");
	char car2;
	while(archivo_prod.get(car2))
	cout<<car2;
	archivo_prod.close();
	cout<<"fin de programa"<<endl;
}

//Funcion de inventario
void inventario(){  
	ifstream archivo_inv("inventario.txt");
	char car3;
	while(archivo_inv.get(car3))
	cout<<car3;
	archivo_inv.close();
	cout<<"fin de programa"<<endl;
}
*/
