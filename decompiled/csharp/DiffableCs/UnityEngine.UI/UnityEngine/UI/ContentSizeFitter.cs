namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteAlways]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ContentSizeFitter : UIBehaviour, ILayoutSelfController, ILayoutController
{
	internal enum FitMode
	{
		Unconstrained = 0,
		MinSize = 1,
		PreferredSize = 2,
	}

	[SerializeField]
	protected FitMode m_HorizontalFit; //Field offset: 0x18
	[SerializeField]
	protected FitMode m_VerticalFit; //Field offset: 0x1C
	private RectTransform m_Rect; //Field offset: 0x20
	private DrivenRectTransformTracker m_Tracker; //Field offset: 0x28

	public FitMode horizontalFit
	{
		 get { } //Length: 8
		 set { } //Length: 120
	}

	private RectTransform rectTransform
	{
		private get { } //Length: 180
	}

	public FitMode verticalFit
	{
		 get { } //Length: 8
		 set { } //Length: 120
	}

	protected ContentSizeFitter() { }

	public FitMode get_horizontalFit() { }

	private RectTransform get_rectTransform() { }

	public FitMode get_verticalFit() { }

	private void HandleSelfFittingAlongAxis(int axis) { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	protected virtual void OnRectTransformDimensionsChange() { }

	public void set_horizontalFit(FitMode value) { }

	public void set_verticalFit(FitMode value) { }

	protected void SetDirty() { }

	public override void SetLayoutHorizontal() { }

	public override void SetLayoutVertical() { }

}

