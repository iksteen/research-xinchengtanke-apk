namespace System;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class object
{

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Object() { }

	public override bool Equals(object obj) { }

	public static bool Equals(object objA, object objB) { }

	private void FieldGetter(string typeName, string fieldName, ref object val) { }

	private void FieldSetter(string typeName, string fieldName, object val) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected override void Finalize() { }

	public override int GetHashCode() { }

	public Type GetType() { }

	internal static int InternalGetHashCode(object o) { }

	protected object MemberwiseClone() { }

	public override string ToString() { }

}

