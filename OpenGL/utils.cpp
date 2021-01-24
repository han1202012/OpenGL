#include "utils.h"

// 加载文件方法声明
unsigned char* LoadFileContent(const char* filePath)
{
	// 该指针指向的内存空间存储文件内容
	unsigned char* fileContent = nullptr;

	// 打开文件
	FILE* pFile = fopen(filePath, "rb");

	// 如果打开文件成功
	if (pFile)
	{


	}


	return fileContent;
}