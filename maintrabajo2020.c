struct TUsuario {
	char nombre[50];
	char contrasena[50];
	char ntarjeta[16];
	int nentradas;
};

struct TAux {
	char nombre[50];
	char contrasena[50];
	char cuentabancaria[25];
};

void main() {
	int opcion, comp1, k = 0, i, auxx = 0, nusu = 0, nentradas, pin;
	float precio = 7.75;//precio por entrada
	char cartelera, comentario[200];
	FILE * Comedia;
	FILE * Accion;
	FILE * Terror;
	FILE * Romance;
	FILE * Infantil;
	FILE*Usuarios;
	errno_t error;
	struct TUsuario usu[NUMUSUARIOS];
	struct TAux aux;
	//reloj
	time_t tiempo;
	char cad[80];
	struct tm * ptiempo;

	while (1) {
		fopen_s(&Usuarios, "usuarios.txt", "r");
		fscanf_s(Usuarios, "%d", &nusu);//Lee del fichero el numero de usuarios
		if (nusu != 0) {//Si no es 0, lee el fichero completo
			for (i = 0; i < nusu; i++) {
				fscanf_s(Usuarios, "%s\t", usu[i].nombre, 50);
				fscanf_s(Usuarios, "%s\t", usu[i].contrasena, 50);
				fscanf_s(Usuarios, "%s\t", usu[i].ntarjeta, 25);
				fscanf_s(Usuarios, "%d\n", &usu[i].nentradas);
			}
		}
		fclose(Usuarios);
		error = fopen_s(&Comedia, "Comedia.txt", "r");
		fopen_s(&Accion, "Accion.txt", "r");
		fopen_s(&Terror, "Terror.txt", "r");
		fopen_s(&Romance, "Romance.txt", "r");
		fopen_s(&Infantil, "Infantil.txt", "r");

		printf("	BIENVENIDO A CINES BARTOLO S.L.	 \n\n");
		
		//reloj
		time( &tiempo );
		
		ptiempo = localtime( &tiempo );
		strftime(cad,80,"%x  -  %I:%M %p", ptiempo);
		printf("\n Fecha y Hora :   %s  \n\n", cad );
		
		printf(" 1 - Cartelera\n");
		printf(" 2 - Registrarse\n");
		printf(" 3 - Atenci\242n al cliente\n");
		printf(" 4 - Contacto\n");
		printf(" 5 - Avisos legales\n");
		printf(" 6 - Empleados\n");
		printf(" 7 - Salir \n");



		opcion = Pediropcion();

		switch (opcion) {
		case 1:
			system("cls");
			printf("Seleccione g\202nero:\n 1-Comedia\n 2-Acci\242n\n 3-Terror\n 4-Romace\n 5-Infantil\n Si quieres salir pulsa cualquier otra letra\n");
			switch (Pediropcion()) {
			case 1:
				system("cls");
				while ((cartelera = fgetc(Comedia)) != EOF) {//Imprimimos el fichero entero
					printf("%c", cartelera);
				}
				printf("\n");
				switch (Pediropcion()) {
				case 1:
					printf("Has elegido Ted\n");
					comprarentrada("PantallaTed.txt");
					break;
				case 2:
					printf("Has elegido Deadpool\n");
					comprarentrada("PantallaDeadpool.txt");
					break;
				case 3:
					printf("Has elegido Supersalidos\n");
					comprarentrada("PantallaSupersalidos.txt");
					break;
				case 4:
					printf("Has elegido El Dictador\n");
					comprarentrada("PantallaDictador.txt");
					break;
				case 5:
					printf("Has elegido Primos\n");
					comprarentrada("PantallaPrimos.txt");
					break;
				}
				break;
			case 2:
				system("cls");
				while ((cartelera = fgetc(Accion)) != EOF) {
					printf("%c", cartelera);
				}
				printf("\n");
				switch (Pediropcion()) {
				case 1:
					printf("Has elegido Los Vengadores\n");
					comprarentrada("PantallaVengadores.txt");
					break;
				case 2:
					printf("Has elegido Star Wars\n");
					comprarentrada("PantallaStarWars.txt");
					break;
				case 3:
					printf("Has elegido Batman Begins\n");
					comprarentrada("PantallaBatman.txt");
					break;
				case 4:
					printf("Has elegido Indiana Jones\n");
					comprarentrada("PantallaIndianaJones.txt");
					break;
				case 5:
					printf("Has elegido X-Men\n");
					comprarentrada("PantallaXmen.txt");
					break;
				case 6:
					printf("Has elegido La Aparici\242n de Hambrona\n");
					comprarentrada("PantallaHambrona.txt");
					break;
				case 7:
					printf("Has elegido Gladiator\n");
					comprarentrada("PantallaGladiator.txt");
					break;
				}
				break;
			case 3:
				system("cls");
				while ((cartelera = fgetc(Terror)) != EOF) {
					printf("%c", cartelera);
				}
				printf("\n");
				switch (Pediropcion()) {
				case 1:
					printf("Has elegido IT\n");
					comprarentrada("PantallaIt.txt");
					break;
				case 2:
					printf("Has elegido El Suspenso\n");
					comprarentrada("PantallaSuspenso.txt");
					break;
				case 3:
					printf("Has elegido Insidious\n");
					comprarentrada("PantallaInsidious.txt");
					break;
				case 4:
					printf("Has elegido La aparici\242n de Mr.Charles\n");
					comprarentrada("PantallaMrCharles.txt");
					break;
				case 5:
					printf("Has elegido El resplandor\n");
					comprarentrada("PantallaResplandor.txt");
					break;
				}
				break;
			case 4:
				system("cls");
				while ((cartelera = fgetc(Romance)) != EOF) {
					printf("%c", cartelera);
				}
				printf("\n");
				switch (Pediropcion()) {
				case 1:
					printf("Has elegido El diario de Noah\n");
					comprarentrada("PantallaNoah.txt");
					break;
				case 2:
					printf("Has elegido Titanic\n");
					comprarentrada("PantallaTitanic.txt");
					break;
				case 3:
					printf("Has elegido Casablanca\n");
					comprarentrada("PantallaCasablanca.txt");
					break;
				case 4:
					printf("Has elegido Dirty Dancing\n");
					comprarentrada("PantallaDirtyDancing.txt");
					break;
				case 5:
					printf("Has elegido Una tarde de \"Qu\241mica\",\n");
					comprarentrada("PantallaQuimica.txt");
					break;
				}
				break;
			case 5:
				system("cls");
				while ((cartelera = fgetc(Infantil)) != EOF) {
					printf("%c", cartelera);
				}
				printf("\n");
				switch (Pediropcion()) {
				case 1:
					printf("Has elegido El viaje de Bartolito\n");
					comprarentrada("PantallaBartolo.txt");
					break;
				case 2:
					printf("Has elegido Up\n");
					comprarentrada("PantallaUp.txt");
					break;
				case 3:
					printf("Has elegido Toy story\n");
					comprarentrada("PantallaToy.txt");
					break;
				case 4:
					printf("Has elegido Shrek\n");
					comprarentrada("PantallaShrek.txt");
					break;
				case 5:
					printf("Has elegido WALL.E\n");
					comprarentrada("PantallaWALLe.txt");
					break;
				case 6:
					printf("Has elegido Frozen\n");
					comprarentrada("PantallaFrozen.txt");
					break;
				}
				break;

			}
			break;
		case 2:
			system("cls");
			printf("Para registrarse introduzca los siguientes datos\n");
			do {
				printf("Introduzca su nombre de usuario\n");
				scanf_s("%s", &aux.nombre, 50);
				getchar();
				for (k = 0; k < nusu; k++) {
					comp1 = strcmp(aux.nombre, usu[k].nombre); //Compara entre todos los usuarios
					if (comp1 == 0) {
						break;
					}
				}
				if (comp1 != 0) {//Si no hay nadie registrado con ese nombre
					if (nusu == NUMUSUARIOS) {//Si el numero de usuarios es igual al numero maximo de ellos
						printf("NO SE PUEDEN REGISTRAR MAS USUARIOS\n");
					}
					else {
						strcpy_s(usu[nusu].nombre, 50, aux.nombre); //guarda el nombre nuevo en usuarios
						printf("Introduzca su contrasena\n");
						scanf_s("%s", &usu[nusu].contrasena, 50);
						printf("Introduzca su numero de tarjeta\n");
						scanf_s("%s", &usu[nusu].ntarjeta, 25);
						printf("ha sido registrado como %s con contrase\244a %s y n\243mero de cuenta %s\n", usu[nusu].nombre, usu[nusu].contrasena, usu[nusu].ntarjeta);
						nusu++;//Como se ha registrado un usuarios aumentamos uno el numero de usuarios
					}
				}
				else {
					printf("Ya existe un usuario con ese nombre, intente con otro\n");
				}
			} while (comp1 == 0);//Se repite mientras que se introduzcan nombres ya registrado
			error = fopen_s(&Usuarios, "usuarios.txt", "w");//Error para escribir en el fichero
			if (error == 0) {//Si no hay error
				printf("Guardando datos...\n");
			}
			else {//Si hay error
				printf("Ha habido un error %d para guardar los datos.\n", error);
				return; // return sale del programa
			}
			fprintf(Usuarios, "%d\n", nusu);//Imprime el numero de usuarios alcanzado
			usu[nusu - 1].nentradas = 0;
			for (i = 0; i < nusu; i++) {//En un bucle va escribiendo los usuarios que se han registrado antes de salir
				fprintf(Usuarios, "%s\t%s\t%s\t%d\n", usu[i].nombre, usu[i].contrasena, usu[i].ntarjeta, usu[i].nentradas);
			}
			fclose(Usuarios);
			break;
		case 3:

			system("cls");
			printf("Seleccione una opci\242n:\n 1-Contactar por un problema\n 2-Dar su opini\242n\n ");
			switch (Pediropcion()) {
			case 1:
				system("cls");
				printf("En caso de tener alg\243n problema contacte con el n\243mero de tel\202fono 658070970\n");
				break;
			case 2:
				system("cls");
				printf("D\202janos tu opinion\n");
				getchar();
				gets(comentario);
				FILE*Comentarios;
				fopen_s(&Comentarios, "comentarios.txt", "a");//guardamos los comentarios en un fichero para mejorar.
				fprintf(Comentarios, "%s\n", comentario);
				fclose(Comentarios);
				printf("Su comentario se ha enviado correctamente, gracias por ayudarnos a mejorar\n");
				break;
			}
			break;
		case 4:
			printf(" Ubicaci\242n:\n   -La Rotonda, Tres Cantos\n   -Avda. Doctor Garc\241a Tapia 220, Moratalaz\n   -C/ Anacleto Agente Secreto 22, Rivas Vaciamadrid\n");
			printf(" N\243mero de contacto: 605926055\n");
			break;
		case 5:
			printf("Cines Bartolo se compromete a adoptar una pol\241tica de confidencialidad, con el objeto de proteger la privacidad de la informaci\242n personal obtenida a trav\202s de los comentarios y sugerencias de los usuarios. A estos efectos, usted garantiza la autenticidad de todos aquellos datos que comunique como consecuencia de la cumplimentaci\242n de los formularios necesarios para el acceso a todos los contenidos del Portal. El usuario se compromete a actuar en forma responsable en este sitio y a tratar a otros visitantes con respeto. En caso contrario no ser\240n publicados los comentarios por alterar las normas del Portal.");
			break;

		case 6:
			printf("Introduzca su nombre de usuario\n");//reseteo de los ficheros
			scanf_s("%s", &aux.nombre, 50);
			if (strcmp(aux.nombre, "Bartolo") == 0) {//solo entra con ese usuario
				printf("Bienvenido %s\n", aux.nombre, 50);
				printf("Introduzca su contrase\244a\n");
				scanf_s("%d", &pin);
				getchar();
				if (pin == 9876) {
					printf("\250Desea resetear? S-si N-no\n");
					switch (Pedirchar()) {
					case 's':
					case 'S':
						resetusuarios();
						resetpantalla("PantallaTed.txt");
						resetpantalla("PantallaDeadpool.txt");
						resetpantalla("PantallaSupersalidos.txt");
						resetpantalla("PantallaDictador.txt");
						resetpantalla("PantallaPrimos.txt");
						resetpantalla("PantallaVengadores.txt");
						resetpantalla("PantallaStarWars.txt");
						resetpantalla("PantallaBatman.txt");
						resetpantalla("PantallaIndianaJones.txt");
						resetpantalla("PantallaXmen.txt");
						resetpantalla("PantallaHambrona.txt");
						resetpantalla("PantallaGladiator.txt");
						resetpantalla("PantallaIt.txt");
						resetpantalla("PantallaSuspenso.txt");
						resetpantalla("PantallaInsidious.txt");
						resetpantalla("PantallaMrCharles.txt");
						resetpantalla("PantallaResplandor.txt");
						resetpantalla("PantallaNoah.txt");
						resetpantalla("PantallaTitanic.txt");
						resetpantalla("PantallaCasablanca.txt");
						resetpantalla("PantallaDirtyDancing.txt");
						resetpantalla("PantallaQuimica.txt");
						resetpantalla("PantallaBartolo.txt");
						resetpantalla("PantallaUp.txt");
						resetpantalla("PantallaToy.txt");
						resetpantalla("PantallaShrek.txt");
						resetpantalla("PantallaWALLe.txt");
						resetpantalla("PantallaFrozen.txt");
						break;
					case'n':
					case'N':
						printf("Operaci\242n cancelada\n");
						break;
					default:
						printf("opci\242n no v\240lida\n");
						break;
					}
				}
				else {
					printf("Contrase\244a incorrecta\n");
				}
			}
			else {
				printf("No tienes acceso\n");
			}
			break;
		case 7:
			getchar();
			printf("\250Est\240 seguro de querer salir?\n S-Si\t N-No\n");
			switch (Pedirchar()) {
			case 's':
			case 'S':
				printf("Don bartolo os desea un buen d\241a\n");
				system("pause");
				return;
			case 'n':
			case 'N':
				printf("Perfess\n");
				break;
			}
			break;
		default:
			printf("opci\242n no valida\n");
			break;

			fclose(Accion);
			fclose(Comedia);
			fclose(Romance);
			fclose(Terror);
			fclose(Infantil);

		}
		getchar();
		system("pause");
		system("cls");

	}
}
