#include "pch.h"
#include "Scene.h"

namespace MG1
{
	std::shared_ptr<Scene> Scene::s_instance = nullptr;

	Scene& MG1::Scene::Get()
	{
		if (!s_instance)
		{
			s_instance = std::shared_ptr<Scene>(new Scene());
		}

		return *s_instance;
	}
	
	void Scene::Clear()
	{
		points.clear();
		tori.clear();

		bezierC0.clear();
		bezierC2.clear();
		interpolatedC2.clear();

		surfacesC0.clear();
		surfacesC2.clear();
	}
}
