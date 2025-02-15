//-----------------------------------------------------------------------------
// @brief  ÉÅÉCÉìèàóù.
// @remark -2025 Fujii Gaku-
//-----------------------------------------------------------------------------

/// @brief Applies to "Main func" or something else in this project.
#include "DxLib.h"
#include "LoopCondition.h"
#include "Screen.h"
#include "FPS.h"

/// @brief Header for added scenes and management class.
#include "SceneManager.h"


int WINAPI WinMain(_In_		HINSTANCE hInstance,
				   _In_opt_ HINSTANCE hPrevInstance,
				   _In_		LPSTR lpCmdLine,
				   _In_		int nCmdShow)
{
	SetGraphMode(k_SCREEN_WIDTH, k_SCREEN_HEIGHT, 16);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)	return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	SceneManager sceneManager;



	while (LoopCondition())
	{
		sceneManager.Update();
		sceneManager.Draw();
	}


	DxLib_End();
	return 0;
}