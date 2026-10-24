namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IFormatProvider
{

	public object GetFormat(Type formatType) { }

}

