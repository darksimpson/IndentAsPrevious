IndentAsPrevious Notepad++ plugin is made to simplify work with differently indented files and projects.

It's purpose is to simply indent new line *exactly* as previous one. That's all.
It doesn't matter the previous line was tab or space indented (or even was a combination of both) — this plugin will simply make exact copy of all leading space in previous line to the new line when you press Return, and will place cursor exactly at the space ending, so you can code next line witout any hassle.

NOTE: Of course you need to disable any other autoindentation features included in Notepad++ or added with other plugins.

Plugin can be enabled or disabled in the Notepad++ plugins menu (this is the only option plugin provides to the user).

Installation is simple. You need to download plugin from github releases and extract .dll file to the Notepad++ plugins directory (usually in C:\Program Files\Notepad++\plugins or C:\Program Files (x86)\Notepad++\plugins for x86 version of Notepad++). Plugin .dll is released only in Unicode x86 flavour, so if you need Non-Unicode or x64 version, you can build it by youself using free Microsoft Visual Studio 2015 Community Edition.

This plugin is based on reworked TabIndentSpaceAlign Notepad++ plugin by 
