namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class RuntimeInitializeOnLoadMethodAttribute : PreserveAttribute
{
	private RuntimeInitializeLoadType m_LoadType; //Field offset: 0x10

	private RuntimeInitializeLoadType loadType
	{
		private set { } //Length: 8
	}

	public RuntimeInitializeOnLoadMethodAttribute() { }

	public RuntimeInitializeOnLoadMethodAttribute(RuntimeInitializeLoadType loadType) { }

	private void set_loadType(RuntimeInitializeLoadType value) { }

}

