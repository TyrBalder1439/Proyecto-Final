#include <iostream>
#include <math.h>

using namespace std;

int main(){
	 
	 int opcion;
	 int miedo = 0;
	 int res;
	 
	do{
	setlocale(LC_ALL, "");
	cout << "\nÉrase una vez un hombre que tenía dos hijos totalmente distintos. Pedro, el mayor, era un chico listo y responsable, pero muy miedoso. En cambio su hermano pequeño, Juan, jamás tenía miedo a nada, así que en la comarca todos le llamaba Juan sin miedo. A Juan no le daban miedo las tormentas, ni los ruidos extraños, ni escuchar cuentos de monstruos en la cama. El miedo no existía para él. A medida que iba creciendo, cada vez tenía más curiosidad sobre qué era sentir miedo porque él nunca había tenido esa sensación.Un día le dijo a su familia que se iba una temporada para ver si conseguía descubrir lo que era el miedo. Sus padres intentaron impedírselo, pero fue imposible. Juan era muy cabezota y estaba decidido a lanzarse a la aventura." << endl;
	cout << "\n AYUDA A JUAN A DESCUBRIR QUE ES SENTIR MIEDO" << endl;
	cout << "\n--- Menú Principal ---" << endl;
    cout << "1. viajar a la cueva de las sombras" << endl;
    cout << "2. va al muelle y busca un barco" << endl;
    cout << "3. se adentra al bosque siniestro" << endl;
    cout << "4. se encamina a la comarca" << endl;
    cout << "5. Salir del programa" << endl;
	cout << "nuvel de miedo:"<< miedo <<"%" <<endl;
    cout << "Elige una acción: ";
    cin>>opcion;
	
	 switch (opcion) {
            case 1:
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
                	case 1:
                        cout << "\n--- el sendero de la soledades perdidas ---" << endl;
                        res=miedo+50;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "durante el camino no escucha ni un solo ruido, caminando encuentra una sombra que le indica " << endl;
                        cout << "1. quedarse en su soledad infita" << endl;
                        cout << "2. continuar para encontar la cueva" << endl;
                        cout << "3. perderse dentro del sendero" << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1:
                        	    cout << "\n--- quedarse en su soledad infita ---" << endl;
                        	    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "reflexiona que vivir es un cumulo de sentimientos,entonces decide irse,  pero la sombra que se aparece no lo deja irse." << endl;
                                cout << "1. luchar contra la sombra" << endl;
                                cout << "2. ser mas astuto que la sombra" << endl;
                                cout << "3. llorar por no encontar una solucion" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- luchar contra la sombra ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "pierde, y siente un temor que recorre cada centimetro de su piel y termina en la desolacion y la congoja" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ser mas astuto---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "la engaña pero siente miedo si es que lo encuentra" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- llorar por no encontar una solución---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "tiene sentimientos de impotencia, y ello le da un miedo escalofriante." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										                                           
								}
                                break;
                            case 2:
							    cout << "\n--- continuar para encontar la cueva ---" << endl;
							    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "prosigue su camino, hasta divisar la cueva" << endl;
                                cout << "1. camina y entra en la cueva" << endl;
                                cout << "2. se sienta y espera" << endl;
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
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										    
								}    
                        		break;
                        	case 3:
                        		cout << "\n--- perderse en el sendero---" << endl;
							    res=miedo+40;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "perdido y sin ubicación trata de salir a como de lugar" << endl;
                                cout << "1. segui su instinto de supervivencía" << endl;
                                cout << "2. sigue el sendero " << endl;
                                cout << "3. va dejando marcas en los arboles" << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
                                switch (decision3){
                                	case 1:
                                		cout << "\n--- segui su instinto de supervivencía---" << endl;
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
                                        cout << "se da cuenta  que no encuentra salida y decide morir perdido en el sendero" << endl;
									    break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";			
								}                        		                        		
                        		break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";										
						}
                        break;
                    case 2:               	    
                        cout << "\n--- el camino de la desesperanza del corazon ---" << endl;
                        res=miedo+50;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "durante el camino empieza a sentir una soledad fria en el pecho, y decide" << endl;
                        cout << "1. sentarse y reflexionar" << endl;
                        cout << "2. correr para salir de ahí" << endl;
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
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";		
								}
                        		break;
                        	case 2:
                        		cout << "\n--- correr para salir de ahí ---" << endl;
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
                                        cout << "el minotauro desenfunda una espada, y él sale corriendo por que no desea morrir" << endl;
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
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										
								}                       		
                        		break;
							case 3:
								cout << "\n--- empieza a delirar ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en sus alucinaciones se aparace ante él un viejo amor que en tiempos pasado adoro a morir " << endl;
                                cout << "1. se acerca a la alucinación" << endl;
                                cout << "2. se da cuenta que es una alucinación" << endl;
                                cout << "3. le reprocha lo vivido" << endl;
                                cout << "4. salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
								switch (decision3){
									case 1:
										cout << "\n---se acerca a la alucinación---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "trata de abrazarla pero por mas que intenta no puede, y su miedo de desborda" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- se da cuenta que es una alucinación ---" << endl;
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
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";																		    
								}							
								break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";		     										
						}
                        break;
                    case 3:
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
                                	case 1:
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
                                        cout << "una tarantula salta hacía el y lo pica, el asustado la quita y se va, pero no llega lejos; el veneno había echo de la suyas" << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	
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
                                        cout << "se echa a correr hacía el oasis, par vever agua, pero cuando creee tomar agua, resulta que es arena y su miedo aumenta al saber que no va a encontrar agua" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ve una serpiente gigante ---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "ve que se abalanza hacía el y lo unico que logra hacer es cubrirse con las manos, despues de un rato se da cuenta que solo alucino." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---ve aproximarse un carro ---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "resulta que el carro es real, lo invitan a subir y se va." << endl;                                        						                                		
                                		break;	
                                    case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";									
								}
							    break;
						    case 3:
						    	cout << "\n--- buscar un medio de tranporte ---" << endl;
                        		res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "caminando encuentra 3 medios de transporte, pero estan condicionados." << endl;
                                cout << "1. primera condición par que pueda llevarse un camello es clavarse una navaja en la pierna. " << endl;
                                cout << "2. segunda condición es ser mordido por una serpiente, y podra llevarse un carro. " << endl;
                                cout << "3. tercera condición es cortarse las venas. " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3; 
								switch (decision3){
									case 1:
                                		cout << "\n---primera condición par que pueda llevarse un camello es clavarse una navaja en la pierna. ---" << endl;
                                		res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se clava la navaja y el dolor lo hace sentir un miedo que rrecorre su cuerpo." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---segunda condición es ser mordido por una serpiente, y podra llevarse un carro.---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al morderlo la serpiente siente como el veneno pasa por cada vena, empieza a sudar y a tener miedo por que no tiene antidoto; muere." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---tercera condición es cortarse las venas.---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "la sangre brota por sus brazos, siente debilidad, la vista le falla y el miedo apparece." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";																				
								}
						    	break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";											
						}
				    	   break; 				    	
					case 4:
					cout << "\n--- Salir del programa---" << endl;
                    cout << "Fin de la partida" << endl;
					break;	
					default:										
                    cout << "Opción no válida. Volviendo al inicio.\n";	
				}
				break;                
            case 2:
			    cout << "\n--- va al muelle y busca un barco ---" << endl;
			    res=miedo+10;
            	cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                cout << "encuentra un barco que sarpa para rumanía y otro para eel triangulo de las bermudas" << endl;
                cout << "1. sube al barco de rumania " << endl;
                cout << "2. sube al barco de el triangulo de las bermudas." << endl;
                cout << "3. sube a un barco que se val polo norte." << endl;
                cout << "4. Salir del programa" << endl;
                int decision2;
                cin >> decision2;
				switch (decision2){
                	case 1:
                        cout << "\n--- sube al barco de rumania ---" << endl;
                        res=miedo+30;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "se enbarca con la idea de ir a buscar el castillo de Dracula; al llegar a rumanía busca la ruta mas corta al castillo. " << endl;
                        cout << "1. por las catacumbas de la ciudad." << endl;
                        cout << "2. desde bucares toma un carro." << endl;
                        cout << "3. por el bosque encantado." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1:
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
                                	case 1:
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
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";									                                           
								}
                                break;
                            case 2:
							    cout << "\n--- desde bucares toma un carro. ---" << endl;
							    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "desiende del carro y camina a la entrada del castillo, al tocar la puerta se abre y entra en el castillo, y ante él aparecen 3 puertas, y en cada puerta tiene emblembas, entra a:" << endl;
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
                                        cout << "entra y en el centro de la habitacion encuentra una gillotina y 4 personas con turbantes; se acercan a él lo toman de las manos y lo incan en la gillotina, ponen su cabeza en la madera; el muerto de miedo pide que lo dejen libre, pero no le hacen caso y lo degollan. " << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- hay emblema de una bandera roja.---" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al entrar encuentra un cuarto con cuadros de torturas de la santa inquicición, las ve y se llena de temor tales imagenes." << endl;
									    break;
									case 3:
									    cout << "\n--- hay emblema de un murcielago.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "no se da cuenta pero, esa es la habitación de Dracula; al abrirla con miedo ve a Dracula que voltea y se avalanza contra él y lo mata" << endl;
									    break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";									    
								}    
                        		break;
                        	case 3:
                        		cout << "\n--- por el bosque encantado.---" << endl;
							    res=miedo+35;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "camina por un sendero brumoso que lo va llevando a la cima de la colina donde se encuentra el castillo, subiendo se encuentra " << endl;
                                cout << "1. a Dracula en persona" << endl;
                                cout << "2. un lobo ambriento." << endl;
                                cout << "3. un trol que cuida el bosque." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
                                switch (decision3){
                                	case 1:
                                		cout << "\n--- a Dracula en persona.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al verlo, palidece del asombro, y el miedo recorre su cuerpo de pies a cabeza" << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- un lobo ambriento.---" << endl;
									    res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se topa con el lobo, y trata de huir, pero es en vano, lo alcanza y se lo come." << endl;
									    break;
									case 3:
									    cout << "\n--- un trol que cuida el bosque.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al verlo, corre, pero lo alcanza; levanta su pie y lo aplasta." << endl;
									    break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";			
								}                        		                        		
                        		break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";										
						}
                        break;
                    case 2:                	    
                        cout << "\n---sube al barco de el triangulo de las bermudas---" << endl;
                        res=miedo+38;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "durante el viaje van pasando acontecimientos fuera de lo normal" << endl;
                        cout << "1. la mitad de la tripulación desaparece." << endl;
                        cout << "2. el capitan aparece degollado." << endl;
                        cout << "3. deja de funcionar el barco." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        switch (decision2){
                        	case 1:
                        		cout << "\n--- la mitad de la tripulación desaparece. ---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;                        		
                                cout << "al salir de su camarote ve el tumulto de gente preguntando que ocurrio, y empiezan a crear teorias del suceso, que a cualquiersa le pondria los pelos de punta." << endl;
                                cout << "1. la teoria de que fueron raptados por ovnis." << endl;
                                cout << "2. la teoria de que fueron asesinados " << endl;
                                cout << "3. la teoria de que habian abandonado el barco por miedo." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n---la teoria de que fueron raptados por ovnis.---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "todos comentaban que eso sucedia por aquella zona, pero muy pocos creían esas cosas, pero juan tuvo miedo de que le fuera a pasar eso." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---la teoria de que fueron asesinados---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se sabía que un asesino seriel estaba en el barco, por eso es que la mayoria de la gente comentaba que eso fue lo que paso, pero el detalle es que el asesino serial tambien desaparecio, entonces juan andaba con miedo, no deseaba que se le apareciera." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- la teoria de que habian abandonado el barco por miedo.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "muchos ecucharon las historias de lo que se vive en el triangulo de las bermudas, y por eso se creia eso, entonces juan empezaba a creer que eso era real." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	
								}
                        		break;
                        	case 2:
                        		cout << "\n---el capitan aparece degollado.---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "hubo un panico general por el acontecimiento, y muchos apuntaban que habia sido porque el sabía que nadie iba a salir vivo de ese viaje porque:" << endl;
                                cout << "1. el lugar donde se dirigian estaba maldito. " << endl;
                                cout << "2. nunca habia salido un barco con tripulación viva." << endl;
                                cout << "3. un largo peregrinar en aguas desconocidas." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---el lugar donde se dirigian estaba maldito---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se sabía que las leyendas que se contaban de ese lugar eranciertas, y una ves el capitan había escuchado una historía de una sola persona que había salido con vida, entonces juan comenzo a temer de su vida." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---nunca habia salido un barco con tripulación viva. ---" << endl;
                                    	res=miedo+85;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "los marineros siempre preferian dar un rodeo a ese lugar, porque una ves estando cercas los radares comenzaban a fallar y perdian el rumbo. entonces juan temía ya no regresar a su casa nunca más." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---un largo peregrinar en aguas desconocidas.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "una ves adentrados en aguas desconocidas y sin radares y hubicación; el capitan le dice a la tripulación que estan perdidos y que tal ves va ser para siempre, entonces a juan le da miedo la noticia." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";											
								}                       		
                        		break;
							case 3:
								cout << "\n--- deja de funcionar el barco.---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "a plena marcha, el barco se detiene sin sentido, todo mundo se pregunta que es lo que esta pasando cuando el capitan se acerca y dice que tiene una falla es " << endl;
                                cout << "1. el motro del barco se sobre calento." << endl;
                                cout << "2. no se sabe por que dejo de funcionar." << endl;
                                cout << "3. chocan contra un risco que no ven." << endl;
                                cout << "4. salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
								switch (decision3){
									case 1:
										cout << "\n---el motro del barco se sobre calento.---" << endl;
                                		res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "deespues de los chequeos de rutina en el cuarto de maquina, el barco seguia sin prender y a juan eso le empezaba a asustar" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---no se sabe por que dejo de funcionar.---" << endl;
                                    	res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "entre la tripulación comenzaba a correr información sobre el mal funcionamiento, aunque juan no era creyente su miedo iba en aumento ya que no sabía si iba a regresar a casa. " << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---chocan contra un risco que no ven. ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "el golpe fue tan fuerte que el barco se empieza a undir, y mucha de la tripulación se empiesza a aventar por la borda, juan es uno de los que se avienta, pero al recordar que no sabe nadar se empieza a ahogar, con miedo empieza a dar manotadas pero de nada sirven, muere ahogado " << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";																	    
								}							
								break; 
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";		    										
						}
                        break;
                    case 3:
                    	cout << "\n--- sube a un barco que se val polo norte.---" << endl;
                    	res=miedo+35;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "siempre le atrajo conocer otras tierras, pero para él el polo norte era algo completamente desconocido y decide adentrarse en la aventura; llega al polo norte y decide." << endl;
                        cout << "1. ir en busca del Yeti." << endl;
                        cout << "2. ir en busca del Dragon Nidhogg." << endl;
                        cout << "3. ir en busca del moustro Midgard." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision3;
                        cin >> decision3;
                        switch (decision3){
                        	case 1:
                        		cout << "\n---ir en busca del Yeti.---" << endl;
                        	    res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "el abominable hombre de las nieves como también suele conocerle; muy poca gente lo habia visto vagar por esas tierras, y juan decide emprender la aventura." << endl;
                                cout << "1. ir a buscarlo a la Cordillera de Kunk." << endl;
                                cout << "2. ir a buscarlo a la Cordillera Ártica." << endl;
                                cout << "3. ir a buscarlo a la Rocallosa." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- ir a buscarlo a la Cordillera de Kunk. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "una tormenta de nieve caia en ese momento; caminando sin rumbo ve una silueta que se le va aproximando muy rapido, a unons 200 metros se da cuenta de que es el Yeti y va a su encuentro; asustado trata de correr pero no lo logra, y el Yeti lo alcanza y lo mata." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ir a buscarlo a la Cordillera Ártica.---" << endl;
                                    	res=miedo+89;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "una tormenta de nieve caia en ese momento; caminando sin rumbo ve una silueta que se le va aproximando muy rapido, a unons 200 metros se da cuenta de que es el Yeti y va a su encuentro; asustado trata de correr pero no lo logra, y el Yeti lo alcanza y lo mata." << endl;
                                        break;
                                    case 3:
									    cout << "\n--- ir a buscarlo a la Rocallosa.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "una tormenta de nieve caia en ese momento; caminando sin rumbo ve una silueta que se le va aproximando muy rapido, a unons 200 metros se da cuenta de que es el Yeti y va a su encuentro; asustado trata de correr pero no lo logra, y el Yeti lo alcanza y lo mata." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	
							    }			     
                        		break;
                        	case 2:
                        		cout << "\n--- ir en busca del Dragon Nidhogg. ---" << endl;
                        		res=miedo+65;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "Es un dragón que vive en el Niflheim, los pobladores sercanos al sitio cuentan que el dragon dormita en la entrañas de la tierra, y que despierta cada cien mil años en busca de comida; pero nuestro viajero va a su encuentro, para llegar con el tiene que ir por 3 caminos subterraneos." << endl;
                                cout << "1. Las cuevas de hielo de Kverkfjöll." << endl;
                                cout << "2. Las Cuevas del Drach." << endl;
                                cout << "3. Ciudad subterránea de Derinkuyu." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---Las cuevas de hielo de Kverkfjöll.---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "en la entrada de la cueva tropiesa y cae hasta el lomo del dragon; al caer lo despierta y molesto le dice que quien osa molestar su sueño; juan asustado de ver tan enorme dragon le pide disculpas; pero ya molesto lo incinera con exalar fuego de su osico. " << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Las Cuevas del Drach.---" << endl;
                                    	res=miedo+98;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "en la entrada de la cueva tropiesa y cae hasta el lomo del dragon; al caer lo despierta y molesto le dice que quien osa molestar su sueño; juan asustado de ver tan enorme dragon le pide disculpas; pero ya molesto lo incinera con exalar fuego de su osico." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---Ciudad subterránea de Derinkuyu.---" << endl;
                                    	res=miedo+99;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "en la entrada de la cueva tropiesa y cae hasta el lomo del dragon; al caer lo despierta y molesto le dice que quien osa molestar su sueño; juan asustado de ver tan enorme dragon le pide disculpas; pero ya molesto lo incinera con exalar fuego de su osico." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										
								}
							    break;
						    case 3:
						    	cout << "\n--- ir en busca del moustro de Midgard.---" << endl;
                        		res=miedo+60;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "sabe que en una cueva muy escondida en esa tierra lejana existia un moustro, la famosa serpiente Midgard, pero habia rumores de 3 cuevas en las que solia descansasr; y decide ir a buscarlas.." << endl;
                                cout << "1. la cueva de hielo de Mendenhall." << endl;
                                cout << "2. la cueva Cueva de Dobsinska. " << endl;
                                cout << "3. la cueva de hielo de Ningwu. " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3; 
								switch (decision3){
									case 1:
                                		cout << "\n---la cueva de hielo de Mendenhall. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al igresar escucha un ronquido que le enchina la piel, pero sigue, al fonde de esa estructura de hielo ve en la oscuridad la mirada siniestra que lo observa, y en ese presiso momento siente recorrer en miedo escalofriante." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---la cueva Cueva de Dobsinska.---" << endl;
                                    	res=miedo+98;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al igresar escucha un ronquido que le enchina la piel, pero sigue, al fonde de esa estructura de hielo ve en la oscuridad la mirada siniestra que lo observa, y en ese presiso momento siente recorrer en miedo escalofriante." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---la cueva de hielo de Ningwu.---" << endl;
                                    	res=miedo+99;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al igresar escucha un ronquido que le enchina la piel, pero sigue, al fonde de esa estructura de hielo ve en la oscuridad la mirada siniestra que lo observa, y en ese presiso momento siente recorrer en miedo escalofriante. " << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										
								}
						    	break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";											
						}
				    	break; 				    	
				   	case 4:
				        cout << "\n--- Salir del programa---" << endl;
                        cout << "Fin de la partida" << endl;
				        break;	
				   	default:										
                        cout << "Opción no válida. Volviendo al inicio.\n";	
				}          
                break;
            case 3:
            	cout << "\n---Se adentra al bosque siniestro ---" << endl;
            	res=miedo+10;
            	cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                cout << "oscuro camino lleva a las puertas del infierno; asi dice la placa en la entrada del bosque" << endl;
                cout << "1. Se adentra sin dudarlo." << endl;
                cout << "2. El Susurro del Bosque." << endl;
                cout << "3. Camino subterraneo." << endl;
                cout << "4. Salir del programa" << endl;
                int decision3;
                cin >> decision3;
                switch (decision3){
                    case 1:
                        cout << "\n--- Se adentra sin dudarlo. ---" << endl;
                        res=miedo+30;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "al ingresar se encuentra con un perro de 3 cabezas;resulta que es el mismo Cerbero, el cual le da a elejir tres cofres que estan enfrente de el. " << endl;
                        cout << "1. Cofre amararillo." << endl;
                        cout << "2. Cofre verde." << endl;
                        cout << "3. Cofre azul." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1:
                        	    cout << "\n--- Cofre amararillo.---" << endl;
                        	    res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en el cofre amarillo hay tres llaves que solo una de ella abria un pasadizo a lo que él mas deseara." << endl;
                                cout << "1. primera llave." << endl;
                                cout << "2. segunda llave." << endl;
                                cout << "3. tercera llave." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n---primera llave. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al tomar la llave y abrir el pasadizo se encuentra con uno de sus miedos mas profundos que era un reflejo de él, pero deformado, de tal manera que al verlo el sintio mucho miedo." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- segunda llave.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al tomar la llave y abrir el pasadizo se encuentra con uno de sus miedos que era ver como mataban a su familia, como los degollaban" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- tercera llave.---" << endl;
									    res=miedo+50;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al tomar la llave y abrir el pasadizo se encuentra con su casa, y decide regresar con su familia." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";									                                           
								}
                                break;
                            case 2://sub menu 1.2
							    cout << "\n--- Cofre verde. ---" << endl;
							    res=miedo+40;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en este cofre hay 3 monedas, de las cuales tiene que elejir una en la cual es la verdadera :" << endl;
                                cout << "1. Moneda del Abismo." << endl;
                                cout << "2. Moneda de la Pesadilla." << endl;
                                cout << "3. Moneda de la Máscara Rota." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;
								switch (decision2){
									case 1:
									    cout << "\n---  Moneda del Abismo.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "En esta moneda, hay un remolino oscuro que parece absorber toda la luz a su alrededor. Se dice que quienes optan por esta moneda se enfrentan a la oscuridad interior de sus propios miedos más profundos, desenterrando secretos oscuros y enfrentándose a su propia sombra. " << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- Moneda de la Pesadilla.---" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Esta moneda tiene grabada la imagen de una criatura grotesca con ojos rojos y garras afiladas. Se rumorea que aquellos que eligen esta moneda experimentan pesadillas tan intensas que afectan su realidad, fusionando los límites entre sueño y vigilia.." << endl;
									    break;
									case 3:
									    cout << "\n--- Moneda de la Máscara Rota.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "La superficie de esta moneda muestra la imagen de una máscara rota en varios fragmentos. Aquellos que eligen esta moneda se ven obligados a confrontar las máscaras que han usado para ocultar sus verdaderos temores y debilidades, enfrentándose a la desnudez emocional." << endl;
									    break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";									    
								}    
                        		break;
                        	case 3:
                        		cout << "\n---Cofre azul.---" << endl;
							    res=miedo+35;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << " en este cofre hay 3 pergaminos, elije uno:" << endl;
                                cout << "1. Pergamino de la Hora Final." << endl;
                                cout << "2. Pergamino del Eco Eterno." << endl;
                                cout << "3. Pergamino de la Memoria Póstuma." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
                                switch (decision3){
                                	case 1:
                                		cout << "\n--- Pergamino de la Hora Final.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "ste pergamino tiene un sello que representa un reloj de arena con la última grana de arena cayendo. Aquellos que eligen este pergamino conocen la fecha y hora exactas de su muerte. Pueden vivir sus últimos momentos con plena conciencia de que el tiempo se agota, enfrentando la realidad ineludible de su fin."<< endl;
                                        break;
                                    case 2:    
									    cout << "\n--- Pergamino del Eco Eterno.---" << endl;
									    res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "En este pergamino, el sello muestra una figura envuelta en sombras con los ojos vacíos. Aquellos que despliegan este pergamino son condenados a vivir como espectros después de su muerte, siendo testigos eternos de la vida que dejaron atrás, sin poder intervenir ni comunicarse con el mundo de los vivos." << endl;
									    break;
									case 3:
									    cout << "\n--- Pergamino de la Memoria Póstuma.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "El sello de este pergamino representa una pluma escribiendo en un libro. Aquellos que eligen este pergamino viven una muerte en la que sus acciones y legado son recordados de manera intensa por aquellos que quedan atrás. Su impacto en el mundo persiste como una sombra eterna." << endl;
									    break;	
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	    
								}                        		                        		
                        		break;
							case 4:
					        cout << "\n--- Salir del programa---" << endl;
                            cout << "Fin de la partida" << endl;
					        break;	
				     	    default:										
                            cout << "Opción no válida. Volviendo al inicio.\n";									
						}
                        break;
                    case 2://sub menu 1.2                	    
                        cout << "\n---El Susurro del Bosque.---" << endl;
                        res=miedo+38;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "el viento surcaba su cabellera; y a su oido llegaba un susurro que le contaba una historia." << endl;
                        cout << "1. La Sombra Inexorable." << endl;
                        cout << "2. El Eco de los Lamentos." << endl;
                        cout << "3. El Espejismo de la Salida." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        switch (decision2){
                        	case 1:
                        		cout << "\n---La Sombra Inexorable. ---" << endl;
                        		res=miedo+60;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;                        		
                                cout << "en el el bosque habitaba una sombra que en vida fue la mas valiente que pudiera existir; pero al final de sus dias decidio irse a morir al bosque siniestro;y sobre su tumba solia aparecer; y sigue la historia." << endl;
                                cout << "1. La Piel de la Oscuridad." << endl;
                                cout << "2. La Esencia Perdida. " << endl;
                                cout << "3. El Eco Oscuro." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n---La Piel de la Oscuridad..---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se dice que aquel que visite la tumba de la sombra inexorable perdera su propia sombra y jamas podra salir del bobsque." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---La Esencia Perdida.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se dice que aquel que visite la tumba de la sombra inexorable perdera la esencia de su ser y jamas podra salir del bobsque." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- El Eco Oscuro.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "se dice que aquel que visite la tumba de la sombra inexorable sera cubierto de un manto oscuro por toda la eternidad." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	
								}
                        		break;
                        	case 2:
                        		cout << "\n---El Eco de los Lamentos---" << endl;
                        		res=miedo+74;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "dentro del bosque había una zona donde los lamentos eran ensordecedores, y juan decide ir a liberarlos." << endl;
                                cout << "1. La Danza de las Almas. " << endl;
                                cout << "2. La Maldición Silente." << endl;
                                cout << "3. El Espejismo del Descanso." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---La Danza de las Almas.---" << endl;
                                		res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Después de liberar las almas atrapadas en el bosque, comienzas a escuchar sus lamentos de gratitud. Sin embargo, pronto te das cuenta de que estas almas te persiguen, deseando compartir su sufrimiento contigo. Deberás decidir si enfrentas a las almas y buscas una manera de liberarlas completamente, o si permites que sus lamentos te envuelvan, sumiéndote en una danza eterna con los espíritus atormentados." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---La Maldición Silente. ---" << endl;
                                    	res=miedo+95;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Al liberar las almas, descubres que una maldición silenciosa se propaga. Aquellos que escuchan los lamentos sin estar preparados sufren una pérdida gradual de sus propias voces y emociones. Puedes elegir advertir a los demás sobre la maldición, arriesgándote a ser ignorado o ridiculizado, o permanecer en silencio y permitir que la maldición se extienda, llevando consigo la pérdida de la capacidad de expresar la tristeza y la alegría." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---El Espejismo del Descanso.---" << endl;
                                    	res=miedo+93;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Después de liberar las almas, te das cuenta de que el bosque crea ilusiones de aquellos a quienes has ayudado a descansar en paz. Estas ilusiones buscan agradecerte de maneras inquietantes. Deberás decidir si aceptas estos momentos falsos de consuelo, enfrentándote a la posibilidad de quedar atrapado en la ilusión, o si rechazas las sombras de la gratitud y buscas escapar del bosque antes de que las ilusiones se vuelvan más siniestras." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";											
								}                       		
                        		break;
							case 3:
								cout << "\n--- El Espejismo de la Salida.---" << endl;
                        		res=miedo+65;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << " siente que sale pero todo es una mera ilución del bosque." << endl;
                                cout << "1. Las Voces Engañosas." << endl;
                                cout << "2. La Sombra Desvaneciente." << endl;
                                cout << "3. La Última Ilusión." << endl;
                                cout << "4. salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
								switch (decision3){
									case 1:
										cout << "\n---Las Voces Engañosas.---" << endl;
                                		res=miedo+99;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Al intentar escapar del bosque, las voces que te guían comienzan a susurrar mensajes contradictorios. Cada indicación lleva a un lugar más oscuro y peligroso. Deberás decidir si confías en las voces y sigues sus direcciones, enfrentándote a los horrores que te esperan, o si decides renunciar a su guía, sabiendo que ahora estás completamente perdido en el bosque siniestro." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---La Sombra Desvaneciente.---" << endl;
                                    	res=miedo+95;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Mientras buscas la salida, una sombra tenebrosa te persigue implacablemente. Sin embargo, descubres que cada vez que la enfrentas, se vuelve más débil y más pequeña. Deberás decidir si continúas enfrentándote a la sombra, enfrentándote al riesgo de que desaparezca por completo, o si permites que crezca en poder, amenazando con consumirte por completo. " << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---La Última Ilusión. ---" << endl;
                                    	res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Después de muchas horas de caminar, ves una salida clara y abierta. Sin embargo, al acercarte, descubres que es otra ilusión del bosque. Esta vez, la salida parece tan real que casi puedes tocarla. Deberás decidir si caes en la trampa de la última ilusión, aceptando la aparente libertad que se ofrece, o si resistes la tentación y buscas una salida real, incluso si no estás seguro de si existe realmente." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";																		    
								}							
								break; 
							case 4:
					        cout << "\n--- Salir del programa---" << endl;
                            cout << "Fin de la partida" << endl;
					        break;	
				         	default:										
                            cout << "Opción no válida. Volviendo al inicio.\n";		    										
					 	}
                        break;
                    case 3:
                    	cout << "\n--- Camino subterraneo.---" << endl;
                    	res=miedo+35;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "un tunel conecta a su casa con el bosque siniestro; pero muy poca gente sabía de el, entonces juan se adentra al tunel y encuentra 3 caminos con unas leyendas que decian:" << endl;
                        cout << "1. este tunel te llevara a tu peor pesadilla." << endl;
                        cout << "2. aquel que entre, se enfrentara a lo desconocido." << endl;
                        cout << "3. si no sabes que es temer; entrad y aprended." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision3;
                        cin >> decision3;
                        switch (decision3){
                        	case 1:
                        		cout << "\n---este tunel te llevara a tu peor pesadilla.---" << endl;
                        	    res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en este tunel no ingresabas fisicamente, solo por dedio del subconsiente, por eso es que se crean 3 historias a nivel sel subconsiente." << endl;
                                cout << "1. El Túnel de los Espejismos" << endl;
                                cout << "2. Las Voces del Pasado." << endl;
                                cout << "3. El Espectro del Mañana." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- El Túnel de los Espejismos. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Al ingresar al túnel, te encuentras en un pasillo lleno de espejos que reflejan tus peores temores. Cada reflejo muestra versiones distorsionadas de tus miedos más profundos. Deberás decidir si avanzas entre los espejos enfrentándote a tus pesadillas, o si retrocedes, sabiendo que el túnel parece estar jugando con tus propios miedos contra ti." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Las Voces del Pasado.---" << endl;
                                    	res=miedo+89;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Mientras caminas por el túnel, escuchas susurros que narran eventos de tu pasado de manera retorcida. Las voces te acusan de errores pasados y te atormentan con recuerdos distorsionados. Puedes optar por confrontar las voces y enfrentarte a la verdad incómoda, o huir de las acusaciones, temiendo lo que el túnel pueda revelar sobre ti mismo." << endl;
                                        break;
                                    case 3:
									    cout << "\n--- El Espectro del Mañana.---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "A medida que avanzas, el túnel proyecta visiones de un futuro aterrador. Ves eventos catastróficos y situaciones horribles que podrían suceder. Deberás decidir si aceptas estas visiones como inevitables, enfrentándote a un destino oscuro, o si desafías las predicciones del túnel, buscando cambiar el curso de tu futuro y enfrentándote a las consecuencias de tus elecciones." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	
							    }			     
                        		break;
                        	case 2:
                        		cout << "\n--- aquel que entre, se enfrentara a lo desconocido. ---" << endl;
                        		res=miedo+65;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "sin más juan se adentra, y en la entrada se enfrenta a" << endl;
                                cout << "1. Un Nomo." << endl;
                                cout << "2. Un trol." << endl;
                                cout << "3. Un basilisco." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---Un Nomo.---" << endl;
                                		res=miedo+95;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Cuando lo ve el Nomo lo ataca con un acha entonces juan se espanta y regresa por sonde entro. " << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Un trol.---" << endl;
                                    	res=miedo+99;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << " Entrando escucha un ronquido, y ve a el tro que descansa; al verlo se espanta y muerto de miedo sale sileciosamente." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---Un basilisco.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Entrando ve su largo cuerpo de forma de serpiente, al verlo se espanta y muerto de miedo sale sileciosamente.." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										
								}
							break;
						    case 3:
						    	cout << "\n--- si no sabes que es temer; entrad y aprenda.---" << endl;
                        		res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "entra y dentro encuentra un nomo que le dice " << endl;
                                cout << "1. Sombras del pasado." << endl;
                                cout << "2. Dudas del presente. " << endl;
                                cout << "3. Temores del futuro. " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3; 
								switch (decision3){
									case 1:
                                		cout << "\n---Sombras del pasado. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "En el corazón del camino, Juan se encontró con una figura oscura que reflejaba sus remordimientos más profundos. Era una manifestación de su pasado, un recordatorio constante de decisiones mal tomadas. Sin embargo, en lugar de huir, Juan decidió enfrentarse a la sombra. Al hacerlo, descubrió que solo aceptando y aprendiendo de sus errores podía liberarse del peso del pasado." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---Dudas del presente.---" << endl;
                                    	res=miedo+98;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Mientras avanzaba más profundamente, Juan se topó con un espejismo que proyectaba sus dudas actuales. La criatura le habló en susurros, cuestionando sus elecciones y sembrando la semilla de la incertidumbre, y sucumbe con temor ante la confusión." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---Temores del futuro.---" << endl;
                                    	res=miedo+99;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Finalmente, Juan llegó al corazón del bosque, donde la criatura se reveló como un reflejo de sus temores futuros. Se enfrentó a visiones aterradoras de lo que podría enfrentar: la soledad, la pérdida, el desconocido." << endl; 
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										
								}
						    	break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";											
						   }
				    	   break; 				    	
				    case 4:
					    cout << "\n--- Salir del partida---" << endl;
                        cout << "Fin de la partida" << endl;
					    break;	
				    default:										
                        cout << "Opción no válida. Volviendo al inicio.\n";
				}                
                break;
            case 4:
            	cout << "\n---se encamina a la comarca ---" << endl;
            	res=miedo+35;
            	cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                cout << "al llegar a la comarca va en busca de las casas mas tenbrosas." << endl;
                cout << "1. Mansion de la perpetua agonia." << endl;
                cout << "2. Morada de las Sombras." << endl;
                cout << "3. Palacio del Terror." << endl;
                cout << "4. Salir del programa" << endl;
                int decision4;
                cin >> decision4;
                switch (decision4){
                	case 1:
                        cout << "\n--- Mansion de la perpetua agonia. ---" << endl;
                        res=miedo+45;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "se encamina a la Mansion; al llegar y entrar ve tres escaleras, que lo llevan a tres habitaciones de la Mansión." << endl;
                        cout << "1. Habitación de la soledad." << endl;
                        cout << "2. Habitación de la locura." << endl;
                        cout << "3. Habitación de la tristesa." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1:
                        	    cout << "\n--- Habitación de la soledad. ---" << endl;
                        	    res=miedo+60;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "al abrir la puerta ve un vacio avismal, pero aun no siente mucho miedo y decide entrar; en la esquina de la habitacion encuentra." << endl;
                                cout << "1. Una Monja." << endl;
                                cout << "2. Un muñeco en un triciclo." << endl;
                                cout << "3. Una mujer vetida de blanco." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- Una Monja.---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al momento de ver a la monja se paraliza de miedo." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Un muñeco en un triciclo.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al momento de ver al muñeco en un triciclose  se paraliza de miedo." << endl;
                                        break;
                                    case 3:
									    cout << "\n--- Una mujer vetida de blanco.---" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al momento de ver a la mujer vetida de blanco se paraliza de miedo." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										                                           
								}
                                break;
                            case 2://sub menu 1.2
							    cout << "\n---Habitación de la locura.---" << endl;
							    res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "al abrir la puerta ve que todo es color blanco, pero aun no siente mucho miedo y decide entrar; en la esquina de la habitacion encuentra." << endl;
                                cout << "1. Susurros en la Oscuridad." << endl;
                                cout << "2. Reflejo del Pasado." << endl;
                                cout << "3. El Eco del Lamento." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;
								switch (decision2){
									case 1:
									    cout << "\n---Susurros en la Oscuridad--" << endl;
									    res=miedo+96;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Al abrir la puerta de la habitación sellada, un silencio sepulcral envuelve al grupo. De repente, comienzan a escuchar susurros ininteligibles que parecen provenir de las sombras. Las voces se intensifican, revelando los oscuros secretos de los residentes antiguos. Pero cuando intentan huir, descubren que la puerta se cierra sola, dejándolos atrapados con las almas enloquecidas que buscan compañía." << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- Reflejo del Pasado---" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Dentro de la habitación, encuentran un espejo antiguo cubierto de polvo. Al mirarlo, cada miembro del grupo ve reflejados sus miedos más profundos. Pronto, las figuras en el espejo cobran vida y comienzan a perseguirlos, encerrándolos en un laberinto de pesadillas personales. La única salida parece ser enfrentar los demonios internos, pero algunos descubren que la línea entre la cordura y la locura es más delgada de lo que imaginaban." << endl;
									    break;
									case 3:
									    cout << "\n---El Eco del Lamento---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Mientras exploran la habitación, descubren grabaciones antiguas de terapias psiquiátricas. De repente, las voces de los pacientes desesperados resuenan en el aire. Cada grito y lamento parece impregnar las paredes, creando una atmósfera opresiva. A medida que el sonido se intensifica, los miembros del grupo sienten que la locura se apodera de sus mentes, confundiéndolos entre la realidad y las penas del pasado." << endl;
									    break;
									case 4:
										cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
									    break;
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										    
								}    
                        		break;
                        	case 3:
                        		cout << "\n---Habitación de la tristesa.---" << endl;
							    res=miedo+55;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "al abrir la puerta ve un habiente triste, pero aun no siente mucha tristesa y decide entrar; en un rincon de la habitacion encuentra." << endl;
                                cout << "1. Olivia." << endl;
                                cout << "2. Su padre" << endl;
                                cout << "3. Su madre " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
                                switch (decision3){
                                	case 1:
                                		cout << "\n--- Olivia.--" << endl;
									    res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "olivia era la mujer que más amo, pero ella le rompio el corazon porque decidio irse con otro hombre, y al verla le dio tanto miedo de conversar que solo se quedo callado." << endl;
                                        break;
                                    case 2:    
									    cout << "\n---Su padre. --" << endl;
									    res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "su padre que siempre lo apoyo en su vida; ahora lo veia en ese rincon enfermo y apunto de morir; eso le destrozaba el alma y su miedo que que lo fuera a perder." << endl;
									    break;
									case 3:
									    cout << "\n--- Su madre ---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "era la mujer mas amorosa; y verla en ese rincon sufiendo, le partia el corazón y su miedo de perderla hizo que enmudeciera." << endl;
									    break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";			
								}                        		                        		
                        		break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";										
						}
                        break;
                    case 2:                	    
                        cout << "\n--- Morada de las Sombras.---" << endl;
                        res=miedo+45;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "se encamina a la Mansion; al llegar encuentra sombras por toda la casa, en eso una sombra se acerca y le dice que elija entre las tres habitaciones de la Morada." << endl;
                        cout << "1. La Habitación de la lujuria." << endl;
                        cout << "2. La Habitacón de la traición." << endl;
                        cout << "3. La Habitación de la gula." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        switch (decision2){
                        	case 1:
                        		cout << "\n---La Habitación de la lujuria.---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;                        		
                                cout << "al abrir la puerta ve todas sus pasiones desenfrenadas y unos personajes que no creia encontrar,que ya hacian muertos mucho tiempo atras,pero aun no siente mucha tristesa y decide entrar; en un rincon de la habitacion encuentra." << endl;
                                cout << "1. parejas que fueron condenadas. " << endl;
                                cout << "2. Helena de Troya" << endl;
                                cout << "3. Cleopatra." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- parejas que fueron condenadas. ---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "juan se encuentra con parejas que fueron condenadas por entregarse al pecado de la lujuria. Entre ellas, está Tristán e Isolda, quienes murieron por su amor prohibido y ahora experimentan tormentos por su deseo desenfrenado." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Helena de Troya.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "al verla tuvo unos pensamientos de una lujura pasion con ella, pero recordo que ella ya hacia en el infierno, y le asusto verla tan hermosa como en vida lo fue." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---Cleopatra. ---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "la hermosa cleopatra ya hacia tan imponente en ese sillón de terciopelo, que desperto los pensamientos mas lujuriosos en su mente, pero recordo que ella ya hacia en el infierno, y le asusto verla tan hermosa como en vida lo fue.." << endl;
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";		
								}
                        		break;
                        	case 2:
                        		cout << "\n---La Habitacón de la traición.---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << " en esta habitacón ya hacen los seres que en vida traicionaron sus ideales y sus principios." << endl;
                                cout << "1. Los traidores a la patria." << endl;
                                cout << "2. Branca d'Oria" << endl;
                                cout << "3. lucifer." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---Los traidores a la patria.---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Bruto y Casio: Ambos fueron implicados en la conspiración para asesinar a Julio César en el año 44 a.C. Bruto era hijo adoptivo de César y Casio era uno de los conspiradores; en su mente revivio las ecenas sucedidas ese dia y miedo fue ver eso." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---Branca d'Oria---" << endl;
                                    	res=miedo+85;
            	                        cout << "Un noble genovés acusado de matar a su sobrino, Branca d'Oria es presentado por Dante como un ejemplo de traición familiar; sintio miedo al revivir los actos de traición en la cabeza de juan" << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n--- Lucifer.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Había una vez en los reinos celestiales un ser resplandeciente conocido como Lucifer, el portador de luz. Dotado de belleza y poder inigualables, ocupaba un lugar especial en la jerarquía angelical. Sin embargo, en lo más profundo de su ser, creció una semilla de orgullo y deseo de igualarse a su Creador.La luminosidad de Lucifer se oscureció por su propia arrogancia, y en su corazón brotó una rebeldía que lo llevó a desafiar la autoridad divina. Incapaz de aceptar la idea de servir a la humanidad, anhelaba un poder que rivalizara con el de Dios mismo. Con esta rebelión en su corazón, Lucifer lideró una insurrección celestial; juan escucho la historia de los labios de lucifer que lo hicieron temblar." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										
								}                       		
                        		break;
							case 3:
								cout << "\n--- La Habitación de la gula.---" << endl;
                        		res=miedo+70;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "" << endl;
                                cout << "1. El Banquete Eterno." << endl;
                                cout << "2. Los Chef Condenados." << endl;
                                cout << "3. La Sombra del Cocinero Famoso." << endl;
                                cout << "4. salir del programa" << endl;
                                int decision3;
                                cin >> decision3;
								switch (decision3){
									case 1:
										cout << "\n---El Banquete Eterno.---" << endl;
                                		res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Juan se encuentra con almas atrapadas en una sala de banquetes eterno. La mesa está llena de manjares exquisitos, pero cada vez que intentan comer, la comida se convierte en algo repugnante. Aquí, un antiguo rey, conocido por su extravagancia en la vida, intenta agarrar una uva solo para encontrar gusanos. La lección es clara: la indulgencia sin límites lleva a la repulsión eterna" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Los Chef Condenados---" << endl;
                                    	res=miedo+80;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "En una esquina de la habitación, Juan descubre a famosos chefs de la historia. Cada uno intenta cocinar deliciosos platos, pero sus creaciones se transforman en algo insípido o amargo. Entre ellos, un chef gourmet del Renacimiento se lamenta por sus excesos y la falta de aprecio por la simplicidad y la moderación en sus preparaciones culinarias." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---La Sombra del Cocinero Famoso.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Un chef famoso que había hecho delicias para reyes y reinas en vida ahora está reducido a buscar restos de comida entre la mugre. Cada vez que intenta probar algo, su boca se llena de tierra. Este personaje representa la ironía de aquellos que, en vida, creían que el placer supremo radicaba en la comida exquisita, solo para encontrarse con la amargura en la muerte." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";																		    
								}							
								break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";		     										
						}
                        break;
                    case 3:
                    	cout << "\n--- Palacio del Terror.---" << endl;
                    	res=miedo+35;
            	        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                        cout << "Juan se encuentra frente al Palacio del Terror, una construcción ominosa que se alza en medio de un paisaje desolado. Sus torres parecen desafiar al mismo infierno, y sus murallas están adornadas con imágenes distorsionadas de las peores pesadillas de aquellos condenados, y al ingresar encuentra." << endl;
                        cout << "1. Puertas Cambiantes." << endl; 
                        cout << "2. Espejismos Cambiantes." << endl;
                        cout << "3. las Sombras Engañosas." << endl;
                        cout << "4. Salir del programa" << endl;
                        int decision3;
                        cin >> decision3;
                        switch (decision3){
                        	case 1:
                        		cout << "\n---Puertas Cambiantes. ---" << endl;
                        	    res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "al ingresasr encuentra con una puerta que esta en constante cambio." << endl;
                                cout << "1. Puerta de los Remordimientos." << endl;
                                cout << "2. Puerta de las Pesadillas." << endl;
                                cout << "3. Puerta de los Olvidos." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- Puerta de los Remordimientos---" << endl;
                                		res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "En el corredor sombrío, Juan se encuentra ante una puerta que cambia constantemente. Cada vez que intenta abrirla, muestra imágenes de los remordimientos más profundos de su vida. En un giro macabro, la puerta se convierte en un espejo que refleja sus peores decisiones." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- Puerta de las Pesadillas.---" << endl;
                                    	res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Otra puerta parece susurrar terrores inconcebibles. Al abrirla, Juan se ve atrapado en visiones aterradoras de monstruos y criaturas indescriptibles que representan sus miedos más profundos, acechándolo en un laberinto de sombras." << endl;
                                        break;
                                    case 3:
									    cout << "\n---Puerta de los Olvidos---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "La última puerta es simple y olvidada. Al abrirla, Juan descubre un pasillo oscuro lleno de murmullos incomprensibles. Se da cuenta de que está en una habitación donde los olvidos se manifiestan en sus formas más inquietantes, representando eventos perdidos y recuerdos desvanecidos." << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";	
							    }			     
                        		break;
                        	case 2:
                        		cout << "\n--- Espejismos Cambiantes ---" << endl;
                        		res=miedo+50;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "al ingresar encuentra un espejo que cambia segun su miedo." << endl;
                                cout << "1. Espejismo del Abandono." << endl;
                                cout << "2. Espejismo de la Culpa." << endl;
                                cout << "3. Espejismo de la Perdición." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2; 
								switch (decision2){
									case 1:
                                		cout << "\n---Espejismo del Abandono---" << endl;
                                		res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Juan se encuentra ante un espejismo que refleja su soledad más profunda. Mientras camina hacia él, las sombras toman forma de amigos y seres queridos que lo abandonaron en vida, dejándolo solo en un paisaje desolado." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---Espejismo de la Culpa---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Otro espejismo lo lleva a enfrentarse a sus culpas más dolorosas. Cada imagen que muestra refleja momentos en los que causó sufrimiento a otros. El espejo lo confronta con sus acciones pasadas, haciendo que sienta la carga de la culpa." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---Espejismo de la Perdición.---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Juan se ve atrapado en un espejismo que proyecta su propia perdición. Visiones de su futuro oscuro y desesperanzado lo atormentan mientras lucha por escapar de las sombras que amenazan con consumirlo." << endl;                                        						                                		
                                		break;	
                                    case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";									
								}
							break;
						    case 3:
						    	cout << "\n--- las Sombras Engañosas ---" << endl;
                        		res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "." << endl;//------------------------------------------------------------------
                                cout << "1. Sombra de la Desconfianza. " << endl;
                                cout << "2. Sombra de la Desesperación. " << endl;
                                cout << "3. Sombra de la Autodestrucción. " << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision3;
                                cin >> decision3; 
								switch (decision3){
									case 1:
                                		cout << "\n---Sombra de la Desconfianza. ---" << endl;
                                		res=miedo+90;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Entre las sombras danzantes, Juan se encuentra con una sombra que representa la desconfianza. Esta sombra se disfraza como amigos y aliados, pero cada palabra que pronuncian es una trampa mortal, mostrándole las trampas de la confianza ciega." << endl;
                                        break;
                                    case 2:
                                    	cout << "\n---Sombra de la Desesperación.---" << endl;
                                    	res=miedo+92;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "Otra sombra parece reflejar la desesperación más profunda. Juan se enfrenta a sus peores miedos y fracasos personales, representados por esta sombra engañosa que amenaza con sumergirlo en una eternidad de desesperanza." << endl;                                        						                                		
                                		break;
                                	case 3:
                                    	cout << "\n---Sombra de la Autodestrucción.---" << endl;
                                    	res=miedo+91;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "La última sombra se revela como un reflejo oscuro de sus propias debilidades. Mientras lucha por escapar de su influencia, la sombra de la autodestrucción lo lleva por un laberinto de malas decisiones y acciones que amenazan con devorarlo." << endl;                                        						                                		
                                		break;	
                                	case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;	
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";																				
								}
						    	break;
							case 4:
					            cout << "\n--- Salir del programa---" << endl;
                                cout << "Fin de la partida" << endl;
					            break;	
				         	default:										
                                cout << "Opción no válida. Volviendo al inicio.\n";											
						}
				        break; 				    	
					case 4:
					    cout << "\n--- Salir del programa---" << endl;
                        cout << "Fin de la partida" << endl;
					    break;	
					default:										
                        cout << "Opción no válida. Volviendo al inicio.\n";	                		
				}
                break;
            case 5:
                cout << "¡Hasta luego! Gracias por jugar." << endl;
                exit(0);
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
	    }  
	}while (opcion != '5' && opcion != '4' );
	return 0;
}
