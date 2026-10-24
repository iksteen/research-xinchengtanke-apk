namespace UnityEngine.SceneManagement;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct Scene
{
	[HideInInspector]
	[SerializeField]
	private int m_Handle; //Field offset: 0x0

	public int handle
	{
		 get { } //Length: 8
	}

	public string name
	{
		 get { } //Length: 64
	}

	public virtual bool Equals(object other) { }

	public int get_handle() { }

	public string get_name() { }

	public virtual int GetHashCode() { }

	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static string GetNameInternal(int sceneHandle) { }

}

