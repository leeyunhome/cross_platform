#include <iostream>

template<typename T>
void MyStrCpy(T* pDest, size_t tDestSize, const T* pSrc)
{
	size_t i;
	for (i = 0; i < tDestSize && *pDest; pDest++, pSrc++)
		(*pDest) = (*pSrc);
}

static void CodeGenerator(void)
{
	MyStrCpy<char>(NULL, 0, NULL);
	MyStrCpy<wchar_t>(NULL, 0, NULL);
}