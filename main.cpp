#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <music.h>
#include <stdlib.h>
#include <insertSort.h>
#include <megeSort.h>
#include <vector>

using namespace std;

void mergeSort(vector<string> strings, int esq, int meio, int dir){
    int i, j, k;
    int n1 = meio - esq + 1;
    int n2 = dir - meio;

    string esqV[n1];
    string dirV[n2];

    for (i = 0; i < n1; i++)
        esqV[i] = strings[esq + i];
    for (j = 0; j < n2; j++)
        dirV[j] = strings[meio + 1 + j];

    i = 0;
    j = 0;
    k = esq;

    while (i < n1 && j < n2){
        if (esqV[i].compare(dirV[j]) <= 0){
            strings[k] = esqV[i];
            i++;
        }else{
            strings[k] = dirV[j];
            j++;
        }
        k++;
    }

     while (i < n1){
        strings[k] = esqV[i];
        i++;
        k++;
    }

    while (j < n2){
        strings[k] = dirV[j];
        j++;
        k++;
    }
}

void doMergeSortString(vector<string> strings, int esq, int dir){
	if(esq > dir){
        int meio = esq+(dir-esq)/2;
        doMergeSortString(strings, esq, meio);
        doMergeSortString(strings, meio+1, dir);
        mergeSort(strings, esq, meio, dir);
	}
}
vector<string> insertSortString(vector<string> strings){
	string key;
	int j;
	for(int i = 1; i < strings.size(); i++){
        key = strings[i];
		j = i;
		while(j > 0 && strings[j-1].compare(key) > 0){
            strings[j] = strings[j-1];
            j--;
		}
		strings[j] = key;
	}
	return strings;
}

int main(){

    ifstream myfile("C:\\Users\\gabri\\CLionProjects\\InOut\\top2018.csv");
    ofstream out("saida.txt");

    if(!myfile.is_open()){
        cout << "erro";
    }
    string str;
    int i = 0;
    music *vet = new music[100]; //alocando espaco para o vetor
    getline(myfile, str);
    while(myfile.peek()!=EOF){
            string line;
        //armazenando os objs num vetor de music
            getline(myfile, line, ',');
            vet[i].setId(line);
            line.clear();
            getline(myfile, line, ',');
            vet[i].setNome(line);
            line.clear();
            getline(myfile, line, ',');
            vet[i].setArtist(line);
            line.clear();
            getline(myfile, line, ',');
            vet[i].setDanceability(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setEnergy(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setKey(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setLoudness(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setMode(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setSpeechiness(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setAcousticness(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setInstrumentalness(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setLiveness(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setValence(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setTempo(atof(line.c_str()));
            line.clear();
            getline(myfile, line, ',');
            vet[i].setDuration(atof(line.c_str()));
            line.clear();
            getline(myfile, line, '\n');
            vet[i].setTimeSign(atof(line.c_str()));
            line.clear();
            i++;
    }

    vector<string> s;
    for(int i = 0; i <100; i++){ //salvando as musicas no vector de strings
        s.push_back(vet[i].getArtist());
        cout << vet[i].getArtist() << endl;
    }

    vector<string> sorted = insertSortString(s);
    cout << "lista ordenada por musica";

    for(int i = 0; i < sorted.size(); i++){ //imprimindo a saida na tela e no arquivo txt
        cout << sorted[i] << endl;
        out << sorted[i] << endl;
    }
    out.close();
    delete vet;

    /*
    insertSort *obj = new insertSort();
    megeSort *obj2 = new megeSort();

    //vetor para teste
    int vet[] = {40,59,5,1,11,18,95,45};
    //testando insertsort
    obj->insertSortAction(vet, 8);
    obj->imprimeArray(vet, 8);
    delete obj;

    //testando mergeSort
    int vet[] = {40,59,5,1,11,18,95,45};
    megeSort *obj2 = new megeSort();
    obj2->mergeSortAction(vet,8);
    obj2->imprimeArray(vet,8);
    delete obj2;
    */

    return 0;
}
