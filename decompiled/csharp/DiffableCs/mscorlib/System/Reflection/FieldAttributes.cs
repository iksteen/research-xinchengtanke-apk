namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum FieldAttributes
{
	FieldAccessMask = 7,
	PrivateScope = 0,
	Private = 1,
	FamANDAssem = 2,
	Assembly = 3,
	Family = 4,
	FamORAssem = 5,
	Public = 6,
	Static = 16,
	InitOnly = 32,
	Literal = 64,
	NotSerialized = 128,
	SpecialName = 512,
	PinvokeImpl = 8192,
	ReservedMask = 38144,
	RTSpecialName = 1024,
	HasFieldMarshal = 4096,
	HasDefault = 32768,
	HasFieldRVA = 256,
}

