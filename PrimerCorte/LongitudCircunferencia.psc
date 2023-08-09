Algoritmo LongitudCircunferencia
	Definir RadioC, LCirc Como Real
	Escribir "Longitud de una circunferencia"
	Escribir ""
	Escribir "Inserta el radio de la circunferencia."
	Leer RadioC
	Mientras RadioC <= 0
		Escribir "Valor inválido."
		Leer RadioC
	FinMientras
	LCirc=2*Pi*RadioC
	Imprimir "La longitud de la circunferencia es " LCirc "."
FinAlgoritmo
