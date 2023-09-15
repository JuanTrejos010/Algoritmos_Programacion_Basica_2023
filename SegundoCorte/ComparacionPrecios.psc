Algoritmo ComparacionPrecios
	Definir NombreProducto Como Caracter
	Definir Precios, Sumatoria, Promedio Como Real
	Dimension Precios[3]
	Escribir "¿Qué producto desea comparar?"
	Leer NombreProducto
	Escribir ""
	Escribir "Precios (en euros)"
	Para Iteracion=1 Hasta 3 Con Paso 1
		Escribir "Precio " Iteracion
		Leer Precios[Iteracion]
		Sumatoria=Sumatoria+Precios[Iteracion]
	FinPara
	Escribir ""
	Escribir ""
	Escribir "Los precios del producto " NombreProducto " son: "
	Para Iteracion=1 Hasta 3 Con Paso 1
		Escribir Sin Saltar Precios[Iteracion] " | "
	FinPara
	Promedio=REDON(Sumatoria/3)
	Escribir ""
	Escribir "El promedio de precios es de " Promedio "."
FinAlgoritmo