#include <iostream>
#include <math.h>

using namespace std;

int main(){
	 
	 int opcion;
	 int miedo = 0;
	 int res;
	 
	do{
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
									default:										
                                        cout << "Opción no válida. Volviendo al inicio.\n";										                                           
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
                cout << "encuentra un barco que sarpa para rumanía y otro para eel triangulo de las bermudas" << endl;
                cout << "1. sube al barco de rumania " << endl;
                cout << "2. sube al barco de el triangulo de las bermudas." << endl;
                cout << "3. sube a un barco que se val polo norte." << endl;
                cout << "4. Salir del programa" << endl;
                int decision2;
                cin >> decision2;
				switch (decision2){
                	case 1://sub menu 1.1
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
								}                        		                        		
                        		break;								
						}
                        break;
                    case 2://sub menu 1.2                	    
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
                                	default:
                                	    cout<<"fin del juego";
									break;	
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
                                	default:
                                	    cout<<"fin del juego";
									break;										
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
                                        cout << "Fin de la partida" << endl;
										break;
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
                                	default:
                                	    cout<<"fin del juego";
									break;										
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
            	res=miedo+10;
            	cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                cout << "oscuro camino lleva a las puertas del infierno; asi dice la placa en la entrada del bosque" << endl;
                cout << "1. se adentra sin dudarlo." << endl;
                cout << "2. trata de buscar otra ruta." << endl;
                cout << "3. " << endl;
                cout << "4. Salir del programa" << endl;
                int decision3;
                cin >> decision3;
                switch (decision3){
                    case 1://sub menu 1.1
                        cout << "\n--- se adentra sin dudarlo. ---" << endl;
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
                        	case 1://sub menu 1.2
                        	    cout << "\n--- Cofre amararillo.---" << endl;
                        	    res=miedo+45;
            	                cout << "----------nuvel de miedo:"<< res <<"%---------" <<endl;
                                cout << "en el cofre amarillo habia tres llaves que solo una de ella abria un pasadizo a lo que él mas deseara." << endl;
                                cout << "1. primera llave." << endl;
                                cout << "2. segunda llave." << endl;
                                cout << "3. tercera llave." << endl;
                                cout << "4.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
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
								}
                                break;
                            case 2://sub menu 1.2
							    cout << "\n--- trata de buscar otra ruta. ---" << endl;
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
								}                        		                        		
                        		break;								
						}
                        break;
                    case 2://sub menu 1.2                	    
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
                                	default:
                                	    cout<<"fin del juego";
									break;	
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
                                	default:
                                	    cout<<"fin del juego";
									break;										
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
                                        cout << "Fin de la partida" << endl;
										break;
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
                                	default:
                                	    cout<<"fin del juego";
									break;										
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
	
	
	}while (opcion != '5' && opcion != '4' );
	return 0;
}
