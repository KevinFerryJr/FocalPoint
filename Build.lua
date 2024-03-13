-- premake5.lua
workspace "FocalPoint"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "App"

   -- Workspace-wide build options for MSVC
   filter "system:windows"
      buildoptions { "/EHsc", "/Zc:preprocessor", "/Zc:__cplusplus" }

OutputDir = "%{cfg.system}-%{cfg.architecture}/%{cfg.buildcfg}"


include "Core/Build-Core.lua"

include "App/Build-App.lua"

include "Vendor/glfw-master/premake5.lua"