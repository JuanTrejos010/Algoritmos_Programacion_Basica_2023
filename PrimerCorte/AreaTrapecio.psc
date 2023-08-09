Algoritmo AreaTrapecio
	Definir BaseMenor, BaseMayor, Altura, Area Como Real
	Imprimir "Área de un trapecio."
	Imprimir "Escribe la base menor"
	Leer BaseMenor
	Mientras BaseMenor <= 0
		Escribir "Valor inválido."
		Leer BaseMenor
	FinMientras
	Imprimir "Escribe la base mayor"
	Leer BaseMayor
	Mientras BaseMayor <= 0
		Escribir "Valor inválido."
		Leer BaseMayor
	FinMientras
	Mientras BaseMenor==BaseMayor
		Imprimir "Las bases deben ser diferentes. No es un cuadrado o un rectángulo."
		Imprimir "Escribe la base menor"
		Leer BaseMenor
		Mientras BaseMenor <= 0
			Escribir "Valor inválido."
			Leer BaseMenor
		FinMientras
		Imprimir "Escribe la base mayor"
		Leer BaseMayor
		Mientras BaseMayor <= 0
			Escribir "Valor inválido."
			Leer BaseMayor
		FinMientras
	FinMientras
	Imprimir "Escribe la altura"
	Leer Altura
	Area=(BaseMenor+BaseMayor)*Altura/2
	Imprimir "El área del trapecio es " Area "."
FinAlgoritmo
