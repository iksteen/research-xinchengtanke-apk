//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class PropertyBinding : MonoBehaviour
{
	[DoNotObfuscateNGUI]
	internal enum Direction
	{
		SourceUpdatesTarget = 0,
		TargetUpdatesSource = 1,
		BiDirectional = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum UpdateCondition
	{
		OnStart = 0,
		OnUpdate = 1,
		OnLateUpdate = 2,
		OnFixedUpdate = 3,
	}

	public PropertyReference source; //Field offset: 0x18
	public PropertyReference target; //Field offset: 0x20
	public Direction direction; //Field offset: 0x28
	public UpdateCondition update; //Field offset: 0x2C
	public bool editMode; //Field offset: 0x30
	private object mLastValue; //Field offset: 0x38

	public PropertyBinding() { }

	private void FixedUpdate() { }

	private void LateUpdate() { }

	private void OnValidate() { }

	private void Start() { }

	private void Update() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void UpdateTarget() { }

}

