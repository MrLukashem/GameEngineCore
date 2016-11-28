#pragma once

#include <vulkan\vulkan.h>
#include <iostream>

class EngineRenderer
{
public:
	EngineRenderer();
	~EngineRenderer();

private:
	VkInstance m_vkInstance = nullptr;
	VkDevice m_vkDevice = nullptr;

	VkResult createInstance();
	VkResult createDevice();

	void destroyInstance();
	void destroyDevice();
};

