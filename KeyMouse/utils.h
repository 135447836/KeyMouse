#pragma once
#include <iostream>
#include "tag.h"
#include "ctx.h"


extern IUIAutomation *pAutomation;
inline void throw_if_fail(HRESULT hr);
HRESULT InitializeUIAutomation(IUIAutomation **ppAutomation);
HWND CreateTransparentWindow(HINSTANCE hInstance, HWND hMainWnd);
BOOL  EnumConditionedElement(HWND hMainWnd, HDC hdc);
bool isFocusOnEdit();
