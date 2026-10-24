namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IFormattable
{

	public string ToString(string format, IFormatProvider formatProvider) { }

}

