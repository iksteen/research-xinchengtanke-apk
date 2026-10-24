namespace UnityEngine.Rendering;

[NativeType]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SortingGroup : Behaviour
{

	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal static int invalidSortingGroupID
	{
		internal get { } //Length: 52
	}

	public int sortingLayerID
	{
		 get { } //Length: 64
	}

	public int sortingOrder
	{
		 get { } //Length: 64
	}

	public SortingGroup() { }

	internal static int get_invalidSortingGroupID() { }

	public int get_sortingLayerID() { }

	public int get_sortingOrder() { }

	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal static SortingGroup GetSortingGroupByIndex(int index) { }

}

