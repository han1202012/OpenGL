#include "texture.h"
#include "utils.h"

// 实现纹理初始化方法
void Texture::Init(const char* imagePath) 
{
	// 从硬盘加载纹理文件到内存中
	// 纹理图片数据放在 imageFileContent 指针指向的内存中
	unsigned char* imageFileContent = LoadFileContent(imagePath);

	// 解码图片


	// 生成 OpenGL 纹理


}