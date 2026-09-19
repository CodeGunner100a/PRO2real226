// Copiar el ejercicio 1 debajo del comentario "{ EJERCICIO 1 COPIAR ABAJO }"

void Eliminar(String &x, String z, byte p) {
	if (p <= x.Length()) // caso general
	{
		if (x.SubString(p, z.Length()) == z && (p == 1 || x[p - 1] == ' ') &&
			(p + z.Length() > x.Length() || x[p + z.Length()] == ' ')) {

			if (p == 1) {
				x.Delete(p, z.Length() + 1);
			}
			else {
				x.Delete(p - 1, z.Length() + 1);
			}
		}
		else {
			Eliminar(x, z, p + 1);
		}
	}
}


//==========================================================================================
// Copiar la llamada del ejercicio 1 debajo del comentario "{ LLAMADA DEL EJERCICIO 1 COPIAR ABAJO}"

	String x = Edit1->Text;
	String z = Edit2->Text;

	Eliminar(x, z, 1);

	Edit3->Text = x;


