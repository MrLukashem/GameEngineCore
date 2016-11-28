#include "EngineRenderer.h"



EngineRenderer::EngineRenderer()
{
	auto err = createInstance();
	if (err != VK_SUCCESS) {
		//TODO: More Custom information when err != VK_SUCCESS exception occurs.
		throw std::exception("err != VK_SUCCESS");
	}

	err = createDevice();
	if (err != VK_SUCCESS) {
		//TODO: Handle an error.
	}
}

EngineRenderer::~EngineRenderer()
{
	destroyInstance();
	destroyDevice();
}

VkResult EngineRenderer::createInstance()
{
	VkInstanceCreateInfo vk_instance_info{};
	vk_instance_info.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;

	return vkCreateInstance(&vk_instance_info, nullptr, &m_vkInstance);
}

VkResult EngineRenderer::createDevice()
{
	return VkResult();
}

void EngineRenderer::destroyInstance()
{
	vkDestroyInstance(m_vkInstance, nullptr);
	m_vkInstance = nullptr;
}

void EngineRenderer::destroyDevice()
{
	vkDestroyDevice(m_vkDevice, nullptr);
	m_vkDevice = nullptr;
}
