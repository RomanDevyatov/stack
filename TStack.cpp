#include "TStack.h"

TStack ::TStack(int Size)
{ 
  DataCount = 0;
  if (Size == 0)
  {
    Size = MaxMemSize;
    pMem = NULL;
  }
  MemSize = Size;
  pMem = NULL;
  pMem = new TELEM[MemSize];
  Hi = -1;
}
TStack ::~TStack()
{ 
  pMem = NULL;
  delete[] pMem;
}
int TStack ::GetNextIndex(int index)
{ 
  return ++index;
}
int TStack ::IsEmpty(void) const
{
  return (DataCount == 0);
}
int TStack ::IsFull(void) const
{
  return (DataCount == MemSize);
}
void TStack::InsElem(const TELEM &Val)
{ 
  Hi = GetNextIndex(Hi);
  pMem[Hi] = Val;
  DataCount++;
}
TELEM TStack::DelElem(void)
{ 
  DataCount--;
  return pMem[Hi--];
}