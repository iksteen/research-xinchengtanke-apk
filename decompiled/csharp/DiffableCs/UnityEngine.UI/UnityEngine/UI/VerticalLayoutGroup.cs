namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class VerticalLayoutGroup : HorizontalOrVerticalLayoutGroup
{

	protected VerticalLayoutGroup() { }

	public virtual void CalculateLayoutInputHorizontal() { }

	public virtual void CalculateLayoutInputVertical() { }

	public virtual void SetLayoutHorizontal() { }

	public virtual void SetLayoutVertical() { }

}

