//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class EnvelopContent : MonoBehaviour
{
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Transform targetRoot; //Field offset: 0x18
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int padLeft; //Field offset: 0x20
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int padRight; //Field offset: 0x24
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int padBottom; //Field offset: 0x28
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int padTop; //Field offset: 0x2C
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int minWidth; //Field offset: 0x30
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int minHeight; //Field offset: 0x34
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool ignoreDisabled; //Field offset: 0x38
	private bool mStarted; //Field offset: 0x39

	public EnvelopContent() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Execute() { }

	private void OnEnable() { }

	private void Start() { }

}

