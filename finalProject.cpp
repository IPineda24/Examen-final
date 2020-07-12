#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
//funcion que muestra el total de toda la compra 
Totalfinal(float a){
 
cout<<"--->pago total------------------------------------------------$"<<a<<endl;

}



//funcion para calcular el total segun la cantidad de productos
Calc(string products[],float price[],int nss[],int product_cant){
    float total=0;
//mostrar los productos obtenidos 
for (int i = 0; i <= product_cant -1; i++)
 {    float sum=price[i]*nss[i]; //iterando por cada parte del arreglo. multiplicar el precio por unidad por el numero de productos.
 total=total+sum;
     cout<<"->producto: "<<products[i]<<endl;
     cout<<"->unidades "<<nss[i]<<endl;
     cout<<"->precio unidad $"<< price[i]<<endl;
     cout<<"->total $"<<sum<<endl;
     cout<<"----------------------------------------------------------------------"<<endl;
}

Totalfinal(total);



}



//funcion que toma los datos de los productos 
Productos(int product_cant){

string products[100];
float price[100];
int nss[100];
//capturar productos 
for (int i = 0; i <=product_cant -1; i++)
{
     string productuc1;
    float price1;
    int d;
    cout<<"nombre del producto "<<i+1<<endl;
   cin>> productuc1;
   products[i]= productuc1;
     cout<<"precio del: "<<productuc1<<endl;
   cin>> price1;
    price[i]=price1;
     cout<<"cuantas unidades de: "<<productuc1<<"  llevara? "<<endl;
   cin>>d;
   nss[i]=d;
}
//pasar a la siguiente funcion dandole los datos 
Calc(products,price,nss,product_cant);

}



int main() { 

cout<<"EXAMEN Final irvin pineda "<<endl;
cout<<"Ingrese la cantidad de cuantos productos ingresara"<<endl;
int product_cant;
cin>>product_cant;
  
 Productos(product_cant);//llamar funcion 

}