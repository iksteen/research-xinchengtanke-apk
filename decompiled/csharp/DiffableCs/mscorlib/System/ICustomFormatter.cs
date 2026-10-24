namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ICustomFormatter
{

	public string Format(string format, object arg, IFormatProvider formatProvider) { }

}

