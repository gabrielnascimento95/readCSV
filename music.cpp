#include <music.h>

music::music()
{

}

music::~music()
{

}

string music::getId()
{
    return this->id;
}

string music::getNome()
{
    return this->nome;
}

float music::getDanceability()
{
    return this->danceability;
}

float music::getEnergy()
{
    return this->energy;
}

float music::getKey()
{
    return this->key;
}

float music::getLoudness()
{
    return this->loudness;
}

float music::getMode()
{
    return this->mode;
}

float music::getSpeechiness()
{
    return this->speechiness;
}

float music::getAcousticness()
{
    return this->acousticness;
}

float music::getInstrumentalness()
{
    return this->instrumentalness;
}

float music::getLiveness()
{
    return this->liveness;
}

float music::getValence()
{
    return this->valence;
}

float music::getTempo()
{
    return this->tempo;
}

float music::getDuration()
{
    return this->duration_ms;
}

float music::getTimeSign()
{
    return this->time_signature;
}

void music::setId(string id)
{
    this->id = id;
}

void music::setNome(string nome)
{
    this->nome = nome;
}

void music::setDanceability(float x)
{
    this->danceability = x;
}

void music::setEnergy(float x)
{
    this->energy = x;
}

void music::setKey(float x)
{
    this->key = x;
}

void music::setLoudness(float x)
{
    this->loudness = x;
}

void music::setMode(float x)
{
    this->mode = x;
}

void music::setSpeechiness(float x)
{
    this->speechiness = x;
}

void music::setAcousticness(float x)
{
    this->acousticness = x;
}

void music::setInstrumentalness(float x)
{
    this->instrumentalness = x;
}

void music::setLiveness(float x)
{
    this->liveness = x;
}

void music::setValence(float x)
{
    this->valence = x;
}

void music::setTempo(float x)
{
    this->tempo = x;
}

string music::getArtist()
{
    return this->artists;
}

void music::setArtist(string artist)
{
    this->artists = artist;
}

void music::setDuration(float x)
{
    this->duration_ms = x;
}

void music::setTimeSign(float x)
{
    this->time_signature = x;
}
