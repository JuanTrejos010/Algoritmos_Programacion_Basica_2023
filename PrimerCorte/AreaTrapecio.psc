Algoritmo AreaTrapecio
	Definir BaseMenor, BaseMayor, Altura, Area Como Real
	Imprimir "�rea de un trapecio."
	Imprimir "Escribe la base menor"
	Leer BaseMenor
	Mientras BaseMenor <= 0
		Escribir "Valor inv�lido."
		Leer BaseMenor
	FinMientras
	Imprimir "Escribe la base mayor"
	Leer BaseMayor
	Mientras BaseMayor <= 0
		Escribir "Valor inv�lido."
		Leer BaseMayor
	FinMientras
	Mientras BaseMenor==BaseMayor
		Imprimir "Las bases deben ser diferentes. No es un cuadrado o un rect�ngulo."
		Imprimir "Escribe la base menor"
		Leer BaseMenor
		Mientras BaseMenor <= 0
			Escribir "Valor inv�lido."
			Leer BaseMenor
		FinMientras
		Imprimir "Escribe la base mayor"
		Leer BaseMayor
		Mientras BaseMayor <= 0
			Escribir "Valor inv�lido."
			Leer BaseMayor
		FinMientras
	FinMientras
	Imprimir "Escribe la altura"
	Leer Altura
	Area=(BaseMenor+BaseMayor)*Altura/2
	Imprimir "El �rea del trapecio es " Area "."
FinAlgoritmo
