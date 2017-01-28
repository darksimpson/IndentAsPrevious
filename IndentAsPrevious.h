#ifndef PLUGINDEFINITION_H
#define PLUGINDEFINITION_H

#include "NppPluginInterface.h"

void pluginInit(HANDLE hModule);
void pluginCleanUp();
void commandMenuInit();
void commandMenuCleanUp();
bool setCommand(size_t index, TCHAR *cmdName, PFUNCPLUGINCMD pFunc, ShortcutKey *sk = NULL, bool checkOnInit = false);

void basicAutoIndent();
void toggle();
void indent();
void unindent();

HWND getCurrentScintilla();

#endif // PLUGINDEFINITION_H
