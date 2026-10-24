namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class Terrain : Behaviour
{

	[NativeProperty]
	public static Terrain[] activeTerrains
	{
		 get { } //Length: 52
	}

	public bool allowAutoConnect
	{
		 get { } //Length: 64
	}

	public int groupingID
	{
		 get { } //Length: 64
	}

	public TerrainData terrainData
	{
		 get { } //Length: 64
	}

	public Terrain() { }

	public static Terrain[] get_activeTerrains() { }

	public bool get_allowAutoConnect() { }

	public int get_groupingID() { }

	public TerrainData get_terrainData() { }

	public void SetNeighbors(Terrain left, Terrain top, Terrain right, Terrain bottom) { }

}

