#include <webgpu/webgpu.h>
#include <iostream>
#include <thread>
#include <chrono>
#ifdef __EMSCRIPTEN__
#  include <emscripten.h>
#endif
#include <string_view>

std::string_view toStdStringView(WGPUStringView wgpuStringView) {
	return
		wgpuStringView.data == nullptr
		? std::string_view()
		: wgpuStringView.length == WGPU_STRLEN
		? std::string_view(wgpuStringView.data)
		: std::string_view(wgpuStringView.data, wgpuStringView.length);
}
WGPUStringView toWgpuStringView(std::string_view stdStringView) {
	return { stdStringView.data(), stdStringView.size() };
}
WGPUStringView toWgpuStringView(const char* cString) {
	return { cString, WGPU_STRLEN };
}
void sleepForMilliseconds(unsigned int milliseconds) {
#ifdef __EMSCRIPTEN__
	emscripten_sleep(milliseconds);
#else
	std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
#endif
}
// All utility functions are regrouped here