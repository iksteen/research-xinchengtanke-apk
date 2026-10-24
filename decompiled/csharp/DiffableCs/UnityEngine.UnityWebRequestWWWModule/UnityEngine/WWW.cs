namespace UnityEngine;

[Obsolete]
public class WWW : CustomYieldInstruction, IDisposable
{
	private UnityWebRequest _uwr; //Field offset: 0x10

	public virtual bool keepWaiting
	{
		 get { } //Length: 48
	}

	public override void Dispose() { }

	public virtual bool get_keepWaiting() { }

}

