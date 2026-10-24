//Type is in global namespace

public class TweenLetters : UITweener
{
	[DoNotObfuscateNGUI]
	internal enum AnimationLetterOrder
	{
		Forward = 0,
		Reverse = 1,
		Random = 2,
	}

	internal class AnimationProperties
	{
		[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public float duration; //Field offset: 0x10
		public AnimationLetterOrder animationOrder; //Field offset: 0x14
		[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public float overlap; //Field offset: 0x18
		[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public bool randomDurations; //Field offset: 0x1C
		[MinMaxRange(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public Vector2 randomness; //Field offset: 0x20
		[HideInInspector]
		public bool upgraded; //Field offset: 0x28
		[HideInInspector]
		public Vector2 offsetRange; //Field offset: 0x2C
		[HideInInspector]
		public Vector3 pos; //Field offset: 0x34
		[HideInInspector]
		public Vector3 rot; //Field offset: 0x40
		[HideInInspector]
		public Vector3 scale; //Field offset: 0x4C
		public Vector3 pos1; //Field offset: 0x58
		public Vector3 pos2; //Field offset: 0x64
		public Vector3 rot1; //Field offset: 0x70
		public Vector3 rot2; //Field offset: 0x7C
		public Vector3 scale1; //Field offset: 0x88
		public Vector3 scale2; //Field offset: 0x94
		[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
		[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
		public float alpha; //Field offset: 0xA0

		public AnimationProperties() { }

		public void Upgrade() { }

	}

	private struct LetterProperties
	{
		public float start; //Field offset: 0x0
		public float duration; //Field offset: 0x4
		public Vector3 pos; //Field offset: 0x8
		public Quaternion rot; //Field offset: 0x14
		public Vector3 scale; //Field offset: 0x24

	}

	public AnimationProperties hoverOver; //Field offset: 0x80
	public AnimationProperties hoverOut; //Field offset: 0x88
	private UILabel mLabel; //Field offset: 0x90
	private int mVertexCount; //Field offset: 0x98
	private Int32[] mLetterOrder; //Field offset: 0xA0
	private LetterProperties[] mLetter; //Field offset: 0xA8
	private AnimationProperties mCurrent; //Field offset: 0xB0

	public TweenLetters() { }

	private static Vector3 GetCenter(List<Vector3> verts, int firstVert, int length) { }

	private void GetLetterDuration(int letterCount) { }

	protected virtual void OnDisable() { }

	private void OnEnable() { }

	private void OnPostFill(UIWidget widget, int bufferOffset, List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

	protected void OnValidate() { }

	public virtual void Play(bool forward) { }

	private float ScaleRange(float value, float baseMax, float limitMax) { }

	private void SetLetterOrder(int letterCount) { }

}

