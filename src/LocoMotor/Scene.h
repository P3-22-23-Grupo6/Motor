#pragma once

#include <string>
#include <vector>

namespace OgreWrapper {
	class Camera;
	class RenderScene;
	class Node;
}

namespace LocoMotor {
	class GameObject;
	class Scene {
	public:

		Scene(std::string nombre);
		~Scene();
		void Start();

		void Update(float dt);
		void Render();

		//?
		void Deactivate();

		//Activate



		bool GetActiveStatus();

		std::string GetSceneName();

		void SetSceneCam(OgreWrapper::Camera* cam);


		void AddObject(GameObject* obj);

	private:
		//camera


		OgreWrapper::Camera* _cam;

		//nombre de la escena
		std::string _name;

		bool _isActiveScene = false;

		OgreWrapper::RenderScene* _renderScn;

		std::vector<GameObject*> _gameObjList;

		OgreWrapper::Node* _nod;



		OgreWrapper::Node* node;
	};
}