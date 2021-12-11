//
// Created by leeyerim on 2021-12-11.
//

#include "C:/Users/leeyerim/Desktop/BreaktheBlocks/BreaktheBlocks/BreaktheBlocks/BreaktheBlocks.Shared/SceneManager.h"
#include <jni.h>
static SceneManager * sceneManager;

void Start(int w, int h)
{
    sceneManager = new SceneManager(w, h);
}
void Update()
{
    sceneManager->updateScene();
}
void Inputsystem()
{

}
extern "C" {

    JNIEXPORT void JNICALL Java_com_example_Blocks_GL3JNILib_Start(JNIEnv * env, jobject obj,  jint width, jint height)
    {
        Start(width, height);
    }

    JNIEXPORT void JNICALL Java_com_example_Blocks_GL3JNILib_Update(JNIEnv * env, jobject obj)
    {
        Update();
    }
    JNIEXPORT void JNICALL Java_com_example_Blocks_GL3JNILib_InputEvent(JNIEnv *env, jobject clazz) {
        // TODO: implement InputEvent()

        Inputsystem();
    }
};