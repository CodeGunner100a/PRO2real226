// Copiar el ejercicio 1 debajo del comentario "{ EJERCICIO 1 COPIAR ABAJO }"

// EJERCICIO 1
// 1) Función que devuelva la posición de la última
// ocurrencia de un carácter z en una cadena x.
//
// Ej:
// x = "hola laLAs", z = 'a'  => 7

byte UltimaOcurrencia(String x, String z, byte p) {
	byte pos;

	if (p > x.Length()) // caso base
	{
		pos = 0;
	}
	else // caso general
	{
		pos = UltimaOcurrencia(x, z, p + 1);

		if (x[p] == z[1] && pos == 0) {
			pos = p;
		}
	}

	return pos;
}


//==========================================================================================
// Copiar la llamada del ejercicio 1 debajo del comentario "{ LLAMADA DEL EJERCICIO 1 COPIAR ABAJO}"


	String x = Edit1->Text;
	String z = Edit2->Text;

	byte pos = UltimaOcurrencia(x, z, 1);

	Edit3->Text = pos;

