#include <iostream>
#include <math.h>

using namespace std;

int main(){
	 
	 int opcion;
	 int miedo = 0;
	 int res;
	 	 
	while (opcion){
		
	}
	setlocale(LC_ALL, "");
	cout << "Érase una vez un hombre que tenía dos hijos totalmente distintos. Pedro, el mayor, era un chico listo y responsable, pero muy miedoso. En cambio su hermano pequeño, Juan, jamás tenía miedo a nada, así que en la comarca todos le llamaba Juan sin miedo. A Juan no le daban miedo las tormentas, ni los ruidos extraños, ni escuchar cuentos de monstruos en la cama. El miedo no existía para él. A medida que iba creciendo, cada vez tenía más curiosidad sobre qué era sentir miedo porque él nunca había tenido esa sensación.Un día le dijo a su familia que se iba una temporada para ver si conseguía descubrir lo que era el miedo. Sus padres intentaron impedírselo, pero fue imposible. Juan era muy cabezota y estaba decidido a lanzarse a la aventura." << endl;
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
                                        cout << "la engaña pero siente miedo si es que lo encuentra" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- llorar por no encontar una solución---" << endl;
									    res=miedo+100;
            	                        cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                        cout << "tiene sentimientos de impotencia" << endl;
										break;
									case 4:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "Fin de la partida" << endl;
										break;										                                           
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
                                	default:
                                	    cout<<"fin del juego";
									break;	
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
                                	default:
                                	    cout<<"fin del juego";
									break;										
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
                                        cout << "una tarantula salta hacía el y lo pica, el asustado la quita y se va, pero no llega lejos; el veneno había echo de la suyas" << endl;
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
                cout << "encuentra un barco que sarpa para rumanía y otro para eel triangulo de las bermudas" << endl;
                cout << "1. sube al barco de rumania " << endl;
                cout << "2. sube al barco de el triangulo de las bermudas" << endl;
                cout << "3. Salir del programa" << endl;
                int decision2;
                cin >> decision2;          
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
                cout << "caminando por el bosque encuentra con un choza del cual salía humo" << endl;
                cout << "1. Seguir el mapa" << endl;
                cout << "2. Ignorar el mapa" << endl;
                cout << "3. Salir del programa" << endl;
                int decision4;
                cin >> decision4;
                break;
            case 5:
                cout << "¡Hasta luego! Gracias por jugar." << endl;
                exit(0);
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
	
	}
	
	return 0;
}
