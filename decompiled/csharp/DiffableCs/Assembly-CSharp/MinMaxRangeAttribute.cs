//Type is in global namespace

public class MinMaxRangeAttribute : PropertyAttribute
{
	public float minLimit; //Field offset: 0x10
	public float maxLimit; //Field offset: 0x14

	public MinMaxRangeAttribute(float minLimit, float maxLimit) { }

}

