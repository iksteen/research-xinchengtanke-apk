namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class FormatterConverter : IFormatterConverter
{

	public FormatterConverter() { }

	public override object Convert(object value, Type type) { }

	public override bool ToBoolean(object value) { }

	public override int ToInt32(object value) { }

	public override long ToInt64(object value) { }

	public override float ToSingle(object value) { }

	public override string ToString(object value) { }

}

