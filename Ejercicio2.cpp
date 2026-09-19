// Copiar el ejercicio 2 debajo del comentario "{ EJERCICIO 2 COPIAR ABAJO }"

byte ContPrim(String x) {
	byte c;

	if (x == "") // caso base
	{
		c = 0;
	}
	else // caso general
	{
		wchar_t z = x[1];
		x.Delete(1, 1);

		c = ContPrim(x);

		if (z == '2' || z == '3' || z == '5' || z == '7') {
			c++;
		}
	}

	return c;
}

void CargarDigVec(TStringGrid *v, String x, byte a, byte b) {
	byte n = b - a + 1;

	if (n > 0) {
		if (x[1] == '2' || x[1] == '3' || x[1] == '5' || x[1] == '7') {
			v->Cells[a][0] = x[1];
			a++;
		}

		x.Delete(1, 1);
		CargarDigVec(v, x, a, b);
	}
}

//==========================================================================================
// Copiar la llamada del ejercicio 2 debajo del comentario "{ LLAMADA DEL EJERCICIO 2 COPIAR ABAJO}"
	String x = Edit1->Text;

	byte n = ContPrim(x);

	CargarDigVec(StringGrid1, x, 0, n - 1);

	StringGrid1->ColCount = n;
	StringGrid1->RowCount = 1;

	Edit3->Text = n;

