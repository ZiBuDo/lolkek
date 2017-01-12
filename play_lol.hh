#ifndef PLAY_LOL
#define PLAY_LOL

#include "team.hh"

enum play_lol_result {BlueWins, RedWins, error};

play_lol_result play_lol(team BlueTeam, team RedTeam);

#endif
