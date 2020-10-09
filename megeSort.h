#ifndef MEGESORT_H
#define MEGESORT_H


class megeSort
{
    public:
        megeSort();
        virtual ~megeSort();
        void mergeSortAction(int *vet, int siz);
        void imprimeArray(int *vet, int siz);
    protected:

    private:
        void doMerge(int *vet, int tamanho);
};

#endif // MEGESORT_H
