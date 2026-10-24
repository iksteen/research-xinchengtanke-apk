namespace System.Runtime.Serialization;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IFormatterConverter
{

	public object Convert(object value, Type type) { }

	public bool ToBoolean(object value) { }

	public int ToInt32(object value) { }

	public long ToInt64(object value) { }

	public float ToSingle(object value) { }

	public string ToString(object value) { }

}

