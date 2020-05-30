#include<stdio.h> 
using namespace std;

float dydt(float y, float t) 
{ 
    return v; 
} 

float dvdt(float v, float t) 
{ 
    return -g; 
} 


float rungeKutta(float x0, float y0, float x, float h , dydt) 
{  
    float k1, k2, k3, k4, k5; 
   
    float y = y0; 
    for (int i=1; i<=n; i++) 
    {  
        k1 = h*dydt(x0, y); 
        k2 = h*dydt(x0 + 0.5*h, y + 0.5*k1); 
        k3 = h*dydt(x0 + 0.5*h, y + 0.5*k2); 
        k4 = h*dydt(x0 + h, y + k3); 
  
        y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);; 
  
        x0 = x0 + h; 
    } 
  
    return y; 
  
    double * suma(double a[2], double b[2]){
        double * c = new double[2];
        c[0] = a[0] + b[0];
        c[1] = a[1] + b[1];
        return c;

    double X[2] = {3.24, -4.333};
        double Y[2] = {6.76, -5.667};
     double * Z = suma(X, Y);

        // Imprimirmos los dos elementos de Z.
        for(int i=0; i<2; i++)
            cout << Z[i] << endl;
        return 0;
    }
