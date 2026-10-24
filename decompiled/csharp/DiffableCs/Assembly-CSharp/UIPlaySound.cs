//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIPlaySound : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Trigger
	{
		OnClick = 0,
		OnMouseOver = 1,
		OnMouseOut = 2,
		OnPress = 3,
		OnRelease = 4,
		Custom = 5,
		OnEnable = 6,
		OnDisable = 7,
	}

	public AudioClip audioClip; //Field offset: 0x18
	public Trigger trigger; //Field offset: 0x20
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float volume; //Field offset: 0x24
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float pitch; //Field offset: 0x28
	private bool mIsOver; //Field offset: 0x2C

	private bool canPlay
	{
		private get { } //Length: 212
	}

	public UIPlaySound() { }

	private bool get_canPlay() { }

	private void OnClick() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool isPressed) { }

	private void OnSelect(bool isSelected) { }

	public void Play() { }

}

