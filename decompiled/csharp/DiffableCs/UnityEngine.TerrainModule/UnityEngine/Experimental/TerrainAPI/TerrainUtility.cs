namespace UnityEngine.Experimental.TerrainAPI;

public static class TerrainUtility
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass4_0
	{
		public bool onlyAutoConnectedTerrains; //Field offset: 0x10

		public <>c__DisplayClass4_0() { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass4_1
	{
		public Terrain t; //Field offset: 0x10
		public <>c__DisplayClass4_0 CS$<>8__locals1; //Field offset: 0x18

		public <>c__DisplayClass4_1() { }

		internal bool <CollectTerrains>b__0(Terrain x) { }

	}

	internal class TerrainGroups : Dictionary<Int32, TerrainMap>
	{

		public TerrainGroups() { }

	}

	internal class TerrainMap
	{
		[CompilerGenerated]
		private sealed class <>c__DisplayClass4_0
		{
			public int groupID; //Field offset: 0x10

			public <>c__DisplayClass4_0() { }

			internal bool <CreateFromPlacement>b__0(Terrain x) { }

		}

		internal enum ErrorCode
		{
			OK = 0,
			Overlapping = 1,
			SizeMismatch = 4,
			EdgeAlignmentMismatch = 8,
		}

		internal sealed class TerrainFilter : MulticastDelegate
		{

			public TerrainFilter(object object, IntPtr method) { }

			public override IAsyncResult BeginInvoke(Terrain terrain, AsyncCallback callback, object object) { }

			public override bool EndInvoke(IAsyncResult result) { }

			public override bool Invoke(Terrain terrain) { }

		}

		internal struct TileCoord
		{
			public readonly int tileX; //Field offset: 0x0
			public readonly int tileZ; //Field offset: 0x4

			public TileCoord(int tileX, int tileZ) { }

		}

		private Vector3 m_patchSize; //Field offset: 0x10
		public ErrorCode m_errorCode; //Field offset: 0x1C
		public Dictionary<TileCoord, Terrain> m_terrainTiles; //Field offset: 0x20

		public TerrainMap() { }

		private void AddTerrainInternal(int x, int z, Terrain terrain) { }

		public static TerrainMap CreateFromPlacement(Terrain originTerrain, TerrainFilter filter = null, bool fullValidation = true) { }

		public static TerrainMap CreateFromPlacement(Vector2 gridOrigin, Vector2 gridSize, TerrainFilter filter = null, bool fullValidation = true) { }

		public Terrain GetTerrain(int tileX, int tileZ) { }

		private bool TryToAddTerrain(int tileX, int tileZ, Terrain terrain) { }

		private ErrorCode Validate() { }

		private void ValidateTerrain(int tileX, int tileZ) { }

	}


	[RequiredByNativeCode]
	public static void AutoConnect() { }

	internal static void ClearConnectivity() { }

	internal static TerrainGroups CollectTerrains(bool onlyAutoConnectedTerrains = true) { }

	internal static bool HasValidTerrains() { }

}

