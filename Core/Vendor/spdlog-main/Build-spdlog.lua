project "spdlog"
	kind "StaticLib"
	language "C"
	staticruntime "off"
	warnings "off"

	targetdir ("bin/" .. OutputDir .. "/%{prj.name}")
	objdir ("bin-int/" .. OutputDir .. "/%{prj.name}")

	includedirs
	{
	   "src",
	   "include"
	}

	defines
	{
		"SPDLOG_COMPILED_LIB"
	}

	filter "system:windows"
		systemversion "latest"

		files
		{
			"include/**.h",
			"include/**.cpp",
			"src/**.h",
			"src/**.cpp"
		}
		
	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter { "system:windows", "configurations:Debug-AS" }	
		runtime "Debug"
		symbols "on"
		sanitize { "Address" }
		flags { "NoRuntimeChecks", "NoIncrementalLink" }

	filter "configurations:Release"
		runtime "Release"
		optimize "speed"

    filter "configurations:Dist"
		runtime "Release"
		optimize "speed"
        symbols "off"
