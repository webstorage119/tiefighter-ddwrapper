// Generated with:
// ddwrappergen 1.130524 (c)2013 Jari Komppa http://iki.fi/sol/
//
// If you wish to use the generator, don't do manual changes to this file
// This is your first and only warning.
//
// This software is provided 'as-is', without any express or implied
// warranty. In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 
// 1. The origin of this software must not be misrepresented; you must not
// claim that you wrote the original software. If you use this software
// in a product, an acknowledgment in the product documentation would be
// appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not be
// misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source
// distribution.

#pragma once
class myIDirectDrawPalette;

class myIDirectDrawSurface : public IDirectDrawSurface
{
public:
  myIDirectDrawSurface(IDirectDrawSurface * aOriginal, LPDDSURFACEDESC aSurfacedesc);
  ~myIDirectDrawSurface();

  HRESULT __stdcall QueryInterface(REFIID riid, LPVOID FAR * ppvObj);
  ULONG __stdcall AddRef();
  ULONG __stdcall Release();
  HRESULT __stdcall AddAttachedSurface(LPDIRECTDRAWSURFACE a);
  HRESULT __stdcall AddOverlayDirtyRect(LPRECT a);
  HRESULT __stdcall Blt(LPRECT a, LPDIRECTDRAWSURFACE b, LPRECT c, DWORD d, LPDDBLTFX e);
  HRESULT __stdcall BltBatch(LPDDBLTBATCH a, DWORD b, DWORD c);
  HRESULT __stdcall BltFast(DWORD a, DWORD b, LPDIRECTDRAWSURFACE c, LPRECT d, DWORD e);
  HRESULT __stdcall DeleteAttachedSurface(DWORD a, LPDIRECTDRAWSURFACE b);
  HRESULT __stdcall EnumAttachedSurfaces(LPVOID a, LPDDENUMSURFACESCALLBACK b);
  HRESULT __stdcall EnumOverlayZOrders(DWORD a, LPVOID b, LPDDENUMSURFACESCALLBACK c);
  HRESULT __stdcall Flip(LPDIRECTDRAWSURFACE a, DWORD b);
  HRESULT __stdcall GetAttachedSurface(LPDDSCAPS a, LPDIRECTDRAWSURFACE FAR * b);
  HRESULT __stdcall GetBltStatus(DWORD a);
  HRESULT __stdcall GetCaps(LPDDSCAPS a);
  HRESULT __stdcall GetClipper(LPDIRECTDRAWCLIPPER FAR * a);
  HRESULT __stdcall GetColorKey(DWORD a, LPDDCOLORKEY b);
  HRESULT __stdcall GetDC(HDC FAR * a);
  HRESULT __stdcall GetFlipStatus(DWORD a);
  HRESULT __stdcall GetOverlayPosition(LPLONG a, LPLONG b);
  HRESULT __stdcall GetPalette(LPDIRECTDRAWPALETTE FAR * a);
  HRESULT __stdcall GetPixelFormat(LPDDPIXELFORMAT a);
  HRESULT __stdcall GetSurfaceDesc(LPDDSURFACEDESC a);
  HRESULT __stdcall Initialize(LPDIRECTDRAW a, LPDDSURFACEDESC b);
  HRESULT __stdcall IsLost();
  HRESULT __stdcall Lock(LPRECT a, LPDDSURFACEDESC b, DWORD c, HANDLE d);
  HRESULT __stdcall ReleaseDC(HDC a);
  HRESULT __stdcall Restore();
  HRESULT __stdcall SetClipper(LPDIRECTDRAWCLIPPER a);
  HRESULT __stdcall SetColorKey(DWORD a, LPDDCOLORKEY b);
  HRESULT __stdcall SetOverlayPosition(LONG a, LONG b);
  HRESULT __stdcall SetPalette(LPDIRECTDRAWPALETTE a);
  HRESULT __stdcall Unlock(LPVOID a);
  HRESULT __stdcall UpdateOverlay(LPRECT a, LPDIRECTDRAWSURFACE b, LPRECT c, DWORD d, LPDDOVERLAYFX e);
  HRESULT __stdcall UpdateOverlayDisplay(DWORD a);
  HRESULT __stdcall UpdateOverlayZOrder(DWORD a, LPDIRECTDRAWSURFACE b);

  IDirectDrawSurface * mOriginal;
  DDSURFACEDESC mSurfaceDesc;
  myIDirectDrawPalette *mCurrentPalette;
  unsigned char * mSurfaceData;
  unsigned char * mRealSurfaceData;
  int mWidth;
  int mHeight;
  int mPitch;
};

