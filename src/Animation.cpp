#include "Animation.h"

Animation::Animation( vector<int> velocity, vector<FractalMode*> fractals){
    this->velocity = velocity;
    this->fractals = fractals;

    for(unsigned int i=0; i<velocity.size(); i++){
        counter.push_back(0);
    }
}

void Animation::tick(){
    if(animating){
        for(unsigned int i=0; i<counter.size(); i++){
            counter[i]++;
            if(counter[i] == velocity[i]){
                counter[i]=0;

                if(fractals[i]->getLevels() == 6){
                    Levels = false;
                }else if(fractals[i]->getLevels()==0){
                    Levels = true;
                }
                if(Levels){
                    fractals[i]->addLevels();
                }else {
                    fractals[i]->substractLevels();
                }
            }

        }
    }
}
void Animation::draw(){
    if(animating){
        for(unsigned int i=0; i<fractals.size(); i++){
            fractals[i]->draw();
        }
    }
}