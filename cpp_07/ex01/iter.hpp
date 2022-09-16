#ifndef		ITER_HPP 
# define	ITER_HPP

#include <string>
#include <iostream>
template<typename T>
void	iter(T *_Array, int _Size, void (*func)(T &))
{
    if (_Array == NULL)
        return;
    else
    {
	    for (int i = 0; i < _Size; i++)
		    func(_Array[i]);
    }
}

#endif // ITER_HPP