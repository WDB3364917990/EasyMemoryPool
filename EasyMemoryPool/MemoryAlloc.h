#ifndef _MEMORYALLOC_H_
#define _MEMORYALLOC_H_

class MemoryAlloc
{
public:
	MemoryAlloc();
	~MemoryAlloc();
	void* alloc(size_t size);
	void free(void* p);
	void init();
private:
	MemoryBlock* pMemory; // �ڴ�ص�ַ
	size_t blockSize; // �ڴ浥Ԫ��С
	size_t blockNum; // �ڴ浥Ԫ����
};



#endif // !_MEMORYALLOC_H_

