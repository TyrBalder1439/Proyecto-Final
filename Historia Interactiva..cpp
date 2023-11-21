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
	
    cout << "Elige una acción (1-5): ";
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
                        cout << "durante el camino no escucha ni un solo ruido, caminando encuentra una sombre que le indica " << endl;
                        cout << "1. quedarse en su soledad infita" << endl;
                        cout << "2. continuar para encontar la cueva" << endl;
                        cout << "3. Salir del programa" << endl;
                        int decision1;
                        cin >> decision1;
                        switch (decision1){
                        	case 1://sub menu 1.2
                        	    cout << "\n--- quedarse en su soledad infita ---" << endl;
                                cout << "sólo reflexiona que vivir es un cumulo de sentimientos, pero la sombra que se aparece no lo deja irse." << endl;
                                cout << "1. luchar contra la sombra" << endl;
                                cout << "2.esconder el tesoro " << endl;
                                cout << "3.Salir del programa" << endl;
                                int decision1;
                                cin >> decision1;
                                switch (decision1){
                                	case 1://sub menu 1.3
                                		cout << "\n--- luchar contra la sombra ---" << endl;
                                        cout << "siente un temor que recorre cada centimetro de su piel y termina en la desolacion y la congoja" << endl;
                                        cout << "1. contar el tesoro" << endl;
                                        cout << "2.  " << endl;
                                        cout << "3.Salir del programa" << endl;
                                        int decision1;
                                        cin >> decision1;
                                        break;
                                    case 2:
                                    	cout << "\n--- ver que es lo que tiene el tesoro---" << endl;
                                        cout << "en un lugar seguro trato de inspecionar el tesoro" << endl;
                                        cout << "1. contar el tesoro" << endl;
                                        cout << "2.  " << endl;
                                        cout << "3.Salir del programa" << endl;
                                        int decision2;
                                        cin >> decision2;
                                        break;
                                    case 3:
									    cout << "\n--- ver que es lo que tiene el tesoro---" << endl;
                                        cout << "en un lugar seguro trato de inspecionar el tesoro" << endl;
                                        cout << "1. contar el tesoro" << endl;
                                        cout << "2.  " << endl;
                                        cout << "3.Salir del programa" << endl;
                                        int decision3;
                                        cin >> decision3;    
								}
                                break;
                            case 2:
							    cout << "\n--- o solo conversar con ellos ---" << endl;
                                cout << "caminar con precausion, hasta allar un lugar seguro" << endl;
                                cout << "1. ver que es lo que tiene el tesoro" << endl;
                                cout << "2.esconder el tesoro " << endl;
                                cout << "3.Salir del programa" << endl;
                                int decision2;
                                cin >> decision2;    
                        		break;
						}
                        break;
                    case 2:                	    
                        cout << "\n--- los ignora y sigue su camino ---" << endl;
                        cout << "sigues el mapa y encuentras un tesoro" << endl;
                        cout << "1. guardar el tesoro en mi mochila" << endl;
                        cout << "2. Ignorar el tesoro" << endl;
                        cout << "3. Salir del programa" << endl;
                        int decision2;
                        cin >> decision2;
                        break;
                    case 3:
                    	cout << "\n--- los ignora y sigue su camino ---" << endl;
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
                cout << "en el muelle encuentra un barco que zarpa para Rumania" << endl;
                cout << "1. Seguir el mapa" << endl;
                cout << "2. Ignorar el mapa" << endl;
                cout << "3. Salir del programa" << endl;
                int decision2;
                cin >> decision2;          
                break;
            case 3:
            	cout << "\n---se adentra al bosque siniestro ---" << endl;
                cout << "caminando por el bosque encuentra con un choza del cual salía humo" << endl;
                cout << "1. Seguir el mapa" << endl;
                cout << "2. Ignorar el mapa" << endl;
                cout << "3. Salir del programa" << endl;
                int decision3;
                cin >> decision3;
                break;
            case 4:
            	cout << "\n---se adentra al bosque siniestro ---" << endl;
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
