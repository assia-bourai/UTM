/*
 * TuringMachine.h
 *
 *  Created on: 29 oct. 2019
 *      Author: GIGABYTE
 */

#ifndef TURINGMACHINE_H_
#define TURINGMACHINE_H_
#include <map>
#include "Transition.h"
#include <string>
#include "Tape.h"
#include "State.h"


using namespace std;

class TuringMachine {
public:
	TuringMachine(string fileName, bool show_steps=0, bool show_states=0, bool show_tape=0) {
		//TODO initialiser la machine de turing selon le fichier en parametre
		/*
		 * Verifier toutes erreur de syntax possibble et renvoyer une exception si une
		 * erreur de syntax est trouv�.
		 * firstState : stocke le nom de l'etat initial
		 *
		 * states: la liste de tout les etats de la machine sont contenue dans un map, chaque
		 * element du map contient comme cl� le nom de l'etat, et comme element un objet State.
		 * Ne pas ajouter un element qui existe deja dans le map.
		 *
		 * pour chaque element dans states, ajouter les transitions li� � un etat dans le map "transitions"
		 * de l'objet State, Si une cl� dans le map transitions existe deja, renvoyer une exception (nous somme
		 * dans un cas deterministe, il ne peut y'avoir qu'une seul transition pour un etat et un input en particulier).
		 *
		 *De plus si la machine ne contient aucun etat ou aucune transition, renovyer une exception.
		 */
	}
	void runTuringMachine(string input) {
		//TODO run la machine de turing avec les inputs donn� en parametre. utiliser la methode transitionning de l'bojet stat pour
	    /*
	     * passer d'un etat � l'autre.
	     */
	}
	virtual ~TuringMachine();

private:
Tape tape;
map<string, State> states;
string inputs;
string firstState;
char blank='B';
bool show_steps, show_states, show_tape;

};

#endif /* TURINGMACHINE_H_ */