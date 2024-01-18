#include "personality_test.hpp"
#include <iostream>
#include <limits>

#define ICE 'I'
#define PANDA 'P'
#define GRIZZLY 'G'

#define ANIME 'A'
#define CLEANING 'L'
#define POP_MUSIC 'M'

#define SEALS 'F'
#define BAMBU 'B'
#define FISH 'P'

#define CHANNEL_QUESTION 'C'
#define FOOD_QUESTION 'X'
#define TOWER_QUESTION 'T'
#define SCREAM_QUESTION 'S'

const int CLEANING_POINTS = 1;
const int ANIME_POINTS = 2;
const int POP_MUSIC_POINTS = 3;

const int SEALS_POINTS = 3;
const int BAMBU_POINTS = 6;
const int FISH_POINTS = 9;

const int MINIMUM_OPTION = 1;
const int MAXIMUM_OPTION = 18;

const int LOWER_LIMIT_ICE = 5;
const int UPPER_LIMIT_ICE = 24;
const int LOWER_LIMIT_PANDA = 25;
const int UPPER_LIMIT_PANDA = 43;


//Pre condition:  Receives a char that represents the type of question.
//Post condition: Prints a question that depends on the type of question.
void print_question(char question_type){
	switch(question_type){
		case CHANNEL_QUESTION:
		std::cout << "You are going to watch TV for a while, you put the channel of: Anime (A), Pop Music (M), Cleaning (L).\n";
		break;
		case FOOD_QUESTION:
		std::cout << "You can only save one food in your lunch box: Bamboo (B), Fish (P), Seals (F).\n";
		break;
		case TOWER_QUESTION:
		std::cout << "You buy a tower with your two 18-story brothers. What floor would you like to live on?\n";
		break;
		case SCREAM_QUESTION:
		std::cout << "Oh, a rat! How loud do you scream from 1 to 18? Being 1 not to scream and 18 to tear your throat.\n";
		break;
	}
}

//Pre condition:  Receives a char that represents the type of question.
//Post condition: Prints a warning message that depends on the type of question.
void print_warning_message(char question_type){
	if ((question_type == CHANNEL_QUESTION) || (question_type == FOOD_QUESTION)){
		std::cout << "Invalid answer. Please enter one of the letters indicated.\n";
	} else {
		std::cout << "Invalid answer. Please enter a valid number.\n";
	}
}

//Pre condition:  Receives a char that represents the chosen channel.
//Post condition: Returns true if the answer is one of the valid options:
//				  ANIME, POP_MUSIC or CLEANING. Returns false otherwise.
bool verify_answer_channel(char channel){
	return ((channel == ANIME) || (channel == POP_MUSIC) || (channel == CLEANING));
}

//Pre condition:  Receives a char that represents the chosen food.
//Post condition: Returns true if the answer is one of the valid options:
//				  SEALS, BAMBU or FISH. Returns false otherwise.
bool verify_answer_food(char food){
	return ((food == SEALS) || (food == BAMBU) || (food == FISH));
}

//Pre condition:  Receives an int that represents the chosen answer.
//Post condition: Returns true if the answer is one of the valid options:
//				  Numbers between MINIMUM_OPTION and MAXIMUM_OPTION inclusive. 
//				  Returns false otherwise.
bool verify_answer_integer(int answer){
	return ((answer >= MINIMUM_OPTION) && (answer <= MAXIMUM_OPTION));
}

//Pre condition:  Receives the type of question and a function pointer to verify the answer.
//Post condition: Asks the question and stores the answer in the memory address provided.
template <typename T>
T obtain_answer(char question_type, bool (*verify_answer) (T)) {
	T answer = 0;
	print_question(question_type);
	std::cin >> answer;
	while(!verify_answer(answer)){
		print_warning_message(question_type);
		print_question(question_type);
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> answer;
	}
	return answer;
}

//Pre condition:  Receives a char that represent the channel chosen.
//Post condition: Returns an int with the points obtained by the chosen channel.
int obtain_points_channel(char chosen_channel){
	int points = 0;
	switch (chosen_channel){
		case CLEANING:
		points = CLEANING_POINTS;
		break;
		case ANIME:
		points = ANIME_POINTS;
		break;
		case POP_MUSIC:
		points = POP_MUSIC_POINTS;
		break;
	}
	return points;
}

//Pre condition:  Receives a char that represent the food chosen.
//Post condition: Returns an int with the points obtained by the chosen food.
int obtain_points_food(char chosen_food){
	int points = 0;
	switch (chosen_food){
		case SEALS:
		points = SEALS_POINTS;
		break;
		case BAMBU:
		points = BAMBU_POINTS;
		break;
		case FISH:
		points = FISH_POINTS;
		break;
	}
	return points;
}

//Pre condition:  Receives an int that represent the points obtained by the chosen channel,
//				  an int that represent the points obtained by the chosen food,
//				  an int that represent the chosen floor and an int that represent the chosen scream.
//Post condition: Returns an int with the total score obtained by the user.
int obtain_total_score(int channel_points, int food_points, int floor, int scream){
	return ((channel_points * food_points) + floor + scream);
}

//Pre condition:  Receives an int that represent the total score obtained by the user.
//Post condition: Returns a char that represent the personality of the user.
//				  The options are ICE, PANDA or GRIZZLY.
char obtain_personality(int score){
	if ((score >= LOWER_LIMIT_ICE) && (score <= UPPER_LIMIT_ICE)){
		return ICE;
	} else if ((score >= LOWER_LIMIT_PANDA) && (score <= UPPER_LIMIT_PANDA)){
		return PANDA;
	} else {
		return GRIZZLY;
	}
}

//Pre condition:  Receives a char that represent the personality of the user.
//Post condition: Prints a message that depends on the personality of the user.
void print_personality(char personality){
	switch (personality){
		case ICE:
		std::cout << "Your personality is - Ice Bear (I) -!\n";
		break;
		case PANDA:
		std::cout << "Your personality is - Panda Bear (P) -!\n";
		break;
		case GRIZZLY:
		std::cout << "Your personality is - Grizzly Bear (G) -!\n";
		break;
	}
}

char personality_test(){
	char channel = obtain_answer<char>(CHANNEL_QUESTION, verify_answer_channel);
	char food = obtain_answer<char>(FOOD_QUESTION, verify_answer_food);	
	int floor = obtain_answer<int>(TOWER_QUESTION, verify_answer_integer);
	int scream = obtain_answer<int>(SCREAM_QUESTION, verify_answer_integer);

	int channel_points = obtain_points_channel(channel);
	int food_points = obtain_points_food(food);
	int total_score = obtain_total_score(channel_points, food_points, floor, scream);

	char personality = obtain_personality(total_score);
	print_personality(personality);
	return personality;
}