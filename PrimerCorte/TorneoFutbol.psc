Algoritmo sin_titulo
	Escribir "Torneo de fútbol"
	Escribir ""
	Escribir "Escriba el lugar del torneo."
	Leer LugarTorneo
	Dimension EquiposGrupoA[4]
	Dimension EquiposGrupoB[4]
	Dimension EquiposGrupoC[4]
	Dimension EquiposGrupoD[4]
	Para i<-0 Hasta 3 Hacer
		Escribir "Escriba el equipo " i+1 "."
		Leer EquiposGrupoA[i]
	FinPara
	Para i<-0 Hasta 3 Hacer
		Escribir "Escriba el equipo " i+1 "."
		Leer EquiposGrupoB[i]
	FinPara
	Para i<-0 Hasta 3 Hacer
		Escribir "Escriba el equipo " i+1 "."
		Leer EquiposGrupoC[i]
	FinPara
	Para i<-0 Hasta 3 Hacer
		Escribir "Escriba el equipo " i+1 "."
		Leer EquiposGrupoD[i]
	FinPara
	Borrar Pantalla
	Esperar 2 Milisegundos
	Escribir ""
	Escribir "El torneo se jugará en " LugarTorneo "."
	Escribir "Los equipos del torneo son:"
	Para i<-0 Hasta 3 Hacer
		Escribir EquiposGrupoA[i]
	FinPara
FinAlgoritmo