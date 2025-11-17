#pragma once

#include <webgpu/webgpu.h>

//AYNC operation. 
WGPUAdapter requestAdapterSync(WGPUInstance instance, WGPURequestAdapterOptions const * options);

void inspectAdapter(WGPUAdapter adapter);

WGPUDevice requestDeviceSync(WGPUAdapter adapter,WGPUDeviceDescriptor const* descriptor);

void inspectDevice(WGPUDevice device);


