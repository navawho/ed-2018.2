#include <new>
using std::nothrow;

template <typename T>
struct Deque
{
	T *E,*D,*I,*F;
};

template <typename T>
bool inicializar (Deque<T> &D)
{
	D.I = new(nothrow) T[1];
	if (D.I == nullptr) {return true;}
	D.F = D.I;
	D.E == nullptr;
	D.D == nullptr;
	return false;
}

template <typename T>
void terminar (Deque<T> &D)
{
	delete[] D.I;
}

template <typename T>
bool vazio (Deque<T> &D)
{
	return D.E == nullptr;
}

template <typename T>
bool inserir_esq (Deque<T> &D, T e)
{
	
}


