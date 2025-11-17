// Includes
#include <webgpu/webgpu.h>
#include <iostream>
#include <thread>
#include <chrono>
#ifdef __EMSCRIPTEN__
#  include <emscripten.h>
#endif
#include <string_view>

int main() {

// typedef struct WGPURequestAdapterOptions {
//     WGPUChainedStruct * nextInChain;
//     WGPUFeatureLevel featureLevel;
//     WGPUPowerPreference powerPreference;
//     WGPUBool forceFallbackAdapter;
//     WGPUBackendType backendType;
//     WGPU_NULLABLE WGPUSurface compatibleSurface;
// } WGPURequestAdapterOptions WGPU_STRUCTURE_ATTRIBUTE;

struct WGPURequestAdapterOptions adapterOptions;

WGPUAdapter adapter = requestAdapterSync(instance,&adapterOptions);
}