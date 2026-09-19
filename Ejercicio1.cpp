// Copiar el ejercicio 1 debajo del comentario "{ EJERCICIO 1 COPIAR ABAJO }"

void Eliminar(String &x, String z, byte p, byte &pos) {
	if (p <= x.Length()) // caso general
	{
		if (x[p] == z[1]) {
			pos = p;
		}

		Eliminar(x, z, p + 1, pos);
	}
	else // caso base
	{
		if (pos > 0) {
			x.Delete(pos, 1);
		}
	}
}


//==========================================================================================
// Copiar la llamada del ejercicio 1 debajo del comentario "{ LLAMADA DEL EJERCICIO 1 COPIAR ABAJO}"

	String x = Edit1->Text;
	String z = Edit2->Text;

	byte pos = 0;

	Eliminar(x, z, 1, pos);

	Edit3->Text = x;


