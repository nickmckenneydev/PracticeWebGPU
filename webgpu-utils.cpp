#include "webgpu-utils.h"

#ifdef __EMSCRIPTEN__
#  include <emscripten.h>
#endif // __EMSCRIPTEN__

#include <iostream>
#include <vector>
#include <cassert>

WGPUAdapter requestAdapterSync(WGPUInstance instance, WGPURequestAdapterOptions const* options)
{
    
}	

void inspectAdapter(WGPUAdapter adapter){}

WGPUDevice requestDeviceSync(WGPUAdapter adapter,WGPUDeviceDescriptor const* descriptor){}

void inspectDevice(WGPUDevice device){}