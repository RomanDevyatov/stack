#ifndef _TStack_H_
#define _TStack_H_

#include <iostream>
using namespace std;

const int MaxMemSize = 255; // ìàêñèìàëüíûé ðàçìåð ïàìÿòè äëÿ ñòåêà
typedef double TELEM;       // òèï ýëåìåíòà ÑÄ
typedef TELEM *PTElem;      // òèï óêàçàòåëÿ íà ÑÄ
class TStack
{
protected:                             // ïîëÿ
  PTElem pMem;                         // óêàçàòåëü íà ìàññèâ ýëåìåíòîâ
  int MemSize;                         // ðàçìåð ïàìÿòè äëÿ ÑÄ
  int DataCount;                       // êîëè÷åñòâî ýëåìåíòîâ â ÑÄ
  int Hi;                              // èíäåêñ âåðøèíû ñòåêà
  virtual int GetNextIndex(int index); // ïîëó÷èòü ñëåäóþùèé èíäåêñ
public:
  TStack(int Size = MaxMemSize);  //êîíñòðóêòîð
  ~TStack();                      //äåñòðóêòîð
  int IsEmpty(void) const;        // êîíòðîëü ïóñòîòû
  int IsFull(void) const;         // êîíòðîëü ïåðåïîëíåíèÿ
  void InsElem(const TELEM &Val); // äîáàâèòü çíà÷åíèå
  virtual TELEM DelElem(void);    // èçâëå÷ü çíà÷åíèå
};
#endif 