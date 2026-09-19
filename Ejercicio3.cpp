// Copiar el ejercicio 3 debajo del comentario "{ EJERCICIO 3 COPIAR ABAJO }"

void CargarDonut(TStringGrid *m, byte f, byte c, byte nf, byte nc, byte d) {
	if (f < nf) // caso general
	{
		if (c < nc) {
			if (f == 0 || f == nf - 1 || c == 0 || c == nc - 1) {
				m->Cells[c][f] = d;
			}
			else {
				m->Cells[c][f] = 0;
			}

			CargarDonut(m, f, c + 1, nf, nc, d);
		}
		else {
			CargarDonut(m, f + 1, 0, nf, nc, d);
		}
	}
}


//==========================================================================================
// Copiar la llamada del ejercicio 3 debajo del comentario "{ LLAMADA DEL EJERCICIO 3 COPIAR ABAJO}"
	byte m = StrToInt(Edit1->Text);
	byte n = StrToInt(Edit2->Text);
	byte d = StrToInt(Edit3->Text);

	StringGrid1->RowCount = m;
	StringGrid1->ColCount = n;

	CargarDonut(StringGrid1, 0, 0, m, n, d);
