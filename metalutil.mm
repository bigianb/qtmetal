
#include "AppKit/AppKit.h"
#include "QtGui/qwindowdefs.h"
#import <Metal/Metal.h>
#import <QuartzCore/CAMetalLayer.h>

#include <Foundation/Foundation.hpp>
#include <Metal/Metal.hpp>
#include <QuartzCore/QuartzCore.hpp>

void assign_device(WId winId, MTL::Device* device)
{
  CAMetalLayer *metalLayer = reinterpret_cast<CAMetalLayer *>(reinterpret_cast<NSView *>(winId).layer);
  metalLayer.device = (__bridge id<MTLDevice>)(device);
}

CA::MetalDrawable* next_drawable(WId winId)
{
  CAMetalLayer *metalLayer = reinterpret_cast<CAMetalLayer *>(reinterpret_cast<NSView *>(winId).layer);

  id <CAMetalDrawable> metalDrawable = [metalLayer nextDrawable];
  CA::MetalDrawable* pMetalCppDrawable = ( __bridge CA::MetalDrawable*) metalDrawable;
  return pMetalCppDrawable;
}

