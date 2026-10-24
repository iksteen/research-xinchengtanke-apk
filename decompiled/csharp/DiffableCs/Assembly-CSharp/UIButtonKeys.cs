//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIButtonKeys : UIKeyNavigation
{
	public UIButtonKeys selectOnClick; //Field offset: 0x58
	public UIButtonKeys selectOnUp; //Field offset: 0x60
	public UIButtonKeys selectOnDown; //Field offset: 0x68
	public UIButtonKeys selectOnLeft; //Field offset: 0x70
	public UIButtonKeys selectOnRight; //Field offset: 0x78

	public UIButtonKeys() { }

	protected virtual void OnEnable() { }

	public void Upgrade() { }

}

