#pragma once
#include <string_view>

class SceneManager;

/// @brief シーンインターフェイス
class IScene
{
public:
	IScene(SceneManager& manager)
		: m_manager(manager) {};

	virtual ~IScene() = default;

	virtual void Initialize() {};
	virtual void Update() {};
	virtual void Draw() const {};
	virtual void Timer(float deltaTime) {};
protected:
	/// @brief シーンを切り替えます。
	/// @param sceneName 切り替え先のシーン名
	void ChangeScene(std::string_view sceneName);

	/// @brief シーンの切替前の処理を行います。
	virtual void SceneFinalizeCondition() {};
private:
	IScene& m_manager;	/// @brief シーンマネージャーの参照

protected:
	float m_timeScene = 0.0f;	/// @brief Time from current scene.
};
