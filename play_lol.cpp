#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "play_lol.hh"
#include "team.hh"
#include "player.hh"

//next: implement champs, minions, structures as entities
//dumb stat checks for now

play_lol_result play_lol(team BlueTeam, team RedTeam) {

    int BlueSuccess = 0;
    int RedSuccess = 0;
    int Randvalue;

    for(int i = 0; i < 14; i++) {
        //de facto RandomEvent();
        //later these events will mostly be invoked by the player objects themselves
        //the play_lol loop will handle the conditions and the grid
        srand(time(NULL));
        Randvalue = (rand() % 7) + 1;
        std::cout << "(Event " << Randvalue << ") ";
        switch (Randvalue) {
            case 1:
                if(BlueTeam.mid.stat1 + rand() % 31 > RedTeam.mid.stat2 + rand() % 21) {
                    BlueSuccess++;
                    std::cout << BlueTeam.mid.username << " kills " << RedTeam.mid.username;
                }
                else {
                    std::cout << BlueTeam.mid.username << " unsuccessfully tries to kill " << RedTeam.mid.username;
                }
                break;
            case 2:
                if(RedTeam.mid.stat1 + rand() % 31 > BlueTeam.mid.stat2 + rand() % 21) {
                    RedSuccess++;
                    std::cout << RedTeam.mid.username << " kills " << BlueTeam.mid.username;
                }
                else {
                    std::cout << RedTeam.mid.username << " unsuccessfully tries to kill " << BlueTeam.mid.username;
                }
                break;
            case 3:
                if(BlueTeam.jng.stat3 + rand() % 31 > RedTeam.jng.stat3 + rand() % 21) {
                    BlueSuccess++;
                    std::cout << BlueTeam.jng.username << " invades " << RedTeam.jng.username;
                }
                else {
                    std::cout << BlueTeam.jng.username << " unsuccessfully tries to invade " << RedTeam.jng.username;
                }
                break;
            case 4:
                if(RedTeam.jng.stat3 + rand() % 31 > RedTeam.jng.stat3 + rand() % 21) {
                    RedSuccess++;
                    std::cout << RedTeam.jng.username << " invades " << BlueTeam.jng.username;
                }
                else {
                    std::cout << RedTeam.jng.username << " unsuccessfully tries to invade " << BlueTeam.jng.username;
                }
                break;
            case 5:
                if(BlueTeam.top.stat1 + rand() % 31 > RedTeam.top.stat2 + rand() % 21) {
                    BlueSuccess++;
                    std::cout << BlueTeam.top.username << " kills " << RedTeam.top.username;
                }
                else {
                    std::cout << BlueTeam.top.username << " unsuccessfully tries to kill " << RedTeam.top.username;
                }
                break;
            case 6:
                if(RedTeam.top.stat1 + rand() % 31 > BlueTeam.top.stat2 + rand() % 21) {
                    RedSuccess++;
                    std::cout << RedTeam.top.username << " kills " << BlueTeam.top.username;
                }
                else {
                    std::cout << RedTeam.top.username << " unsuccessfully tries to kill " << BlueTeam.top.username;
                }
                break;
            case 7:
                int BotBlue; int BotRed;
                BotBlue = BlueTeam.adc.stat1 + BlueTeam.adc.stat2 + BlueTeam.sup.stat1 + BlueTeam.sup.stat2 + rand() % 101;
                BotRed = RedTeam.adc.stat1 + RedTeam.adc.stat2 + RedTeam.sup.stat1 + RedTeam.sup.stat2 + rand() % 101;

                if(BotBlue > BotRed + 30) {
                    BlueSuccess++; BlueSuccess++;
                    std::cout << "a fight breaks out in the bot lane - " << BlueTeam.adc.username << " and " << BlueTeam.sup.username << " kill " << RedTeam.adc.username << " and " << RedTeam.sup.username;
                }
                else if(BotBlue > BotRed + 10) {
                    BlueSuccess++;
                    std::cout << "a fight breaks out in the bot lane - " << BlueTeam.adc.username << " and " << BlueTeam.sup.username << " kill " << RedTeam.sup.username;
                }
                else if(BotRed > BotBlue + 30) {
                    RedSuccess++; RedSuccess++;
                    std::cout << "a fight breaks out in the bot lane - " << RedTeam.adc.username << " and " << RedTeam.sup.username << " kill " << BlueTeam.adc.username << " and " << BlueTeam.sup.username;
                }
                else if(BotRed > BotBlue + 10) {
                    RedSuccess++;
                    std::cout << "a fight breaks out in the bot lane - " << RedTeam.adc.username << " and " << RedTeam.sup.username << " kill " << BlueTeam.sup.username;
                }
                else {
                    std::cout << "a fight breaks out in the bot lane - nobody dies this time";
                }
                break;

        }

        std::cout << std::endl;
        _sleep(1000);

    }

    if (BlueSuccess >= RedSuccess) {
        return BlueWins;
    }
    else return RedWins;

    return error;
}
