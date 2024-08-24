/**
*
*     Main include file 
**    @Created on: 23/08/24
**    @Edited on: 23/08/24
**    @Version: InDev 0.1 
**    @Author: Victor Ghost and contributors. Thanks To Silva Scripter community :)
**    @Github: https://github.com/VictorMacielGhost/omp-debug-include
*
*!    This File will use DD/MM/YY or DD/MM/YYYY for datas
*!    This File will also use American English 
*
*!     This Code is free to use and modify, do not remove credits    
*
*/

#if defined omp_debug_included
    #warning omp_debug include has included twice.
    #endinput
#endif

// #define OMP_DEBUG_NO_HELP_WARNINGS 
#define OMP_DEBUG_VERSION "inDev 0.1"
#define omp_debug_included

#tryinclude <open.mp>
#if defined omp_defined // Change to the real definition, I don't remember rn
    #define OMP_DEBUG_USING_OMP_SERVER
#else
    #tryinclude <a_samp>
    #if defined !samp_defined // Change to the real definition
        #error You must include open.mp or a_samp include before using OMP_DEBUG!
    #else
        #define OMP_DEBUG_USING_SAMP_SERVER
    #endif
#endif

// Use #define OMP_DEBUG_NO_HELP_WARNINGS to disable the warnings below

#if defined streamer_included // Change to real definition
    #define OMP_DEBUG_USING_STREAMER
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning The script was compiled without streamer, the debugger will use samp native obj reader
#endif

#if defined sscanf_included // Change to real definition
    #define OMP_DEBUG_USING_SSCANF
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning Couldn't find sscanf, some strings debug functions might not be avaible
#endif

#if defined ysi_included // Change to real definition
    #define OMP_DEBUG_USING_YSI
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning YSI wasn't found. Foreach loops, function and events hooks won't be avaible
#endif

#if defined crashdetect_included // Change to real definition
    #define OMP_DEBUG_USING_CRASHDETECT
#elseif !defined OMP_DEBUG_NO_HELP_WARNINGS
    #warning Crashdetect not detected, we recommend the use for a proper debug
#endif

main()
{
    new date[6];
    
    gettime(date[0], date[1], date[2]);
    gettdate(date[3], date[4], date[5]);
    
    printf("Server started in: %02d:%02d:%02d - %02d/%02d/%04d", date[0], date[1], date[2], date[5], date[4], date[3]);
}