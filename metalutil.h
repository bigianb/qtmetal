#ifndef METALUTIL_H
#define METALUTIL_H

#include "QtGui/qwindowdefs.h"
#include <Metal/Metal.hpp>
#include <QuartzCore/QuartzCore.hpp>

void assign_device(WId winId, MTL::Device* device);

CA::MetalDrawable* next_drawable(WId winId);

#endif // METALUTIL_H
