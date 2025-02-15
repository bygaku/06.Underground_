//-----------------------------------------------------------------------------
// @brief  シーンインターフェイス.
// @remark -2025 Fujii Gaku-
//-----------------------------------------------------------------------------
#include <iostream>
#include "SceneManager.h"

void IScene::ChangeScene(std::string_view sceneName)
{
    m_manager.ChangeScene(sceneName);
}
