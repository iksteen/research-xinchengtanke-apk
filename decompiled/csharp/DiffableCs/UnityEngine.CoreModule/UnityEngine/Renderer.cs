namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public class Renderer : Component
{

	public bool enabled
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public Material material
	{
		 get { } //Length: 64
	}

	public Material[] materials
	{
		 get { } //Length: 64
	}

	public bool receiveShadows
	{
		 set { } //Length: 80
	}

	public ShadowCastingMode shadowCastingMode
	{
		 set { } //Length: 80
	}

	public Material sharedMaterial
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public Material[] sharedMaterials
	{
		 set { } //Length: 80
	}

	internal int sortingGroupID
	{
		internal get { } //Length: 64
	}

	internal int sortingGroupOrder
	{
		internal get { } //Length: 64
	}

	public int sortingLayerID
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public string sortingLayerName
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public int sortingOrder
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public bool get_enabled() { }

	public Material get_material() { }

	public Material[] get_materials() { }

	public Material get_sharedMaterial() { }

	internal int get_sortingGroupID() { }

	internal int get_sortingGroupOrder() { }

	public int get_sortingLayerID() { }

	public string get_sortingLayerName() { }

	public int get_sortingOrder() { }

	[FreeFunction]
	private Material GetMaterial() { }

	[FreeFunction]
	private Material[] GetMaterialArray() { }

	[FreeFunction]
	private Material GetSharedMaterial() { }

	[FreeFunction]
	internal void Internal_SetPropertyBlock(MaterialPropertyBlock properties) { }

	public void set_enabled(bool value) { }

	public void set_receiveShadows(bool value) { }

	public void set_shadowCastingMode(ShadowCastingMode value) { }

	public void set_sharedMaterial(Material value) { }

	public void set_sharedMaterials(Material[] value) { }

	public void set_sortingLayerID(int value) { }

	public void set_sortingLayerName(string value) { }

	public void set_sortingOrder(int value) { }

	[FreeFunction]
	private void SetMaterial(Material m) { }

	[FreeFunction]
	private void SetMaterialArray(Material[] m) { }

	public void SetPropertyBlock(MaterialPropertyBlock properties) { }

}

