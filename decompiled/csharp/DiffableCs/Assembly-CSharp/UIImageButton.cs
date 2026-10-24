//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIImageButton : MonoBehaviour
{
	public UISprite target; //Field offset: 0x18
	public string normalSprite; //Field offset: 0x20
	public string hoverSprite; //Field offset: 0x28
	public string pressedSprite; //Field offset: 0x30
	public string disabledSprite; //Field offset: 0x38
	public bool pixelSnap; //Field offset: 0x40

	public bool isEnabled
	{
		 get { } //Length: 192
		 set { } //Length: 236
	}

	public UIImageButton() { }

	public bool get_isEnabled() { }

	private void OnEnable() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool pressed) { }

	private void OnValidate() { }

	public void set_isEnabled(bool value) { }

	private void SetSprite(string sprite) { }

	private void UpdateImage() { }

}

