#include <iostream>
#include <math.h>

using namespace std;

int main(){
	 
	 int opcion;
	 int miedo = 0;
	 int res;
	 
	do{
	setlocale(LC_ALL, "");
	cout << "�rase una vez un hombre que ten�a dos hijos totalmente distintos. Pedro, el mayor, era un chico listo y responsable, pero muy miedoso. En cambio su hermano peque�o, Juan, jam�s ten�a miedo a nada, as� que en la comarca todos le llamaba Juan sin miedo. A Juan no le daban miedo las tormentas, ni los ruidos extra�os, ni escuchar cuentos de monstruos en la cama. El miedo no exist�a para �l. A medida que iba creciendo, cada vez ten�a m�s curiosidad sobre qu� era sentir miedo porque �l nunca hab�a tenido esa sensaci�n.Un d�a le dijo a su familia que se iba una temporada para ver si consegu�a descubrir lo que era el miedo. Sus padres intentaron imped�rselo, pero fue imposible. Juan era muy cabezota y estaba decidido a lanzarse a la aventura." << endl;
	cout << "\n AYUDA A JUAN A DESCUBRIR QUE ES SENTIR MIEDO" << endl;
	cout << "\n--- Men� Principal ---" << endl;
    cout << "1. viajar a la cueva de las sombras" << endl;
    cout << "2. va al muelle y busca un barco" << endl;
    cout << "3. se adentra al bosque siniestro" << endl;
    cout << "4. se encamina a la comarca" << endl;
    cout << "5. Salir del programa" << endl;
	cout << "nuvel de miedo:"<< miedo <<"%" <<endl;
    cout << "Elige una acci�n: ";
    cin>>opcion;
	
	 switch (opcion) {
            case 1://submenu 1
            	cout << "\n--- viajar a la cueva de las sombras ---" << endl;
            	res=miedo+25;
            	cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                cout << "para llegar a la cueva tiene que decidirse por 3 caminos" << endl;
                cout << "1. el sendero de la soledades perdidas" << endl;
                cout << "2. el camino de la desesperanza del corazon" << endl;
                cout << "3. el desierto infinito" << endl;
                cout << "4. Salir del programa" << endl;
                int decision1;
                cin >> decision1;
                switch (decision1){
                	case 1://sub menu 1.1
                        cout << "\n--- el sendero de la soledades perdidas ---" << endl;
                        res=miedo+50;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "durante el camino no escucha ni un solo ruido, caminando encuentra una sombra que le indica " << endl;
                        cout << "1. quedarse en su soledad infita" << endl;
                        cout << "2. continuar para encontar la cueva" << endl;
                        cout << "3. perderse dentro del cendero" << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1://sub menu 1.2
                        	    cout << "\n--- quedarse en su soledad infita ---" << endl;
                        	    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "reflexiona que vivir es un cumulo de sentimientos,entonces, decide irse,  pero la sombra que se aparece no lo deja irse." << endl;
                                cout << "1. luchar contra la sombra" << endl;
                                cout << "2. ser mas astuto que la sombra" << endl;
                                cout << "3. llorar por no encontar una solucion" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- luchar contra la sombra ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "pierde, y siente un temor que recorre cada centimetro de su piel y termina en la desolacion y la congoja" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ser mas astuto---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "la enga�a pero siente miedo si es que lo encuentra" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- llorar por no encontar una soluci�n---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "tiene sentimientos de impotencia" << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opci�n no v�lida. Volviendo al inicio.\n";										                                           
								}
                                break;
                            case 2://sub menu 1.2
							    cout << "\n--- continuar para encontar la cueva ---" << endl;
							    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "prosigue su camino, hasta divisar la cueva" << endl;
                                cout << "1. camina y entra en la cueva" << endl;
                                cout << "2.  se sienta y espera" << endl;
                                cout << "3. corre se tropiesa y cae" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;
								switch (decision2){
									case 1:
									    cout << "\n--- camina y entra en la cueva---" << endl;
									    res=miedo+96;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al entrar en la cueva encuentra lo mas horrible que jamas habia imaginado, y muere de miedo" << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- se sienta y espera---" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "sentado ve a lo lejos un moustro de sin cabeza, con miedo se levanta y se regresa a su casa" << endl;
									    break;
									case 3:
									    cout << "\n--- corre se tropiesa y cae---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se rompe una pierna y el miedo le arranaca una lagrima, por que sabe que ya no podra regresar" << endl;
									    break;
									case 4:
										cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
									    break;									    
								}    
                        		break;
                        	case 3:
                        		cout << "\n--- perderse en el sendero---" << endl;
							    res=miedo+40;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "perdido y sin ubicaci�n trata de salir a como de lugar" << endl;
                                cout << "1. segui su instinto de supervivenc�a" << endl;
                                cout << "2. sigue el sendero " << endl;
                                cout << "3. va dejando marcas en los arboles" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
                                switch (decision3){
                                	case 1:
                                		cout << "\n--- segui su instinto de supervivenc�a---" << endl;
									    res=miedo+50;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "logra salir" << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- sigue el sendero---" << endl;
									    res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "el sendero es un camino circular y nunca encuentra salida" << endl;
									    break;
									case 3:
									    cout << "\n--- va dejando marcas en los arboles---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se da cuenta  que no encuentra salida y decide morir perdido en el sndero" << endl;
									    break;	
								}                        		                        		
                        		break;								
						}
                        break;
                    case 2://sub menu 1.2                	    
                        cout << "\n--- el camino de la desesperanza del corazon ---" << endl;
                        res=miedo+50;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "durante el camino empieza a sentir una soledad fria en el pecho, y decide" << endl;
                        cout << "1. sentarse y reflexionar" << endl;
                        cout << "2. correr para salir de ah�" << endl;
                        cout << "3. empieza a delirar" << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        switch (decision2){
                        	case 1:
                        		cout << "\n--- sentarse y reflexionar ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;                        		
                                cout << "sentado recuerda a su familia,y la cabeza comienza a dar vueltas" << endl;
                                cout << "1. retornar " << endl;
                                cout << "2. llega una luchuza con una carta" << endl;
                                cout << "3. decide ya no continuar" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- retornar ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "siente miedo de perder a su familia y regresa a su hogar con temor de no encontrarlos" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- llega una luchuza con una carta ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "en la carta, un amigo le cuenta que su familia murio por un huracan; solo, triste y muerto de miedo por no tener nada se quita la vida" << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- decide ya no continuar ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "pierde toda esperanza de segir" << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;	
								}
                        		break;
                        	case 2:
                        		cout << "\n--- correr para salir de ah� ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "sale, y encuentra un minotauro " << endl;
                                cout << "1. se enfrenta al minotauro " << endl;
                                cout << "2. trata de regresar" << endl;
                                cout << "3. toma una roca" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---se enfrenta al minotauro---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "el minotauro desenfunda una espada, y �l sale corriendo por que no desea morrir" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- trata de regresar ---" << endl;
                                    	res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al regresar se da cuenta habia olvidado como era el camino de regreso" << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- toma una roca ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "con la roca en la mano y temblando de temor, avienta la roca y se va corriendo" << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;										
								}                       		
                        		break;
							case 3:
								cout << "\n--- empieza a delirar ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en sus alucinaciones se aparace ante �l un viejo amor que en tiempos pasado adoro a morir " << endl;
                                cout << "1. se acerca a la alucinaci�n" << endl;
                                cout << "2. se da cuenta que es una alucinaci�n" << endl;
                                cout << "3. le reprocha lo vivido" << endl;
                                cout << "4. salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
								switch (decision3){
									case 1:
										cout << "\n---se acerca a la alucinaci�n---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "trata de abrazarla pero por mas que intenta no puede, y su miedo de desborda" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- se da cuenta que es una alucinaci�n ---" << endl;
                                    	res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "no le toma importancia y se va " << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---le reprocha lo vivido---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "con lagrimas en los ojos le recuerda cada instante vivido" << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;																	    
								}							
								break;     										
						}
                        break;
                    case 3://sub menu 1.3  
                    	cout << "\n--- el desierto infinito---" << endl;
                    	res=miedo+35;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "el sol abrazabasor de la tarde lo orillaba a protejerse y continuar el camino" << endl;
                        cout << "1. buscar con que protejerce" << endl;
                        cout << "2. no preocuparse del sol y seguir " << endl;
                        cout << "3. buscar un medio de tranporte " << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision3;
                        cin >> decision3;
                        switch (decision3){
                        	case 1:
                        		cout << "\n--- buscar con que protejerce ---" << endl;
                        	    res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "caminando encuentra un turbante, pero al acercarse, se da cuenta que esta protegido por vivoras, tarantulas y alacranes, cada uno de ellos proteje un turbante ." << endl;
                                cout << "1. tomarlo donde lo protegen los alacranes" << endl;
                                cout << "2. tomarlo donde lo protegen las vivoras" << endl;
                                cout << "3. tomarlo donde lo protegen las tarantulas" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- tomarlo donde lo protegen los alacranes ---" << endl;
                                		res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se aproxima, pero no se percata que un alacran se sube a su pierna, le pica y ahi queda a morir" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- tomarlo donde lo protegen las vivoras---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se aproxima muy rapido y coje el turvante sin que lo muerdan las serpientes; su corazon solo late del miedo que sintio" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- tomarlo donde lo protegen las tarantulas---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "una tarantula salta hac�a el y lo pica, el asustado la quita y se va, pero no llega lejos; el veneno hab�a echo de la suyas" << endl;
										break;
									case 4:
                                        cout << "Fin de la partida" << endl;
										break;
							    }			     
                        		break;
                        	case 2:
                        		cout << "\n--- no preocuparse del sol y seguir ---" << endl;
                        		res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "sigo el camino, pero el sol  y la falta de agua hace que empiece a ver cosas" << endl;
                                cout << "1. ve un oasis " << endl;
                                cout << "2. ve una serpiente gigante" << endl;
                                cout << "3. ve aproximarse un carro " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---ve un oasis ---" << endl;
                                		res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se echa a correr hac�a el oasis, par vever agua, pero cuando creee tomar agua, resulta que es arena y su miedo aumenta al saber que no va a encontrar agua" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ve una serpiente gigante ---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "ve que se abalanza hac�a el y lo unico que logra hacer es cubrirse con las manos, despues de un rato se da cuenta que solo alucino." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---ve aproximarse un carro ---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "reslta que el carro es real, lo invitan a subir y se va." << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;										
								}
							break;
						    case 3:
						    	cout << "\n--- buscar un medio de tranporte ---" << endl;
                        		res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "caminando encuentra 3 medios de transporte, pero estan condicionados." << endl;
                                cout << "1. primera condici�n par que pueda llevarse un camello es clavarse una navaja en la pierna. " << endl;
                                cout << "2. segunda condici�n es ser mordido por una serpiente, y podra llevarse un carro. " << endl;
                                cout << "3. tercera condici�n es cortarse las venas. " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3; 
								switch (decision3){
									case 1:
                                		cout << "\n---primera condici�n par que pueda llevarse un camello es clavarse una navaja en la pierna. ---" << endl;
                                		res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se clava la navaja y el dolor lo hace sentir un miedo que rrecorre su cuerpo." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---segunda condici�n es ser mordido por una serpiente, y podra llevarse un carro.---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al morderlo la serpiente siente como el veneno pasa por cada vena, empieza a sudar y a tener miedo por que no tiene antidoto; muere." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---tercera condici�n es cortarse las venas.---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "la sangre brota por sus brazos, siente debilidad, la vista le falla y el miedo apparece." << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;										
								}
						    	break;									
						}
				    	   break; 				    	
					case 4:
						cout << "3. Salir del programa" << endl;
					   break;   
				}
				break;                
            case 2:
			    cout << "\n--- va al muelle y busca un barco ---" << endl;
			    res=miedo+10;
            	cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                cout << "encuentra un barco que sarpa para ruman�a y otro para eel triangulo de las bermudas" << endl;
                cout << "1. sube al barco de rumania " << endl;
                cout << "2. sube al barco de el triangulo de las bermudas" << endl;
                cout << "3. sube a un barco que se val polo norte." << endl;
                cout << "4. Salir del programa" << endl;
                int decision2;
                cin >> decision2;
				switch (decision2){
                	case 1://sub menu 1.1
                        cout << "\n--- sube al barco de rumania ---" << endl;
                        res=miedo+30;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "se enbarca con la idea de ir a buscar el castillo de Dracula; al llegar a ruman�a busca la ruta mas corta al castillo. " << endl;
                        cout << "1. por las catacumbas de la ciudad." << endl;
                        cout << "2. desde bucares toma un carro." << endl;
                        cout << "3. por el bosque encantado." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1://sub menu 1.2
                        	    cout << "\n--- por las catacumbas de la ciudad ---" << endl;
                        	    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "se cuenta que en las catacumbas existe un pasadizo al castillo;durante el camino encuentra craneos apilados, esqueletos y muchas ratas, pero adelante se encuentra con ." << endl;
                                cout << "1. la entrada secreta al castillo." << endl;
                                cout << "2. un muerto viviente." << endl;
                                cout << "3. un ahujero en el suelo." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- la entrada secreta al castillo. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "entra y encuentra con una oscuridad obsoluta, derepente se encienden unas velas, y suena una campana; de la penunbra sale Dracula que se le avalanza al cuello, con miedo corre y trata de regresar pero es capturado." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- un muerto viviente.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "su asombro es tal, que se paraliza de miedo al ver que se le aproxima; cuando quiere reaccionar ya es tarde, ya esta siendo deborado por el muerto viviente" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- un ahujero en el suelo.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "no se da cuenta, cuando cae es jalado por la presion del agua, trata salir a flote, pero por mas que intenta no logra salir y muere ahogado." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;										                                           
								}
                                break;
                            case 2://sub menu 1.2
							    cout << "\n--- desde bucares toma un carro. ---" << endl;
							    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "desiende del carro y camina a la entrada del castillo, al tocar la puerta se abre y entra en el castillo, y ante �l aparecen 3 puertas, y en cada puerta tiene emblembas, entra a:" << endl;
                                cout << "1. hay emblema de una gillotina" << endl;
                                cout << "2. hay emblema de una bandera roja. " << endl;
                                cout << "3. hay emblema de un murcielago." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;
								switch (decision2){
									case 1:
									    cout << "\n--- hay emblema de una gillotina---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "entra y en el centro de la habitacion encuentra una gillotina y 4 personas con turbantes; se acercan a �l lo toman de las manos y lo incan en la gillotina, ponen su cabeza en la madera; el muerto de miedo pide que lo dejen libre, pero no le hacen caso y lo degollan. " << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- hay emblema de una bandera roja.---" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al entrar encuentra un cuarto con cuadros de torturas de la santa inquicici�n, las ve y se llena de temor tales imagenes." << endl;
									    break;
									case 3:
									    cout << "\n--- hay emblema de un murcielago.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "no se da cuenta pero, esa es la habitaci�n de Dracula; al abrirla con miedo ve a Dracula que voltea y se avalanza contra �l y lo mata" << endl;
									    break;
									case 4:
										cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
									    break;									    
								}    
                        		break;
                        	case 3:
                        		cout << "\n--- por el bosque encantado.---" << endl;
							    res=miedo+35;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "camina por un sendero brumoso que lo va llevando a la cima de la colina donde se encuentra el castillo, subiendo se encuentra " << endl;
                                cout << "1. a Dracula en persona" << endl;
                                cout << "2. un lobo ambriento." << endl;
                                cout << "3. va dejando marcas oles" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
                                switch (decision3){
                                	case 1:
                                		cout << "\n--- segui su instinto de supervivenc�a---" << endl;
									    res=miedo+50;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "logra salir" << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- sigue el sendero---" << endl;
									    res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "el sendero es un camino circular y nunca encuentra salida" << endl;
									    break;
									case 3:
									    cout << "\n--- va dejando marcas en los arboles---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se da cuenta  que no encuentra salida y decide morir perdido en el sndero" << endl;
									    break;	
								}                        		                        		
                        		break;								
						}
                        break;
                    case 2://sub menu 1.2                	    
                        cout << "\n---sube al barco de el triangulo de las bermudas---" << endl;
                        res=miedo+50;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "durante el camino empieza a sentir una soledad fria en el pecho, y decide" << endl;
                        cout << "1. sentarse y reflexionar" << endl;
                        cout << "2. correr para salir de ah�" << endl;
                        cout << "3. empieza a delirar" << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        switch (decision2){
                        	case 1:
                        		cout << "\n--- sentarse y reflexionar ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;                        		
                                cout << "sentado recuerda a su familia,y la cabeza comienza a dar vueltas" << endl;
                                cout << "1. retornar " << endl;
                                cout << "2. llega una luchuza con una carta" << endl;
                                cout << "3. decide ya no continuar" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- retornar ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "siente miedo de perder a su familia y regresa a su hogar con temor de no encontrarlos" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- llega una luchuza con una carta ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "en la carta, un amigo le cuenta que su familia murio por un huracan; solo, triste y muerto de miedo por no tener nada se quita la vida" << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- decide ya no continuar ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "pierde toda esperanza de segir" << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;	
								}
                        		break;
                        	case 2:
                        		cout << "\n--- correr para salir de ah� ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "sale, y encuentra un minotauro " << endl;
                                cout << "1. se enfrenta al minotauro " << endl;
                                cout << "2. trata de regresar" << endl;
                                cout << "3. toma una roca" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---se enfrenta al minotauro---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "el minotauro desenfunda una espada, y �l sale corriendo por que no desea morrir" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- trata de regresar ---" << endl;
                                    	res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al regresar se da cuenta habia olvidado como era el camino de regreso" << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- toma una roca ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "con la roca en la mano y temblando de temor, avienta la roca y se va corriendo" << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;										
								}                       		
                        		break;
							case 3:
								cout << "\n--- empieza a delirar ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en sus alucinaciones se aparace ante �l un viejo amor que en tiempos pasado adoro a morir " << endl;
                                cout << "1. se acerca a la alucinaci�n" << endl;
                                cout << "2. se da cuenta que es una alucinaci�n" << endl;
                                cout << "3. le reprocha lo vivido" << endl;
                                cout << "4. salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
								switch (decision3){
									case 1:
										cout << "\n---se acerca a la alucinaci�n---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "trata de abrazarla pero por mas que intenta no puede, y su miedo de desborda" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- se da cuenta que es una alucinaci�n ---" << endl;
                                    	res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "no le toma importancia y se va " << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---le reprocha lo vivido---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "con lagrimas en los ojos le recuerda cada instante vivido" << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;																	    
								}							
								break;     										
						}
                        break;
                    case 3://sub menu 1.3  
                    	cout << "\n--- sube a un barco que se val polo norte.---" << endl;
                    	res=miedo+35;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "el sol abrazabasor de la tarde lo orillaba a protejerse y continuar el camino" << endl;
                        cout << "1. buscar con que protejerce" << endl;
                        cout << "2. no preocuparse del sol y seguir " << endl;
                        cout << "3. buscar un medio de tranporte " << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision3;
                        cin >> decision3;
                        switch (decision3){
                        	case 1:
                        		cout << "\n--- buscar con que protejerce ---" << endl;
                        	    res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "caminando encuentra un turbante, pero al acercarse, se da cuenta que esta protegido por vivoras, tarantulas y alacranes, cada uno de ellos proteje un turbante ." << endl;
                                cout << "1. tomarlo donde lo protegen los alacranes" << endl;
                                cout << "2. tomarlo donde lo protegen las vivoras" << endl;
                                cout << "3. tomarlo donde lo protegen las tarantulas" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- tomarlo donde lo protegen los alacranes ---" << endl;
                                		res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se aproxima, pero no se percata que un alacran se sube a su pierna, le pica y ahi queda a morir" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- tomarlo donde lo protegen las vivoras---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se aproxima muy rapido y coje el turvante sin que lo muerdan las serpientes; su corazon solo late del miedo que sintio" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- tomarlo donde lo protegen las tarantulas---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "una tarantula salta hac�a el y lo pica, el asustado la quita y se va, pero no llega lejos; el veneno hab�a echo de la suyas" << endl;
										break;
									case 4:
                                        cout << "Fin de la partida" << endl;
										break;
							    }			     
                        		break;
                        	case 2:
                        		cout << "\n--- no preocuparse del sol y seguir ---" << endl;
                        		res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "sigo el camino, pero el sol  y la falta de agua hace que empiece a ver cosas" << endl;
                                cout << "1. ve un oasis " << endl;
                                cout << "2. ve una serpiente gigante" << endl;
                                cout << "3. ve aproximarse un carro " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---ve un oasis ---" << endl;
                                		res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se echa a correr hac�a el oasis, par vever agua, pero cuando creee tomar agua, resulta que es arena y su miedo aumenta al saber que no va a encontrar agua" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ve una serpiente gigante ---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "ve que se abalanza hac�a el y lo unico que logra hacer es cubrirse con las manos, despues de un rato se da cuenta que solo alucino." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---ve aproximarse un carro ---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "reslta que el carro es real, lo invitan a subir y se va." << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;										
								}
							break;
						    case 3:
						    	cout << "\n--- buscar un medio de tranporte ---" << endl;
                        		res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "caminando encuentra 3 medios de transporte, pero estan condicionados." << endl;
                                cout << "1. primera condici�n par que pueda llevarse un camello es clavarse una navaja en la pierna. " << endl;
                                cout << "2. segunda condici�n es ser mordido por una serpiente, y podra llevarse un carro. " << endl;
                                cout << "3. tercera condici�n es cortarse las venas. " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3; 
								switch (decision3){
									case 1:
                                		cout << "\n---primera condici�n par que pueda llevarse un camello es clavarse una navaja en la pierna. ---" << endl;
                                		res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se clava la navaja y el dolor lo hace sentir un miedo que rrecorre su cuerpo." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---segunda condici�n es ser mordido por una serpiente, y podra llevarse un carro.---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al morderlo la serpiente siente como el veneno pasa por cada vena, empieza a sudar y a tener miedo por que no tiene antidoto; muere." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---tercera condici�n es cortarse las venas.---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "la sangre brota por sus brazos, siente debilidad, la vista le falla y el miedo apparece." << endl;                                        						                                		
                                		break;	
                                	default:
                                	    cout<<"fin del juego";
									break;										
								}
						    	break;
									
						}
				    	   break; 
				    	
					case 4:
						cout << "3. Salir del programa" << endl;
					   break;
					   
					    
				}          
                break;
            case 3:
            	cout << "\n---se adentra al bosque siniestro ---" << endl;
                cout << "oscuro camino lleva a las puertas del infierno; asi dice la placa en la entrada del bosque" << endl;
                cout << "1. se adentra sin sudarlo" << endl;
                cout << "2. " << endl;
                cout << "3. Salir del programa" << endl;
                int decision3;
                cin >> decision3;
                break;
            case 4:
            	cout << "\n---se encamina a la comarca ---" << endl;
                cout << "caminando por el bosque encuentra con un choza del cual sal�a humo" << endl;
                cout << "1. Seguir el mapa" << endl;
                cout << "2. Ignorar el mapa" << endl;
                cout << "3. Salir del programa" << endl;
                int decision4;
                cin >> decision4;
                break;
            case 5:
                cout << "�Hasta luego! Gracias por jugar." << endl;
                exit(0);
            default:
                cout << "Opci�n no v�lida. Int�ntalo de nuevo." << endl;
	}
	
	
	}while (opcion != '5' );
	return 0;
}
