Algoritmo VolCilindro
	Definir Radio, Altura, Volumen Como Real
	Imprimir "Algoritmo para volumen de un cilindro"
	Imprimir ""
	Imprimir "Escriba el radio."
	Leer Radio
	Mientras Radio <= 0
		Escribir "Valor inválido."
		Leer Radio
	FinMientras
	Imprimir "Escriba la altura."
	Leer Altura
	Mientras Altura <= 0
		Escribir "Valor inválido."
		Leer Altura
	FinMientras
	Volumen=Radio^2*Pi*Altura
	Imprimir "El volumen del cubo es " Volumen "."
FinAlgoritmo

