#include <iostream>
#include "play_lol.hh"
#include "team.hh"
#include "player.hh"

//autistic manual decs for now
player Gramm;
player ZiBuDo;
player CaberCommander;
player Laymonane;
player elmer320;

player Coach;
player Seanward;
player BuzzfeedJones;
player DennisBot;
player MixedOlives;

team Unsnipped;
team Memes;

void BeAutistic(){
    Gramm.username = "Gramm"; Gramm.stat1 = 50; Gramm.stat2 = 50; Gramm.stat3 = 50;
    ZiBuDo.username = "ZiBuDo"; ZiBuDo.stat1 = 50; ZiBuDo.stat2 = 50; ZiBuDo.stat3 = 50;
    CaberCommander.username = "CaberCommander"; CaberCommander.stat1 = 50; CaberCommander.stat2 = 50; CaberCommander.stat3 = 50;
    Laymonane.username = "Laymonane"; Laymonane.stat1 = 50; Laymonane.stat2 = 50; Laymonane.stat3 = 50;
    elmer320.username = "elmer320"; elmer320.stat1 = 50; elmer320.stat2 = 50; elmer320.stat3 = 50;

    Coach.username = "Coach"; Coach.stat1 = 55; Coach.stat2 = 55; Coach.stat3 = 55;
    Seanward.username = "Seanward"; Seanward.stat1 = 55; Seanward.stat2 = 55; Seanward.stat3 = 55;
    BuzzfeedJones.username = "BuzzfeedJones"; BuzzfeedJones.stat1 = 55; BuzzfeedJones.stat2 = 55; BuzzfeedJones.stat3 = 55;
    DennisBot.username = "DennisBot"; DennisBot.stat1 = 55; DennisBot.stat2 = 55; DennisBot.stat3 = 55;
    MixedOlives.username = "MixedOlives"; MixedOlives.stat1 = 55; MixedOlives.stat2 = 55; MixedOlives.stat3 = 55;

    Unsnipped.top = elmer320;
    Unsnipped.jng = CaberCommander;
    Unsnipped.mid = ZiBuDo;
    Unsnipped.adc = Gramm;
    Unsnipped.sup = Laymonane;

    Memes.top = Coach;
    Memes.jng = DennisBot;
    Memes.mid = BuzzfeedJones;
    Memes.adc = Seanward;
    Memes.sup = MixedOlives;
};

//end of autism

int main()
{
    BeAutistic(); //manually sets values
    //std::cout << Seanward.stat1 << std::endl;

    play_lol_result CurrentResult = play_lol(Unsnipped, Memes); //BlueWins;

    if (CurrentResult == BlueWins) {
        std::cout << "\nBlue team wins\n";
    }
    else if (CurrentResult == RedWins) {
        std::cout << "\nRed team wins\n";
    }
    else if (CurrentResult == error) {
        std::cout << "\nan autism error of tier 1 occurred\n";
    }
    else {
        std::cout << "\nan autism error of tier 2 occurred\n";
    }

    //std::cout << "i am not hanging" << std::endl;
    return 0;
}
