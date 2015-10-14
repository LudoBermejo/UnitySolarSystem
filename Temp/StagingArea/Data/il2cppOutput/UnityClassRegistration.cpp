struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

}

void RegisterAllClasses()
{
	//Total: 56 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//7. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//8. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//9. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//10. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//11. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//12. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//13. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//16. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//17. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//18. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//19. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//20. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//21. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//22. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//23. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//24. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//25. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//26. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//27. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//30. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//31. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//32. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//33. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//34. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//35. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//36. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//37. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//38. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//39. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//40. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//41. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//42. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//43. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//44. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//45. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//46. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//47. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//48. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//49. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//50. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//51. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//52. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//53. NetworkManager
	//Skipping NetworkManager

	//54. MasterServerInterface
	//Skipping MasterServerInterface

	//55. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
