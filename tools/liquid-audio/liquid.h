#ifdef LLAMA_SHARED
#    if defined(_WIN32) && !defined(__MINGW32__)
#        ifdef LLAMA_BUILD
#            define LIQUID_AUDIO_API __declspec(dllexport)
#        else
#            define LIQUID_AUDIO_API __declspec(dllimport)
#        endif
#    else
#        define LIQUID_AUDIO_API __attribute__ ((visibility ("default")))
#    endif
#else
#    define LIQUID_AUDIO_API
#endif
