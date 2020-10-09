#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
using namespace std;

class music
{
    public:
        music();
        virtual ~music();
        string getId();
        string getNome();
        string getArtist();
        float getDanceability();
        float getEnergy();
        float getKey();
        float getLoudness();
        float getMode();
        float getSpeechiness();
        float getAcousticness();
        float getInstrumentalness();
        float getLiveness();
        float getValence();
        float getTempo();
        float getDuration();
        float getTimeSign();

        void setArtist(string artist);
        void setId(string id);
        void setNome(string nome);
        void setDanceability(float x);
        void setEnergy(float x);
        void setKey(float x);
        void setLoudness(float x);
        void setMode(float x);
        void setSpeechiness(float x);
        void setAcousticness(float x);
        void setInstrumentalness(float x);
        void setLiveness(float x);
        void setValence(float x);
        void setTempo(float x);
        void setDuration(float x);
        void setTimeSign(float x);
    protected:

    private:
       string id;
       string nome;
       string artists;
       float  danceability;
       float  energy;
       float key;
       float loudness;
       float mode;
       float speechiness;
       float acousticness;
       float instrumentalness;
       float liveness;
       float valence;
       float tempo;
       float duration_ms;
       float time_signature;
};

#endif // MUSIC_H
