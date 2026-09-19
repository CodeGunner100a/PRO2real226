// Copiar el ejercicio 2 debajo del comentario "{ EJERCICIO 2 COPIAR ABAJO }"

// EJERCICIO 2
//2) Proceso para rotar una posición a derecha.
//
//V = [3, 7, 6, 5, 4, 3]   n = 5
//=> V = [3, 7, 6, 5, 4]



void RotarDer(TStringGrid *v, byte p, String ult) {
	if (p > 1) // caso general
	{
		v->Cells[p - 1][0] = v->Cells[p - 2][0];

		RotarDer(v, p - 1, ult);
	}
	else // caso base
	{
		v->Cells[0][0] = ult;
	}
}

//==========================================================================================
// Copiar la llamada del ejercicio 2 debajo del comentario "{ LLAMADA DEL EJERCICIO 2 COPIAR ABAJO}"
	byte n = StringGrid1->ColCount;

	String ult = StringGrid1->Cells[n - 1][0];

	RotarDer(StringGrid1, n, ult);
