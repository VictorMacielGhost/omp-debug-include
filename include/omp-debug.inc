/*

    Main include file 
    @Created on: 23/08/24
    @Edited on: 24/08/24
    @Version: InDev 0.2 
    @Author: Victor Ghost and contributors. Thanks to the Silva Scripter community :)
    @Github: https://github.com/VictorMacielGhost/omp-debug-include

    This file will use DD/MM/YY or DD/MM/YYYY for dates
    This file will also use American English 

    This code is free to use and modify. Do not remove credits.    
*/

#if defined omp_debug_included
    #warning omp_debug include has been included twice.
    #endinput
#endif

// #define OMP_DEBUG_NO_HELP_WARNINGS 
#define OMP_DEBUG_VERSION "inDev 0.2"
#define omp_debug_included

#tryinclude <open.mp>
#if defined omp_defined // Change to the actual definition, as it is not remembered right now
    #define OMP_DEBUG_USING_OMP_SERVER
#else
    #tryinclude <a_samp>
    #if !defined samp_defined // Change to the actual definition
        #error You must include open.mp or a_samp before using OMP_DEBUG!
    #else
        #define OMP_DEBUG_USING_SAMP_SERVER
    #endif
#endif

// Use #define OMP_DEBUG_NO_HELP_WARNINGS to disable the warnings below

#if defined streamer_included // Change to actual definition
    #define OMP_DEBUG_USING_STREAMER
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning The script was compiled without streamer; the debugger will use the SAMP native object reader
#endif

#if defined sscanf_included // Change to actual definition
    #define OMP_DEBUG_USING_SSCANF
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning Couldn't find sscanf. Some string debugging functions might not be available
#endif

#if defined ysi_included // Change to actual definition
    #define OMP_DEBUG_USING_YSI
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning YSI wasn't found. Foreach loops, function hooks, and event hooks won't be available
#endif

#if defined crashdetect_included // Change to actual definition
    #define OMP_DEBUG_USING_CRASHDETECT
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning Crashdetect not detected. We recommend using it for proper debugging
#endif
