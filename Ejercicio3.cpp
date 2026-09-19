// Copiar el ejercicio 3 debajo del comentario "{ EJERCICIO 3 COPIAR ABAJO }"

// EJERCICIO 3

void CargarMatriz(TStringGrid *m, byte f, byte c, byte n, int &num) {
	if (f < n) // caso general
	{
		if (c < n)
		{
			if (f + c < n)
			{
				m->Cells[c][f] = ((f + c + 1) * (f + c + 2)) / 2 - f;
			}
			else
			{
				m->Cells[c][f] = "";
			}

			CargarMatriz(m, f, c + 1, n, num);
		}
		else
		{
			CargarMatriz(m, f + 1, 0, n, num);
		}
	}
}


//==========================================================================================
// Copiar la llamada del ejercicio 3 debajo del comentario "{ LLAMADA DEL EJERCICIO 3 COPIAR ABAJO}"
	//
	byte n = StrToInt(Edit1->Text);
	int num = 1;
	StringGrid1->ColCount = n;
	StringGrid1->RowCount = n;
	CargarMatriz(StringGrid1, 0, 0, n, num);
