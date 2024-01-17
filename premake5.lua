workspace "AudIo"
   configurations { "Debug", "Release" }

project "AudIo"
    kind "ConsoleApp"
    language "C++"
    staticruntime "off"

    targetdir "bin/target/%{cfg.buildcfg}/%{prj.name}"
    objdir "bin/obj/%{cfg.buildcfg}/%{prj.name}"

    pchheader "miniaudio.h"

    files {
      "src/**.cpp",
      "src/**.h",
      "src/**.hpp"
    }

    links {

    }

    includedirs {
      "include",
      "src"
    }


  filter "configurations:Debug"
    defines "BUILD_DEBUG"
    symbols "On"

  filter "configurations:Release"
    defines "BUILD_RELEASE"
    optimize "On"
