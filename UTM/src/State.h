/*
 * State.h
 *
 *  Created on: 29 oct. 2019
 *      Author: GIGABYTE
 */

#ifndef STATE_H_
#define STATE_H_
#include <string>
#include <map>
#include "Transition.h"

using namespace std;

class State {
public:
	State(bool final_state=0):final_state(final_state){};
	virtual ~State();
	void insertTransition(string initial_state, char input_symbol, char output_symbol,
			char direction, string next_state) {
		//TODO inserer une transition dans le map transitions.
	}

	bool hasInputSymbol(char input_symbol) {
		//TODO Check si le symbol en entrer est deja dans la map de transition.
	}

	string transitioning(Tape& tape) {
		//TODO transitionner de l'etat actuel au nextstate, modifier la tape et d�placer l'entete
		// si aucune transition dans la liste des transitions n'est trouv�, reject

	}

private:
	bool final_state =0;
	map<string, Transition> transitions;
};

#endif /* STATE_H_ */