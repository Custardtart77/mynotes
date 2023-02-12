#include <api_counter_layer.h>










void ApiCounterLayer::PostCallRecordAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout,
                                                        VkSemaphore semaphore, VkFence fence, uint32_t* pImageIndex,
                                                        VkResult result) {
    ++counter_map["AcquireNextImageKHR"];
}

void ApiCounterLayer::PostCallRecordAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo* pAllocateInfo,
                                                           VkCommandBuffer* pCommandBuffers, VkResult result) {
    ++counter_map["AllocateCommandBuffers"];
}

void ApiCounterLayer::PostCallRecordAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo* pAllocateInfo,
                                                           VkDescriptorSet* pDescriptorSets, VkResult result) {
    ++counter_map["AllocateDescriptorSets"];
}

void ApiCounterLayer::PostCallRecordAllocateMemory(VkDevice device, const VkMemoryAllocateInfo* pAllocateInfo,
                                                   const VkAllocationCallbacks* pAllocator, VkDeviceMemory* pMemory,
                                                   VkResult result) {
    ++counter_map["AllocateMemory"];
}

void ApiCounterLayer::PostCallRecordBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo* pBeginInfo,
                                                       VkResult result) {
    ++counter_map["BeginCommandBuffer"];
}
void ApiCounterLayer::PostCallRecordBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory,
                                                     VkDeviceSize memoryOffset, VkResult result) {
    ++counter_map["BindBufferMemory"];
}

void ApiCounterLayer::PostCallRecordBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory,
                                                    VkDeviceSize memoryOffset, VkResult result) {
    ++counter_map["BindImageMemory"];
}

void ApiCounterLayer::PostCallRecordCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo* pRenderPassBegin,
                                                       VkSubpassContents contents) {
    ++counter_map["CmdBeginRenderPass"];
}
void ApiCounterLayer::PostCallRecordCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                          VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount,
                                                          const VkDescriptorSet* pDescriptorSets, uint32_t dynamicOffsetCount,
                                                          const uint32_t* pDynamicOffsets) {
    ++counter_map["CmdBindDescriptorSets"];
}
void ApiCounterLayer::PostCallRecordCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset,
                                                       VkIndexType indexType) {
    ++counter_map["CmdBindIndexBuffer"];
}
void ApiCounterLayer::PostCallRecordCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint,
                                                    VkPipeline pipeline) {
    ++counter_map["CmdBindPipeline"];
}
void ApiCounterLayer::PostCallRecordCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding,
                                                         uint32_t bindingCount, const VkBuffer* pBuffers,
                                                         const VkDeviceSize* pOffsets) {
    ++counter_map["CmdBindVertexBuffers"];
}

void ApiCounterLayer::PostCallRecordCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout,
                                                 VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount,
                                                 const VkImageBlit* pRegions, VkFilter filter) {
    ++counter_map["CmdBlitImage"];
}
void ApiCounterLayer::PostCallRecordCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount,
                                                        const VkClearAttachment* pAttachments, uint32_t rectCount,
                                                        const VkClearRect* pRects) {
    ++counter_map["CmdClearAttachments"];
}
void ApiCounterLayer::PostCallRecordCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout,
                                                       const VkClearColorValue* pColor, uint32_t rangeCount,
                                                       const VkImageSubresourceRange* pRanges) {
    ++counter_map["CmdClearColorImage"];
}
void ApiCounterLayer::PostCallRecordCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage,
                                                         VkImageLayout dstImageLayout, uint32_t regionCount,
                                                         const VkBufferImageCopy* pRegions) {
    ++counter_map["CmdCopyBufferToImage"];
}
void ApiCounterLayer::PostCallRecordCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount,
                                            uint32_t firstVertex, uint32_t firstInstance) {
    ++counter_map["CmdDraw"];
}

void ApiCounterLayer::PreCallRecordCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount,
                                                  uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
    ++counter_map["CmdDrawIndexed"];
}

void ApiCounterLayer::PostCallRecordCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount,
                                                   uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
    ++counter_map["CmdDrawIndexed"];
}
void ApiCounterLayer::PostCallRecordCmdEndRenderPass(VkCommandBuffer commandBuffer) { ++counter_map["CmdEndRenderPass"]; }

void ApiCounterLayer::PostCallRecordCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount,
                                                       const VkCommandBuffer* pCommandBuffers) {
    ++counter_map["CmdExecuteCommands"];
}
void ApiCounterLayer::PostCallRecordCmdPipelineBarrier2(VkCommandBuffer commandBuffer, const VkDependencyInfo* pDependencyInfo) {
    ++counter_map["CmdPipelineBarrier2"];
}
void ApiCounterLayer::PostCallRecordCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout,
                                                     VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size,
                                                     const void* pValues) {
    ++counter_map["CmdPushConstants"];
}
void ApiCounterLayer::PostCallRecordCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery,
                                                      uint32_t queryCount) {
    ++counter_map["CmdResetQueryPool"];
}
void ApiCounterLayer::PostCallRecordCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
    ++counter_map["CmdSetEvent"];
}
void ApiCounterLayer::PostCallRecordCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount,
                                                  const VkRect2D* pScissors) {
    ++counter_map["CmdSetScissor"];
}
void ApiCounterLayer::PostCallRecordCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask,
                                                           uint32_t reference) {
    ++counter_map["CmdSetStencilReference"];
}
void ApiCounterLayer::PostCallRecordCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount,
                                                   const VkViewport* pViewports) {
    ++counter_map["CmdSetViewport"];
}
void ApiCounterLayer::PostCallRecordCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage,
                                                      VkQueryPool queryPool, uint32_t query) {
    ++counter_map["CmdWriteTimestamp"];
}

#ifdef VK_USE_PLATFORM_ANDROID_KHR
void ApiCounterLayer::PostCallRecordCreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR* pCreateInfo,
                                                            const VkAllocationCallbacks* pAllocator, VkSurfaceKHR* pSurface,
                                                            VkResult result) {
    ++counter_map["CreateAndroidSurfaceKHR"];
}
#endif  // VK_USE_PLATFORM_ANDROID_KHR

void ApiCounterLayer::PostCallRecordCreateBuffer(VkDevice device, const VkBufferCreateInfo* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator, VkBuffer* pBuffer, VkResult result) {
    ++counter_map["CreateBuffer"];
}
void ApiCounterLayer::PostCallRecordCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo* pCreateInfo,
                                                      const VkAllocationCallbacks* pAllocator, VkCommandPool* pCommandPool,
                                                      VkResult result) {
    ++counter_map["CreateCommandPool"];
}
void ApiCounterLayer::PostCallRecordCreateDebugReportCallbackEXT(VkInstance instance,
                                                                 const VkDebugReportCallbackCreateInfoEXT* pCreateInfo,
                                                                 const VkAllocationCallbacks* pAllocator,
                                                                 VkDebugReportCallbackEXT* pCallback, VkResult result) {
    ++counter_map["CreateDebugReportCallbackEXT"];
}
void ApiCounterLayer::PostCallRecordCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkDescriptorPool* pDescriptorPool,
                                                         VkResult result) {
    ++counter_map["CreateDescriptorPool"];
}

void ApiCounterLayer::PostCallRecordCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
                                                              const VkAllocationCallbacks* pAllocator,
                                                              VkDescriptorSetLayout* pSetLayout, VkResult result) {
    ++counter_map["CreateDescriptorSetLayout"];
}
void ApiCounterLayer::PostCallRecordCreateDescriptorUpdateTemplateKHR(VkDevice device,
                                                                      const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
                                                                      const VkAllocationCallbacks* pAllocator,
                                                                      VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate,
                                                                      VkResult result) {
    ++counter_map["CreateDescriptorUpdateTemplateKHR"];
}
void ApiCounterLayer::PostCallRecordCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo* pCreateInfo,
                                                 const VkAllocationCallbacks* pAllocator, VkDevice* pDevice, VkResult result) {
    ++counter_map["CreateDevice"];
}
void ApiCounterLayer::PostCallRecordCreateEvent(VkDevice device, const VkEventCreateInfo* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkEvent* pEvent, VkResult result) {
    ++counter_map["RecordCreateEvent"];
}
void ApiCounterLayer::PostCallRecordCreateFence(VkDevice device, const VkFenceCreateInfo* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkFence* pFence, VkResult result) {
    ++counter_map["CreateFence"];
}
void ApiCounterLayer::PostCallRecordCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo,
                                                      const VkAllocationCallbacks* pAllocator, VkFramebuffer* pFramebuffer,
                                                      VkResult result) {
    ++counter_map["CreateFramebuffer"];
}
void ApiCounterLayer::PostCallRecordCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache,
                                                            uint32_t createInfoCount,
                                                            const VkGraphicsPipelineCreateInfo* pCreateInfos,
                                                            const VkAllocationCallbacks* pAllocator, VkPipeline* pPipelines,
                                                            VkResult result) {
    ++counter_map["CreateGraphicsPipelines"];
}
void ApiCounterLayer::PostCallRecordCreateImage(VkDevice device, const VkImageCreateInfo* pCreateInfo,
                                                const VkAllocationCallbacks* pAllocator, VkImage* pImage, VkResult result) {
    ++counter_map["CreateImage"];
}
void ApiCounterLayer::PostCallRecordCreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkImageView* pView, VkResult result) {
    ++counter_map["CreateImageView"];
}
void ApiCounterLayer::PostCallRecordCreateInstance(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator,
                                                   VkInstance* pInstance, VkResult result) {
    ++counter_map["CreateInstance"];
}
void ApiCounterLayer::PostCallRecordCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo,
                                                        const VkAllocationCallbacks* pAllocator, VkPipelineCache* pPipelineCache,
                                                        VkResult result) {
    ++counter_map["CreatePipelineCache"];
}
void ApiCounterLayer::PostCallRecordCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkPipelineLayout* pPipelineLayout,
                                                         VkResult result) {
    ++counter_map["CreatePipelineLayout"];
}
void ApiCounterLayer::PostCallRecordCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkQueryPool* pQueryPool,
                                                    VkResult result) {
    ++counter_map["CreateQueryPool"];
}
void ApiCounterLayer::PostCallRecordCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2* pCreateInfo,
                                                         const VkAllocationCallbacks* pAllocator, VkRenderPass* pRenderPass,
                                                         VkResult result) {
    ++counter_map["CreateRenderPass2KHR"];
}
void ApiCounterLayer::PostCallRecordCreateSampler(VkDevice device, const VkSamplerCreateInfo* pCreateInfo,
                                                  const VkAllocationCallbacks* pAllocator, VkSampler* pSampler, VkResult result) {
    ++counter_map["CreateSampler"];
}
void ApiCounterLayer::PostCallRecordCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo,
                                                    const VkAllocationCallbacks* pAllocator, VkSemaphore* pSemaphore,
                                                    VkResult result) {
    ++counter_map["CreateSemaphore"];
}
void ApiCounterLayer::PostCallRecordCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo,
                                                       const VkAllocationCallbacks* pAllocator, VkShaderModule* pShaderModule,
                                                       VkResult result) {
    ++counter_map["CreateShaderModule"];
}
void ApiCounterLayer::PostCallRecordCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR* pCreateInfo,
                                                       const VkAllocationCallbacks* pAllocator, VkSwapchainKHR* pSwapchain,
                                                       VkResult result) {
    ++counter_map["CreateSwapchainKHR"];
}
void ApiCounterLayer::PostCallRecordDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyBuffer"];
}
void ApiCounterLayer::PostCallRecordDestroyCommandPool(VkDevice device, VkCommandPool commandPool,
                                                       const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyCommandPool"];
}
void ApiCounterLayer::PostCallRecordDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyEvent"];
}
void ApiCounterLayer::PostCallRecordDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyFence"];
}
void ApiCounterLayer::PostCallRecordDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer,
                                                       const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyFramebuffer"];
}
void ApiCounterLayer::PostCallRecordDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyImage"];
}
void ApiCounterLayer::PostCallRecordDestroyImageView(VkDevice device, VkImageView imageView,
                                                     const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroyImageView"];
}
void ApiCounterLayer::PostCallRecordDestroySemaphore(VkDevice device, VkSemaphore semaphore,
                                                     const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroySemaphore"];
}
void ApiCounterLayer::PostCallRecordDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface,
                                                      const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroySurfaceKHR"];
}
void ApiCounterLayer::PostCallRecordDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain,
                                                        const VkAllocationCallbacks* pAllocator) {
    ++counter_map["DestroySwapchainKHR"];
}
void ApiCounterLayer::PostCallRecordEndCommandBuffer(VkCommandBuffer commandBuffer, VkResult result) {
    ++counter_map["EndCommandBuffer"];
}
void ApiCounterLayer::PostCallRecordEnumeratePhysicalDevices(VkInstance instance, uint32_t* pPhysicalDeviceCount,
                                                             VkPhysicalDevice* pPhysicalDevices, VkResult result) {
    ++counter_map["EnumeratePhysicalDevices"];
}
void ApiCounterLayer::PostCallRecordFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount,
                                                            const VkMappedMemoryRange* pMemoryRanges, VkResult result) {
    ++counter_map["FlushMappedMemoryRanges"];
}
void ApiCounterLayer::PostCallRecordFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount,
                                                       const VkCommandBuffer* pCommandBuffers) {
    ++counter_map["FreeCommandBuffers"];
}
void ApiCounterLayer::PostCallRecordFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks* pAllocator) {
    ++counter_map["FreeMemory"];
}
void ApiCounterLayer::PostCallRecordGetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2* pInfo,
                                                                    VkMemoryRequirements2* pMemoryRequirements) {
    ++counter_map["GetBufferMemoryRequirements2KHR"];
}
void ApiCounterLayer::PostCallRecordGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex,
                                                   VkQueue* pQueue) {
    ++counter_map["GetDeviceQueue"];
}
void ApiCounterLayer::PostCallRecordGetFenceStatus(VkDevice device, VkFence fence, VkResult result) {
    ++counter_map["GetFenceStatus"];
}
void ApiCounterLayer::PostCallRecordGetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2* pInfo,
                                                                   VkMemoryRequirements2* pMemoryRequirements) {
    ++counter_map["GetImageMemoryRequirements2KHR"];
}
void PostCallRecordGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures* pFeatures) {
    ++counter_map["GetPhysicalDeviceFeatures"];
}

void ApiCounterLayer::PostCallRecordGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice,
                                                                  VkPhysicalDeviceFeatures2* pFeatures) {
    ++counter_map["GetPhysicalDeviceFeatures2KHR"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                      VkFormatProperties* pFormatProperties) {
    ++counter_map["GetPhysicalDeviceFormatProperties"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format,
                                                                           VkImageType type, VkImageTiling tiling,
                                                                           VkImageUsageFlags usage, VkImageCreateFlags flags,
                                                                           VkImageFormatProperties* pImageFormatProperties,
                                                                           VkResult result) {
    ++counter_map["GetPhysicalDeviceImageFormatProperties"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice,
                                                                      VkPhysicalDeviceMemoryProperties* pMemoryProperties) {
    ++counter_map["GetPhysicalDeviceMemoryProperties"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice,
                                                                VkPhysicalDeviceProperties* pProperties) {
    ++counter_map["GetPhysicalDeviceProperties"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice,
                                                                    VkPhysicalDeviceProperties2* pProperties) {
    ++counter_map["GetPhysicalDeviceProperties2KHR"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice,
                                                                           uint32_t* pQueueFamilyPropertyCount,
                                                                           VkQueueFamilyProperties* pQueueFamilyProperties) {
    ++counter_map["GetPhysicalDeviceQueueFamilyProperties"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                            VkSurfaceCapabilitiesKHR* pSurfaceCapabilities,
                                                                            VkResult result) {
    ++counter_map["GetPhysicalDeviceSurfaceCapabilitiesKHR"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                       uint32_t* pSurfaceFormatCount,
                                                                       VkSurfaceFormatKHR* pSurfaceFormats, VkResult result) {
    ++counter_map["GetPhysicalDeviceSurfaceFormatsKHR"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface,
                                                                            uint32_t* pPresentModeCount,
                                                                            VkPresentModeKHR* pPresentModes, VkResult result) {
    ++counter_map["GetPhysicalDeviceSurfacePresentModesKHR"];
}
void ApiCounterLayer::PostCallRecordGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex,
                                                                       VkSurfaceKHR surface, VkBool32* pSupported,
                                                                       VkResult result) {
    ++counter_map["GetPhysicalDeviceSurfaceSupportKHR"];
}
void ApiCounterLayer::PostCallRecordGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery,
                                                        uint32_t queryCount, size_t dataSize, void* pData, VkDeviceSize stride,
                                                        VkQueryResultFlags flags, VkResult result) {
    ++counter_map["GetQueryPoolResults"];
}
void ApiCounterLayer::PostCallRecordGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain,
                                                                  VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties,
                                                                  VkResult result) {
    ++counter_map["GetRefreshCycleDurationGOOGLE"];
};
void ApiCounterLayer::PostCallRecordGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t* pSwapchainImageCount,
                                                          VkImage* pSwapchainImages, VkResult result) {
    ++counter_map["GetSwapchainImagesKHR"];
}
void ApiCounterLayer::PostCallRecordMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size,
                                              VkMemoryMapFlags flags, void** ppData, VkResult result) {
    ++counter_map["MapMemory"];
}
void ApiCounterLayer::PostCallRecordQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo, VkResult result) {
    ++counter_map["QueuePresentKHR"];
}
void ApiCounterLayer::PostCallRecordQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo* pSubmits, VkFence fence,
                                                VkResult result) {
    ++counter_map["QueueSubmit"];
}
void ApiCounterLayer::PostCallRecordQueueWaitIdle(VkQueue queue, VkResult result) { ++counter_map["QueueWaitIdle"]; }
void ApiCounterLayer::PostCallRecordResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags,
                                                     VkResult result) {
    ++counter_map["ResetCommandPool"];
}
void ApiCounterLayer::PostCallRecordResetFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkResult result) {
    ++counter_map["ResetFences"];
}
void ApiCounterLayer::PostCallRecordUnmapMemory(VkDevice device, VkDeviceMemory memory) { ++counter_map["UnmapMemory"]; }

void ApiCounterLayer::PostCallRecordUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet,
                                                                       VkDescriptorUpdateTemplate descriptorUpdateTemplate,
                                                                       const void* pData) {
    ++counter_map["UpdateDescriptorSetWithTemplateKHR"];
}
void ApiCounterLayer::PostCallRecordWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence* pFences, VkBool32 waitAll,
                                                  uint64_t timeout, VkResult result) {
    ++counter_map["WaitForFences"];
}
void ApiCounterLayer::PostCallRecordCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer,
                                                  uint32_t regionCount, const VkBufferCopy* pRegions) {
    ++counter_map["CmdCopyBuffer"];
}