namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Obsolete]
public class CaseInsensitiveHashCodeProvider : IHashCodeProvider
{
	private TextInfo m_text; //Field offset: 0x10

	public static CaseInsensitiveHashCodeProvider Default
	{
		 get { } //Length: 148
	}

	public CaseInsensitiveHashCodeProvider() { }

	public CaseInsensitiveHashCodeProvider(CultureInfo culture) { }

	public static CaseInsensitiveHashCodeProvider get_Default() { }

	public override int GetHashCode(object obj) { }

}

