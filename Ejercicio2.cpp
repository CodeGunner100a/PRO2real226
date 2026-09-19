// Copiar el ejercicio 2 debajo del comentario "{ EJERCICIO 2 COPIAR ABAJO }"

byte ContVocal(String x) {
	byte c;

	if (x == "") // caso base
	{
		c = 0;
	}
	else // caso general
	{
		wchar_t z = x[1];
		x.Delete(1, 1);

		c = ContVocal(x);

		if (z == 'a' || z == 'e' || z == 'i' || z == 'o' || z == 'u') {
			c++;
		}
	}

	return c;
}

void CargarVocal(TStringGrid *v, String x, byte a, byte b) {
	byte n = b - a + 1;

	if (n > 0) {
		if (x[1] == 'a' || x[1] == 'e' || x[1] == 'i' || x[1] == 'o' ||
			x[1] == 'u') {

			v->Cells[a][0] = x[1];
			a++;
		}

		x.Delete(1, 1);
		CargarVocal(v, x, a, b);
	}
}

//==========================================================================================
// Copiar la llamada del ejercicio 2 debajo del comentario "{ LLAMADA DEL EJERCICIO 2 COPIAR ABAJO}"
String x = Edit1->Text;

	byte n = ContVocal(x);

	CargarVocal(StringGrid1, x, 0, n - 1);

	StringGrid1->ColCount = n;
	StringGrid1->RowCount = 1;

	Edit3->Text = n;
