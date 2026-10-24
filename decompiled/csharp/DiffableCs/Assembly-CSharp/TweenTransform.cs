//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TweenTransform : UITweener
{
	public Transform from; //Field offset: 0x80
	public Transform to; //Field offset: 0x88
	public bool parentWhenFinished; //Field offset: 0x90
	private Transform mTrans; //Field offset: 0x98
	private Vector3 mPos; //Field offset: 0xA0
	private Quaternion mRot; //Field offset: 0xAC
	private Vector3 mScale; //Field offset: 0xBC

	public TweenTransform() { }

	public static TweenTransform Begin(GameObject go, float duration, Transform to) { }

	public static TweenTransform Begin(GameObject go, float duration, Transform from, Transform to) { }

	protected virtual void OnUpdate(float factor, bool isFinished) { }

}

