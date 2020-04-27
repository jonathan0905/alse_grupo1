#include<iostream>

using namespace std;

class p
{
	private:
		double X,Y;
	public:
		void pidepuntos(const char n)
		{
			cout << "eje X del punto " << n << ": " << endl;
			cin >> X;
			cout << "eje Y del punto " << n << ": " << endl;
			cin >> Y;
		}
		void puntos(const char n[])
		{
			cout<< "El " << n << " punto es (" << X << "," << Y << ")" <<endl;
		}
		void cambio(double x, double y)
		{
			y=Y;
			x=X;
		}
};

int main ()
{
	double pendiente,X1,X2,Y1,Y2;
	p p1,p2;
	
	p1.pidepuntos('1');
	p2.pidepuntos('2');
	p1.puntos("primer");
	p2.puntos("segundo");
	p1.cambio(X1,Y1);
	p2.cambio(X2,Y2);
	pendiente=(Y2-Y1)/(X2-X1);
	cout<<"La pendiente es: " << pendiente << endl;
	return 0;
}


