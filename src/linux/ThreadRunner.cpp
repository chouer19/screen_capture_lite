#include "ScreenCapture.h"
#include "ThreadManager.h"
#include "X11FrameProcessor.h"


namespace SL{
    namespace Screen_Capture{	
	void RunCaptureMouse(std::shared_ptr<Mouse_Thread_Data> data) {

			}
        void RunCapture(std::shared_ptr<THREAD_DATA> data){
            
            
            TryCapture<X11FrameProcessor>(data);
            
        }
    }
}

  
    
