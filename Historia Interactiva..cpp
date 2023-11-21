#include <iostream>

using namespace std;

int main(){
	 
	 int opcion;
	 
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
	
    cout << "Elige una acción: ";
    cin>>opcion;
	
	 switch (opcion) {
            case 1://submenu 1
            	cout << "\n--- viajar a la cueva de las sombras ---" << endl;
                cout << "para llegar a la cueva tiene que decidirse por 2 caminos" << endl;
                cout << "1. el sendero de la soledades perdidas" << endl;
                cout << "2. el camino de la desesperanza del corazon" << endl;
                cout << "3. Salir del programa" << endl;
                int decision1;
                cin >> decision1;
                switch (decision1){
                	case 1://sub menu 1.1
                        cout << "\n--- el sendero de la soledades perdidas ---" << endl;
                        cout << "durante el camino no escucha ni un solo ruido, caminando encuentra una sombra que le indica " << endl;
                        cout << "1. quedarse en su soledad infita" << endl;
                        cout << "2. continuar para encontar la cueva" << endl;
                        cout << "3. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1://sub menu 1.2
                        	    cout << "\n--- quedarse en su soledad infita ---" << endl;
                                cout << "reflexiona que vivir es un cumulo de sentimientos,entonces, decide irse,  pero la sombra que se aparece no lo deja irse." << endl;
                                cout << "1. luchar contra la sombra" << endl;
                                cout << "2. ser mas astuto" << endl;
                                cout << "3.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- luchar contra la sombra ---" << endl;
                                        cout << "pierde, y siente un temor que recorre cada centimetro de su piel y termina en la desolacion y la congoja" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- ser mas astuto---" << endl;
                                        cout << "la engaña pero siente miedo si es que lo encuentra" << endl;
                                        break;
                                    case 3:
									    cout << "\n--- Salir del programa---" << endl;
                                        cout << "en un lugar seguro trato de inspecionar el tesoro" << endl;
										break;                                            
								}
                                break;
                            case 2://sub menu 1.2
							    cout << "\n--- continuar para encontar la cueva ---" << endl;
                                cout << "prosigue su camino, hasta divisar la cueva" << endl;
                                cout << "1. camina y entra en la cueva" << endl;
                                cout << "2.  se sienta y espera" << endl;
                                cout << "3.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;
								switch (decision2){
									case 1:
									    cout << "\n--- camina y entra en la cueva---" << endl;
                                        cout << "al entrar en la cueva encuentra lo mas horrible que jamas habia imaginado, y muere de miedo" << endl;
                                        break;
                                    case 2:    
									    cout << "\n--- se sienta y espera---" << endl;
                                        cout << "sentado ve a lo lejos un moustro de sin cabeza, con miedo se levanta y se regresa a su casa" << endl;
									    break;
								}    
                        		break;
                        	case 3:
                        		
                        		
                        		break;
								
						}
                        break;
                    case 2://sub menu 1.2                	    
                        cout << "\n--- el camino de la desesperanza del corazon ---" << endl;
                        cout << "durante el camino empieza a sentir una soledad fria en el pecho, y decide" << endl;
                        cout << "1. sentarse y reflexionar" << endl;
                        cout << "2. correr para salir de ahí" << endl;
                        cout << "3. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        switch (decision2){
                        	case 1:
                        		cout << "\n--- sentarse y reflexionar ---" << endl;
                                cout << "sentado recuerda a su familia,y la cabeza comienza a dar vueltas" << endl;
                                cout << "1. retornar " << endl;
                                cout << "2. llega una luchuza con una carta" << endl;
                                cout << "3.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1:
                                		cout << "\n--- retornar ---" << endl;
                                        cout << "siente miedo de perder a su familia y regresa a su hogar con temor de no encontrarlos" << endl;
                                        break;
                                    case 2:
                                    	cout << "\n--- llega una luchuza con una carta ---" << endl;
                                        cout << "en la carta, un amigo le cuenta que su familia murio por un huracan; solo, triste y muerto de miedo por no tener nada se quita la vida" << endl;                                        						                                		
                                		break;
                                	default:
                                	    cout<<"fin del juego";
									break;	
								}
                        		break;
                        	case 2:
                        		cout << "\n--- correr para salir de ahí ---" << endl;
                                cout << "sale, y encuentra un minotauro " << endl;
                                cout << "1. luchar contra la sombra" << endl;
                                cout << "2. ser mas astuto" << endl;
                                cout << "3.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;                        		
                        		break;     										
						}
                        break;
                    case 3://sub menu 1.3  
                    	cout << "\n--- los iy sigue su camino ---" << endl;
                        cout << "sigues el mapa y encuentras un tesoro" << endl;
                        cout << "1. guardar el tesoro en mi mochila" << endl;
                        cout << "2. Ignorar el tesoro" << endl;
                        cout << "3. Salir del programa" << endl;
                        int decision3;
                        cin >> decision3;
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
