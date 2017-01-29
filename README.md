IndentAsPrevious Notepad++ plugin is made to simplify work with differently indented files and projects.

It's purpose is to simply indent new line *exactly* as previous one. That's all.
It doesn't matter the previous line was tab or space indented (or even was a combination of both) — this plugin will make exact copy of all leading space from previous line to the new line when you press Return, and will place cursor exactly at the space ending, so you can code next line without any hassle.

NOTE: Of course you need to disable any other autoindentation features included in Notepad++ or added with other plugins.

Plugin can be enabled or disabled in the Notepad++ plugins menu (this is the only option plugin provides to the user).

Installation is simple. You need to download plugin from github releases and extract needed .dll file matching your Notapad++ build to the plugins directory (usually in C:\Program Files\Notepad++\plugins or C:\Program Files (x86)\Notepad++\plugins).

Starting from version 1.0.1, plugin .dll's are released in x86 and x64 both in Unicode and ANSI flavour: .dll with suffix "A" means ANSI, "U" means Unicode, "x32" means x86 (32-bit), "x64" means x86-64 (64-bit).

This plugin is based on reworked TabIndentSpaceAlign Notepad++ plugin.
