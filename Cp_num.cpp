#include <iostream>
#include <math.h>



using namespace std;

	int main()
	{
		float m,a,b,c,d,e,f,g,h;

		a = 1.10010101010;
		b = a + 1;
		c = ( b * a + a ) / b;
		d = ( c * b + b ) / c;
		e = ( d * c + c ) / d;
		f = ( e * d + d ) / e;
		g = ( f * e + e ) / f;
		h = ( g * f + f ) / g;

		m = sqrt((	(b-a)*(b-a)+(c-b)*(c-b)+(d-c)*(d-c)+(e-d)*(e-d)+(f-e)*(f-e)+(g-f)*(g-f)+(h-g)*(h-g) ) / ( a+b+c+d+e+f+g+h ))*0.0001;

				for( a; a < 1000000; a++ )
				{
					for( b; b < 1000000; b++ )
					{
						for( c; c < 1000000; c++ )
						{
							for( d; d < 1000000; d++ )
							{
								for( e; e < 1000000; e++ )
								{
									for( f; f < 1000000; f++ )
									{
										for( g; g < 1000000; g++ )
										{
											for( h; h < 1000000; h++ )
											{
												for( m; m < 1000000; m++ )
												{
				cout << "\ta..:\t" << a << "\tb..:" << b << "\tc..:" << c << "\td..:" << d << "\te..:" << e << "\tf..:" << f << "\tg..:" << g << "\th..:" << h << "\tm.....::" << m;
												}
											}
										}
									}
								}
							}
						}
					}
				}

				
	}
